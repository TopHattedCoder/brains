#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void Arbiter_obj::__construct()
{
HX_STACK_FRAME("Arbiter","new","Arbiter.new","nape/dynamics/Arbiter.hx",180)
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
	HX_STACK_LINE(363)
	if ((!(::zpp_nape::dynamics::ZPP_Arbiter_obj::internal))){
		HX_STACK_LINE(365)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot instantiate Arbiter derp!"));
	}
}
;
	return null();
}

Arbiter_obj::~Arbiter_obj() { }

Dynamic Arbiter_obj::__CreateEmpty() { return  new Arbiter_obj; }
hx::ObjectPtr< Arbiter_obj > Arbiter_obj::__new()
{  hx::ObjectPtr< Arbiter_obj > result = new Arbiter_obj();
	result->__construct();
	return result;}

Dynamic Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Arbiter_obj > result = new Arbiter_obj();
	result->__construct();
	return result;}

::String Arbiter_obj::toString( ){
	HX_STACK_FRAME("Arbiter","toString","Arbiter.toString","nape/dynamics/Arbiter.hx",372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	::String ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(373)
	if (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
		HX_STACK_LINE(373)
		ret = HX_CSTRING("CollisionArbiter");
	}
	else{
		HX_STACK_LINE(374)
		if (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
			HX_STACK_LINE(374)
			ret = HX_CSTRING("FluidArbiter");
		}
		else{
			HX_STACK_LINE(375)
			ret = HX_CSTRING("SensorArbiter");
		}
	}
	HX_STACK_LINE(378)
	if ((this->zpp_inner->cleared)){
		HX_STACK_LINE(378)
		return (ret + HX_CSTRING("(object-pooled)"));
	}
	else{
		struct _Function_2_1{
			inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",379)
				{
					HX_STACK_LINE(379)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(379)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(379)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(__this->zpp_inner->ws2->outer) : ::nape::shape::Shape(__this->zpp_inner->ws1->outer) );
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",379)
				{
					HX_STACK_LINE(379)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(379)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(379)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(__this->zpp_inner->ws1->outer) : ::nape::shape::Shape(__this->zpp_inner->ws2->outer) );
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static ::nape::callbacks::PreFlag Block( ::nape::dynamics::Arbiter_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",379)
				{
					HX_STACK_LINE(379)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(379)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
					}
					struct _Function_3_1{
						inline static ::nape::callbacks::PreFlag Block( ::nape::dynamics::Arbiter_obj *__this){
							HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",379)
							{
								HX_STACK_LINE(379)
								::nape::dynamics::Arbiter _g = __this;		HX_STACK_VAR(_g,"_g");
								struct _Function_4_1{
									inline static ::nape::callbacks::PreFlag Block( ::nape::dynamics::Arbiter &_g){
										HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",379)
										{
											HX_STACK_LINE(379)
											int _switch_1 = (_g->zpp_inner->immState);
											if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT) ||  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS)){
												HX_STACK_LINE(379)
												if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT == null()))){
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::internal = true;
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = ::nape::callbacks::PreFlag_obj::__new();
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::internal = false;
												}
												HX_STACK_LINE(379)
												return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
											}
											else if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT)){
												HX_STACK_LINE(379)
												if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE == null()))){
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::internal = true;
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = ::nape::callbacks::PreFlag_obj::__new();
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::internal = false;
												}
												HX_STACK_LINE(379)
												return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
											}
											else if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_IGNORE) ||  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS)){
												HX_STACK_LINE(379)
												if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE == null()))){
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::internal = true;
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = ::nape::callbacks::PreFlag_obj::__new();
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::internal = false;
												}
												HX_STACK_LINE(379)
												return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
											}
											else  {
												HX_STACK_LINE(379)
												if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE == null()))){
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::internal = true;
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = ::nape::callbacks::PreFlag_obj::__new();
													HX_STACK_LINE(379)
													::zpp_nape::util::ZPP_Flags_obj::internal = false;
												}
												HX_STACK_LINE(379)
												return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
											}
;
;
										}
										return null();
									}
								};
								HX_STACK_LINE(379)
								return _Function_4_1::Block(_g);
							}
							return null();
						}
					};
					HX_STACK_LINE(379)
					return _Function_3_1::Block(__this);
				}
				return null();
			}
		};
		HX_STACK_LINE(379)
		return ((((((((ret + HX_CSTRING("(")) + (_Function_2_1::Block(this))->toString()) + HX_CSTRING("|")) + (_Function_2_2::Block(this))->toString()) + HX_CSTRING(")")) + ((  (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::String(((HX_CSTRING("[") + Array_obj< ::String >::__new().Add(HX_CSTRING("SD")).Add(HX_CSTRING("DD"))->__get((  ((this->zpp_inner->colarb->stat)) ? int((int)0) : int((int)1) ))) + HX_CSTRING("]"))) : ::String(HX_CSTRING("")) ))) + HX_CSTRING("<-")) + (_Function_2_3::Block(this))->toString());
	}
	HX_STACK_LINE(378)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,toString,return )

::nape::geom::Vec3 Arbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("Arbiter","totalImpulse","Arbiter.totalImpulse","nape/dynamics/Arbiter.hx",350)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(352)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(352)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static ::nape::phys::Body Block( ::nape::dynamics::Arbiter_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",355)
				{
					HX_STACK_LINE(355)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(355)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(355)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b2->outer) : ::nape::phys::Body(__this->zpp_inner->b1->outer) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::phys::Body Block( ::nape::dynamics::Arbiter_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",355)
				{
					HX_STACK_LINE(355)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(355)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(355)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b1->outer) : ::nape::phys::Body(__this->zpp_inner->b2->outer) );
				}
				return null();
			}
		};
		HX_STACK_LINE(355)
		if (((bool((bool((body != null())) && bool((body != _Function_1_1::Block(this))))) && bool((body != _Function_1_2::Block(this)))))){
			HX_STACK_LINE(355)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(357)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Arbiter_obj,totalImpulse,return )

::nape::callbacks::PreFlag Arbiter_obj::get_state( ){
	HX_STACK_FRAME("Arbiter","get_state","Arbiter.get_state","nape/dynamics/Arbiter.hx",323)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(325)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(327)
	::nape::dynamics::Arbiter _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(327)
	int _switch_2 = (_g->zpp_inner->immState);
	if (  ( _switch_2==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT) ||  ( _switch_2==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS)){
		HX_STACK_LINE(328)
		if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT == null()))){
			HX_STACK_LINE(328)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(328)
			::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = ::nape::callbacks::PreFlag_obj::__new();
			HX_STACK_LINE(328)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(328)
		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
	}
	else if (  ( _switch_2==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT)){
		HX_STACK_LINE(329)
		if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE == null()))){
			HX_STACK_LINE(329)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(329)
			::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = ::nape::callbacks::PreFlag_obj::__new();
			HX_STACK_LINE(329)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(329)
		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
	}
	else if (  ( _switch_2==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_IGNORE) ||  ( _switch_2==::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ALWAYS)){
		HX_STACK_LINE(330)
		if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE == null()))){
			HX_STACK_LINE(330)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(330)
			::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = ::nape::callbacks::PreFlag_obj::__new();
			HX_STACK_LINE(330)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(330)
		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
	}
	else  {
		HX_STACK_LINE(331)
		if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE == null()))){
			HX_STACK_LINE(331)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(331)
			::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = ::nape::callbacks::PreFlag_obj::__new();
			HX_STACK_LINE(331)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(331)
		return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
	}
;
;
	HX_STACK_LINE(327)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_state,return )

::nape::phys::Body Arbiter_obj::get_body2( ){
	HX_STACK_FRAME("Arbiter","get_body2","Arbiter.get_body2","nape/dynamics/Arbiter.hx",305)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(309)
	if (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))){
		HX_STACK_LINE(309)
		return this->zpp_inner->b1->outer;
	}
	else{
		HX_STACK_LINE(309)
		return this->zpp_inner->b2->outer;
	}
	HX_STACK_LINE(309)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_body2,return )

::nape::phys::Body Arbiter_obj::get_body1( ){
	HX_STACK_FRAME("Arbiter","get_body1","Arbiter.get_body1","nape/dynamics/Arbiter.hx",292)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(294)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(296)
	if (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))){
		HX_STACK_LINE(296)
		return this->zpp_inner->b2->outer;
	}
	else{
		HX_STACK_LINE(296)
		return this->zpp_inner->b1->outer;
	}
	HX_STACK_LINE(296)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_body1,return )

::nape::shape::Shape Arbiter_obj::get_shape2( ){
	HX_STACK_FRAME("Arbiter","get_shape2","Arbiter.get_shape2","nape/dynamics/Arbiter.hx",279)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(281)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(283)
	if (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))){
		HX_STACK_LINE(283)
		return this->zpp_inner->ws1->outer;
	}
	else{
		HX_STACK_LINE(283)
		return this->zpp_inner->ws2->outer;
	}
	HX_STACK_LINE(283)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_shape2,return )

::nape::shape::Shape Arbiter_obj::get_shape1( ){
	HX_STACK_FRAME("Arbiter","get_shape1","Arbiter.get_shape1","nape/dynamics/Arbiter.hx",266)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(268)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(270)
	if (((this->zpp_inner->ws1->id > this->zpp_inner->ws2->id))){
		HX_STACK_LINE(270)
		return this->zpp_inner->ws2->outer;
	}
	else{
		HX_STACK_LINE(270)
		return this->zpp_inner->ws1->outer;
	}
	HX_STACK_LINE(270)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_shape1,return )

::nape::dynamics::FluidArbiter Arbiter_obj::get_fluidArbiter( ){
	HX_STACK_FRAME("Arbiter","get_fluidArbiter","Arbiter.get_fluidArbiter","nape/dynamics/Arbiter.hx",257)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	if (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
		HX_STACK_LINE(257)
		return this->zpp_inner->fluidarb->outer_zn;
	}
	else{
		HX_STACK_LINE(257)
		return null();
	}
	HX_STACK_LINE(257)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_fluidArbiter,return )

::nape::dynamics::CollisionArbiter Arbiter_obj::get_collisionArbiter( ){
	HX_STACK_FRAME("Arbiter","get_collisionArbiter","Arbiter.get_collisionArbiter","nape/dynamics/Arbiter.hx",247)
	HX_STACK_THIS(this)
	HX_STACK_LINE(247)
	if (((this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
		HX_STACK_LINE(247)
		return this->zpp_inner->colarb->outer_zn;
	}
	else{
		HX_STACK_LINE(247)
		return null();
	}
	HX_STACK_LINE(247)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_collisionArbiter,return )

bool Arbiter_obj::isSensorArbiter( ){
	HX_STACK_FRAME("Arbiter","isSensorArbiter","Arbiter.isSensorArbiter","nape/dynamics/Arbiter.hx",237)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR);
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isSensorArbiter,return )

bool Arbiter_obj::isFluidArbiter( ){
	HX_STACK_FRAME("Arbiter","isFluidArbiter","Arbiter.isFluidArbiter","nape/dynamics/Arbiter.hx",226)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID);
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isFluidArbiter,return )

bool Arbiter_obj::isCollisionArbiter( ){
	HX_STACK_FRAME("Arbiter","isCollisionArbiter","Arbiter.isCollisionArbiter","nape/dynamics/Arbiter.hx",215)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	return (this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL);
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,isCollisionArbiter,return )

::nape::dynamics::ArbiterType Arbiter_obj::get_type( ){
	HX_STACK_FRAME("Arbiter","get_type","Arbiter.get_type","nape/dynamics/Arbiter.hx",204)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static ::nape::dynamics::ArbiterType Block( ){
			HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",204)
			{
				HX_STACK_LINE(204)
				if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION == null()))){
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION = ::nape::dynamics::ArbiterType_obj::__new();
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(204)
				return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::dynamics::ArbiterType Block( ){
			HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",204)
			{
				HX_STACK_LINE(204)
				if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID == null()))){
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID = ::nape::dynamics::ArbiterType_obj::__new();
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(204)
				return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::dynamics::ArbiterType Block( ){
			HX_STACK_FRAME("*","closure","*.closure","nape/dynamics/Arbiter.hx",204)
			{
				HX_STACK_LINE(204)
				if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR == null()))){
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR = ::nape::dynamics::ArbiterType_obj::__new();
					HX_STACK_LINE(204)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(204)
				return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;
			}
			return null();
		}
	};
	HX_STACK_LINE(204)
	return Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->type).StaticCast< ::nape::dynamics::ArbiterType >();
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_type,return )

bool Arbiter_obj::get_isSleeping( ){
	HX_STACK_FRAME("Arbiter","get_isSleeping","Arbiter.get_isSleeping","nape/dynamics/Arbiter.hx",192)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(194)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(196)
	return this->zpp_inner->sleeping;
}


HX_DEFINE_DYNAMIC_FUNC0(Arbiter_obj,get_isSleeping,return )


Arbiter_obj::Arbiter_obj()
{
}

void Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Arbiter);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Arbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shape2") ) { return get_shape2(); }
		if (HX_FIELD_EQ(inName,"shape1") ) { return get_shape1(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_shape2") ) { return get_shape2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shape1") ) { return get_shape1_dyn(); }
		if (HX_FIELD_EQ(inName,"isSleeping") ) { return get_isSleeping(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"fluidArbiter") ) { return get_fluidArbiter(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isFluidArbiter") ) { return isFluidArbiter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isSensorArbiter") ) { return isSensorArbiter_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_fluidArbiter") ) { return get_fluidArbiter_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionArbiter") ) { return get_collisionArbiter(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isCollisionArbiter") ) { return isCollisionArbiter_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_collisionArbiter") ) { return get_collisionArbiter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Arbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("shape2"));
	outFields->push(HX_CSTRING("shape1"));
	outFields->push(HX_CSTRING("fluidArbiter"));
	outFields->push(HX_CSTRING("collisionArbiter"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("isSleeping"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("get_state"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("get_shape2"),
	HX_CSTRING("get_shape1"),
	HX_CSTRING("get_fluidArbiter"),
	HX_CSTRING("get_collisionArbiter"),
	HX_CSTRING("isSensorArbiter"),
	HX_CSTRING("isFluidArbiter"),
	HX_CSTRING("isCollisionArbiter"),
	HX_CSTRING("get_type"),
	HX_CSTRING("get_isSleeping"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Arbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Arbiter_obj::__mClass,"__mClass");
};

#endif

Class Arbiter_obj::__mClass;

void Arbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.Arbiter"), hx::TCanCast< Arbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Arbiter_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
