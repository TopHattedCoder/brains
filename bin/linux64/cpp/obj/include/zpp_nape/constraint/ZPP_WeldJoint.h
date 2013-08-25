#ifndef INCLUDED_zpp_nape_constraint_ZPP_WeldJoint
#define INCLUDED_zpp_nape_constraint_ZPP_WeldJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/constraint/ZPP_Constraint.h>
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,WeldJoint)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_WeldJoint)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ZPP_WeldJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_WeldJoint_obj OBJ_;
		ZPP_WeldJoint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_WeldJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_WeldJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_WeldJoint"); }

		virtual Void draw( ::nape::util::Debug g);

		virtual bool applyImpulsePos( );

		virtual bool applyImpulseVel( );

		virtual Void warmStart( );

		virtual bool preStep( Float dt);

		virtual Void clearcache( );

		virtual bool pair_exists( int id,int di);

		virtual Void forest( );

		virtual Void wake_connected( );

		virtual Void validate( );

		virtual ::nape::constraint::Constraint copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo);

		bool stepped;
		Float biasz;
		Float biasy;
		Float biasx;
		Float gamma;
		Float jMax;
		Float jAccz;
		Float jAccy;
		Float jAccx;
		Float kMassf;
		Float kMasse;
		Float kMassc;
		Float kMassd;
		Float kMassb;
		Float kMassa;
		Float phase;
		::nape::geom::Vec2 wrap_a2;
		virtual Void setup_a2( );
		Dynamic setup_a2_dyn();

		virtual Void invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a2_dyn();

		virtual Void validate_a2( );
		Dynamic validate_a2_dyn();

		Float a2rely;
		Float a2relx;
		Float a2localy;
		Float a2localx;
		::zpp_nape::phys::ZPP_Body b2;
		::nape::geom::Vec2 wrap_a1;
		virtual Void setup_a1( );
		Dynamic setup_a1_dyn();

		virtual Void invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a1_dyn();

		virtual Void validate_a1( );
		Dynamic validate_a1_dyn();

		Float a1rely;
		Float a1relx;
		Float a1localy;
		Float a1localx;
		::zpp_nape::phys::ZPP_Body b1;
		virtual Void inactiveBodies( );

		virtual Void activeBodies( );

		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		::nape::constraint::WeldJoint outer_zn;
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_WeldJoint */ 
