#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#define INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/dynamics/ZPP_Arbiter.h>
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,CollisionArbiter)
HX_DECLARE_CLASS2(nape,dynamics,Contact)
HX_DECLARE_CLASS2(nape,dynamics,ContactList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Contact)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_IContact)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Edge)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace zpp_nape{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  ZPP_ColArbiter_obj : public ::zpp_nape::dynamics::ZPP_Arbiter_obj{
	public:
		typedef ::zpp_nape::dynamics::ZPP_Arbiter_obj super;
		typedef ZPP_ColArbiter_obj OBJ_;
		ZPP_ColArbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_ColArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_ColArbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_ColArbiter"); }

		virtual Void applyImpulsePos( );
		Dynamic applyImpulsePos_dyn();

		virtual Void applyImpulseVel( );
		Dynamic applyImpulseVel_dyn();

		virtual Void warmStart( );
		Dynamic warmStart_dyn();

		virtual bool preStep( Float dt);
		Dynamic preStep_dyn();

		Float pre_dt;
		virtual bool cleanupContacts( );
		Dynamic cleanupContacts_dyn();

		virtual Void setupcontacts( );
		Dynamic setupcontacts_dyn();

		virtual Void contacts_subber( ::nape::dynamics::Contact x);
		Dynamic contacts_subber_dyn();

		virtual bool contacts_adder( ::nape::dynamics::Contact x);
		Dynamic contacts_adder_dyn();

		virtual Void makeimmutable( );
		Dynamic makeimmutable_dyn();

		virtual Void makemutable( );
		Dynamic makemutable_dyn();

		bool _mutable;
		virtual Void retire( );
		Dynamic retire_dyn();

		virtual Void validate_props( );
		Dynamic validate_props_dyn();

		virtual Void calcProperties( );
		Dynamic calcProperties_dyn();

		virtual Void assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di);
		Dynamic assign_dyn();

		virtual ::zpp_nape::dynamics::ZPP_Contact injectContact( Float px,Float py,Float nx,Float ny,Float dist,int hash,hx::Null< bool >  posOnly);
		Dynamic injectContact_dyn();

		bool stat;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::dynamics::ZPP_ColArbiter next;
		bool hpc2;
		bool hc2;
		::zpp_nape::dynamics::ZPP_Contact oc2;
		::zpp_nape::dynamics::ZPP_IContact c2;
		::zpp_nape::dynamics::ZPP_Contact oc1;
		::zpp_nape::dynamics::ZPP_IContact c1;
		int __ref_vertex;
		::zpp_nape::shape::ZPP_Edge __ref_edge2;
		::zpp_nape::shape::ZPP_Edge __ref_edge1;
		Float biasCoef;
		bool rev;
		Float radius;
		Float lproj;
		Float lnormy;
		Float lnormx;
		int ptype;
		Float surfacey;
		Float surfacex;
		Float k2y;
		Float k2x;
		Float k1y;
		Float k1x;
		Float rt2b;
		Float rn2b;
		Float rt2a;
		Float rn2a;
		Float rt1b;
		Float rn1b;
		Float rt1a;
		Float rn1a;
		Float jrAcc;
		Float rMass;
		Float Kc;
		Float Kb;
		Float Ka;
		Float kMassc;
		Float kMassb;
		Float kMassa;
		virtual Void getnormal( );
		Dynamic getnormal_dyn();

		::nape::geom::Vec2 wrap_normal;
		virtual Void normal_validate( );
		Dynamic normal_validate_dyn();

		Float ny;
		Float nx;
		::zpp_nape::dynamics::ZPP_IContact innards;
		::nape::dynamics::ContactList wrap_contacts;
		::zpp_nape::dynamics::ZPP_Contact contacts;
		::zpp_nape::shape::ZPP_Shape s2;
		::zpp_nape::shape::ZPP_Shape s1;
		bool userdef_rfric;
		bool userdef_restitution;
		bool userdef_stat_fric;
		bool userdef_dyn_fric;
		Float rfric;
		Float restitution;
		Float stat_fric;
		Float dyn_fric;
		::nape::dynamics::CollisionArbiter outer_zn;
		static ::zpp_nape::dynamics::ZPP_ColArbiter zpp_pool;
};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter */ 
