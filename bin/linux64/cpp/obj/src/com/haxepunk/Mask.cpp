#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Vector
#include <com/haxepunk/math/Vector.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace haxepunk{

Void Mask_obj::__construct()
{
HX_STACK_FRAME("Mask","new","Mask.new","com/haxepunk/Mask.hx",31)
{
	HX_STACK_LINE(32)
	this->_class = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));
	HX_STACK_LINE(34)
	this->_check = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(38)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Masklist >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(39)
		this->_check->set(key,this->collideMasklist_dyn());
	}
}
;
	return null();
}

Mask_obj::~Mask_obj() { }

Dynamic Mask_obj::__CreateEmpty() { return  new Mask_obj; }
hx::ObjectPtr< Mask_obj > Mask_obj::__new()
{  hx::ObjectPtr< Mask_obj > result = new Mask_obj();
	result->__construct();
	return result;}

Dynamic Mask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mask_obj > result = new Mask_obj();
	result->__construct();
	return result;}

Void Mask_obj::project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("Mask","project","Mask.project","com/haxepunk/Mask.hx",99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(100)
		Float cur;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(101)
		Float max = -9999999999.0;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(102)
		Float min = 9999999999.0;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(104)
		cur = ((-(this->parent->originX) * axis->x) - (this->parent->originY * axis->y));
		HX_STACK_LINE(105)
		if (((cur < min))){
			HX_STACK_LINE(106)
			min = cur;
		}
		HX_STACK_LINE(107)
		if (((cur > max))){
			HX_STACK_LINE(108)
			max = cur;
		}
		HX_STACK_LINE(110)
		cur = ((((-(this->parent->originX) + this->parent->width)) * axis->x) - (this->parent->originY * axis->y));
		HX_STACK_LINE(111)
		if (((cur < min))){
			HX_STACK_LINE(112)
			min = cur;
		}
		HX_STACK_LINE(113)
		if (((cur > max))){
			HX_STACK_LINE(114)
			max = cur;
		}
		HX_STACK_LINE(116)
		cur = ((-(this->parent->originX) * axis->x) + (((-(this->parent->originY) + this->parent->height)) * axis->y));
		HX_STACK_LINE(117)
		if (((cur < min))){
			HX_STACK_LINE(118)
			min = cur;
		}
		HX_STACK_LINE(119)
		if (((cur > max))){
			HX_STACK_LINE(120)
			max = cur;
		}
		HX_STACK_LINE(122)
		cur = ((((-(this->parent->originX) + this->parent->width)) * axis->x) + (((-(this->parent->originY) + this->parent->height)) * axis->y));
		HX_STACK_LINE(123)
		if (((cur < min))){
			HX_STACK_LINE(124)
			min = cur;
		}
		HX_STACK_LINE(125)
		if (((cur > max))){
			HX_STACK_LINE(126)
			max = cur;
		}
		HX_STACK_LINE(128)
		projection->min = min;
		HX_STACK_LINE(129)
		projection->max = max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mask_obj,project,(void))

Void Mask_obj::update( ){
{
		HX_STACK_FRAME("Mask","update","Mask.update","com/haxepunk/Mask.hx",94)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mask_obj,update,(void))

Void Mask_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("Mask","debugDraw","Mask.debugDraw","com/haxepunk/Mask.hx",88)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mask_obj,debugDraw,(void))

Void Mask_obj::assignTo( ::com::haxepunk::Entity parent){
{
		HX_STACK_FRAME("Mask","assignTo","Mask.assignTo","com/haxepunk/Mask.hx",79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_LINE(80)
		this->parent = parent;
		HX_STACK_LINE(81)
		if (((parent != null()))){
			HX_STACK_LINE(81)
			this->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,assignTo,(void))

bool Mask_obj::collideMasklist( ::com::haxepunk::masks::Masklist other){
	HX_STACK_FRAME("Mask","collideMasklist","Mask.collideMasklist","com/haxepunk/Mask.hx",74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(74)
	return other->collide(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collideMasklist,return )

bool Mask_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("Mask","collideMask","Mask.collideMask","com/haxepunk/Mask.hx",66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(66)
	return (bool((bool((bool((((this->parent->x - this->parent->originX) + this->parent->width) > (other->parent->x - other->parent->originX))) && bool((((this->parent->y - this->parent->originY) + this->parent->height) > (other->parent->y - other->parent->originY))))) && bool(((this->parent->x - this->parent->originX) < ((other->parent->x - other->parent->originX) + other->parent->width))))) && bool(((this->parent->y - this->parent->originY) < ((other->parent->y - other->parent->originY) + other->parent->height))));
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collideMask,return )

bool Mask_obj::collide( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("Mask","collide","Mask.collide","com/haxepunk/Mask.hx",48)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(49)
	if (((this->parent == null()))){
		HX_STACK_LINE(51)
		HX_STACK_DO_THROW(HX_CSTRING("Mask must be attached to a parent Entity"));
	}
	HX_STACK_LINE(54)
	Dynamic cbFunc = this->_check->get(mask->_class);		HX_STACK_VAR(cbFunc,"cbFunc");
	HX_STACK_LINE(55)
	if (((cbFunc != null()))){
		HX_STACK_LINE(55)
		return cbFunc(mask).Cast< bool >();
	}
	HX_STACK_LINE(57)
	cbFunc = mask->_check->get(this->_class);
	HX_STACK_LINE(58)
	if (((cbFunc != null()))){
		HX_STACK_LINE(58)
		return cbFunc(hx::ObjectPtr<OBJ_>(this)).Cast< bool >();
	}
	HX_STACK_LINE(60)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collide,return )


Mask_obj::Mask_obj()
{
}

void Mask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mask);
	HX_MARK_MEMBER_NAME(_check,"_check");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void Mask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_check,"_check");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic Mask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_check") ) { return _check; }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"assignTo") ) { return assignTo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideMasklist") ) { return collideMasklist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::com::haxepunk::masks::Masklist >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_check") ) { _check=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_check"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_check"),
	HX_CSTRING("_class"),
	HX_CSTRING("project"),
	HX_CSTRING("update"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("assignTo"),
	HX_CSTRING("collideMasklist"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collide"),
	HX_CSTRING("list"),
	HX_CSTRING("parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mask_obj::__mClass,"__mClass");
};

#endif

Class Mask_obj::__mClass;

void Mask_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Mask"), hx::TCanCast< Mask_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Mask_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
