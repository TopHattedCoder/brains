#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroup
#include <nape/dynamics/InteractionGroup.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
namespace nape{
namespace phys{

Void Interactor_obj::__construct()
{
HX_STACK_FRAME("Interactor","new","Interactor.new","nape/phys/Interactor.hx",174)
{
	HX_STACK_LINE(178)
	this->zpp_inner_i = null();
	HX_STACK_LINE(287)
	HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot instantiate an Interactor, only Shape/Body/Compound"));
}
;
	return null();
}

Interactor_obj::~Interactor_obj() { }

Dynamic Interactor_obj::__CreateEmpty() { return  new Interactor_obj; }
hx::ObjectPtr< Interactor_obj > Interactor_obj::__new()
{  hx::ObjectPtr< Interactor_obj > result = new Interactor_obj();
	result->__construct();
	return result;}

Dynamic Interactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Interactor_obj > result = new Interactor_obj();
	result->__construct();
	return result;}

::String Interactor_obj::toString( ){
	HX_STACK_FRAME("Interactor","toString","Interactor.toString","nape/phys/Interactor.hx",294)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,toString,return )

::nape::callbacks::CbTypeList Interactor_obj::get_cbTypes( ){
	HX_STACK_FRAME("Interactor","get_cbTypes","Interactor.get_cbTypes","nape/phys/Interactor.hx",278)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	if (((this->zpp_inner_i->wrap_cbTypes == null()))){
		HX_STACK_LINE(279)
		this->zpp_inner_i->setupcbTypes();
	}
	HX_STACK_LINE(280)
	return this->zpp_inner_i->wrap_cbTypes;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_cbTypes,return )

::nape::dynamics::InteractionGroup Interactor_obj::set_group( ::nape::dynamics::InteractionGroup group){
	HX_STACK_FRAME("Interactor","set_group","Interactor.set_group","nape/phys/Interactor.hx",264)
	HX_STACK_THIS(this)
	HX_STACK_ARG(group,"group")
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(266)
		this->zpp_inner_i->immutable_midstep(HX_CSTRING("Interactor::group"));
		HX_STACK_LINE(267)
		this->zpp_inner_i->setGroup((  (((group == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionGroup(null()) : ::zpp_nape::dynamics::ZPP_InteractionGroup(group->zpp_inner) ));
	}
	HX_STACK_LINE(269)
	if (((this->zpp_inner_i->group == null()))){
		HX_STACK_LINE(269)
		return null();
	}
	else{
		HX_STACK_LINE(269)
		return this->zpp_inner_i->group->outer;
	}
	HX_STACK_LINE(269)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interactor_obj,set_group,return )

::nape::dynamics::InteractionGroup Interactor_obj::get_group( ){
	HX_STACK_FRAME("Interactor","get_group","Interactor.get_group","nape/phys/Interactor.hx",262)
	HX_STACK_THIS(this)
	HX_STACK_LINE(262)
	if (((this->zpp_inner_i->group == null()))){
		HX_STACK_LINE(262)
		return null();
	}
	else{
		HX_STACK_LINE(262)
		return this->zpp_inner_i->group->outer;
	}
	HX_STACK_LINE(262)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_group,return )

::nape::phys::Compound Interactor_obj::get_castCompound( ){
	HX_STACK_FRAME("Interactor","get_castCompound","Interactor.get_castCompound","nape/phys/Interactor.hx",252)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	if (((this->zpp_inner_i->icompound != null()))){
		HX_STACK_LINE(252)
		return this->zpp_inner_i->icompound->outer;
	}
	else{
		HX_STACK_LINE(252)
		return null();
	}
	HX_STACK_LINE(252)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_castCompound,return )

::nape::phys::Body Interactor_obj::get_castBody( ){
	HX_STACK_FRAME("Interactor","get_castBody","Interactor.get_castBody","nape/phys/Interactor.hx",244)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	if (((this->zpp_inner_i->ibody != null()))){
		HX_STACK_LINE(244)
		return this->zpp_inner_i->ibody->outer;
	}
	else{
		HX_STACK_LINE(244)
		return null();
	}
	HX_STACK_LINE(244)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_castBody,return )

::nape::shape::Shape Interactor_obj::get_castShape( ){
	HX_STACK_FRAME("Interactor","get_castShape","Interactor.get_castShape","nape/phys/Interactor.hx",236)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	if (((this->zpp_inner_i->ishape != null()))){
		HX_STACK_LINE(236)
		return this->zpp_inner_i->ishape->outer;
	}
	else{
		HX_STACK_LINE(236)
		return null();
	}
	HX_STACK_LINE(236)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_castShape,return )

bool Interactor_obj::isCompound( ){
	HX_STACK_FRAME("Interactor","isCompound","Interactor.isCompound","nape/phys/Interactor.hx",228)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	return (this->zpp_inner_i->icompound != null());
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,isCompound,return )

bool Interactor_obj::isBody( ){
	HX_STACK_FRAME("Interactor","isBody","Interactor.isBody","nape/phys/Interactor.hx",220)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	return (this->zpp_inner_i->ibody != null());
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,isBody,return )

bool Interactor_obj::isShape( ){
	HX_STACK_FRAME("Interactor","isShape","Interactor.isShape","nape/phys/Interactor.hx",212)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	return (this->zpp_inner_i->ishape != null());
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,isShape,return )

Dynamic Interactor_obj::get_userData( ){
	HX_STACK_FRAME("Interactor","get_userData","Interactor.get_userData","nape/phys/Interactor.hx",200)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	if (((this->zpp_inner_i->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure","*.closure","nape/phys/Interactor.hx",202)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(202)
		this->zpp_inner_i->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(204)
	return this->zpp_inner_i->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_userData,return )

int Interactor_obj::get_id( ){
	HX_STACK_FRAME("Interactor","get_id","Interactor.get_id","nape/phys/Interactor.hx",185)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	return this->zpp_inner_i->id;
}


HX_DEFINE_DYNAMIC_FUNC0(Interactor_obj,get_id,return )


Interactor_obj::Interactor_obj()
{
}

void Interactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interactor);
	HX_MARK_MEMBER_NAME(zpp_inner_i,"zpp_inner_i");
	HX_MARK_END_CLASS();
}

void Interactor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_i,"zpp_inner_i");
}

Dynamic Interactor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return get_id(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return get_group(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isBody") ) { return isBody_dyn(); }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return get_cbTypes(); }
		if (HX_FIELD_EQ(inName,"isShape") ) { return isShape_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"castBody") ) { return get_castBody(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"castShape") ) { return get_castShape(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isCompound") ) { return isCompound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cbTypes") ) { return get_cbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner_i") ) { return zpp_inner_i; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"castCompound") ) { return get_castCompound(); }
		if (HX_FIELD_EQ(inName,"get_castBody") ) { return get_castBody_dyn(); }
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_castShape") ) { return get_castShape_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_castCompound") ) { return get_castCompound_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Interactor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return set_group(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zpp_inner_i") ) { zpp_inner_i=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interactor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cbTypes"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("castCompound"));
	outFields->push(HX_CSTRING("castBody"));
	outFields->push(HX_CSTRING("castShape"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("zpp_inner_i"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_cbTypes"),
	HX_CSTRING("set_group"),
	HX_CSTRING("get_group"),
	HX_CSTRING("get_castCompound"),
	HX_CSTRING("get_castBody"),
	HX_CSTRING("get_castShape"),
	HX_CSTRING("isCompound"),
	HX_CSTRING("isBody"),
	HX_CSTRING("isShape"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("get_id"),
	HX_CSTRING("zpp_inner_i"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interactor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interactor_obj::__mClass,"__mClass");
};

#endif

Class Interactor_obj::__mClass;

void Interactor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.Interactor"), hx::TCanCast< Interactor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Interactor_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
