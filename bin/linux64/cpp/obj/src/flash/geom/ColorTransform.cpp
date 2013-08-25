#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
namespace flash{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{
HX_STACK_FRAME("ColorTransform","new","ColorTransform.new","flash/geom/ColorTransform.hx",18)

HX_STACK_ARG(__o_redMultiplier,"redMultiplier")

HX_STACK_ARG(__o_greenMultiplier,"greenMultiplier")

HX_STACK_ARG(__o_blueMultiplier,"blueMultiplier")

HX_STACK_ARG(__o_alphaMultiplier,"alphaMultiplier")

HX_STACK_ARG(__o_redOffset,"redOffset")

HX_STACK_ARG(__o_greenOffset,"greenOffset")

HX_STACK_ARG(__o_blueOffset,"blueOffset")

HX_STACK_ARG(__o_alphaOffset,"alphaOffset")
Float redMultiplier = __o_redMultiplier.Default(1.0);
Float greenMultiplier = __o_greenMultiplier.Default(1.0);
Float blueMultiplier = __o_blueMultiplier.Default(1.0);
Float alphaMultiplier = __o_alphaMultiplier.Default(1.0);
Float redOffset = __o_redOffset.Default(0.0);
Float greenOffset = __o_greenOffset.Default(0.0);
Float blueOffset = __o_blueOffset.Default(0.0);
Float alphaOffset = __o_alphaOffset.Default(0.0);
{
	HX_STACK_LINE(20)
	this->redMultiplier = redMultiplier;
	HX_STACK_LINE(21)
	this->greenMultiplier = greenMultiplier;
	HX_STACK_LINE(22)
	this->blueMultiplier = blueMultiplier;
	HX_STACK_LINE(23)
	this->alphaMultiplier = alphaMultiplier;
	HX_STACK_LINE(24)
	this->redOffset = redOffset;
	HX_STACK_LINE(25)
	this->greenOffset = greenOffset;
	HX_STACK_LINE(26)
	this->blueOffset = blueOffset;
	HX_STACK_LINE(27)
	this->alphaOffset = alphaOffset;
}
;
	return null();
}

ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > result = new ColorTransform_obj();
	result->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return result;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > result = new ColorTransform_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

int ColorTransform_obj::set_color( int value){
	HX_STACK_FRAME("ColorTransform","set_color","ColorTransform.set_color","flash/geom/ColorTransform.hx",56)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	this->redOffset = (int((int(value) >> int((int)16))) & int((int)255));
	HX_STACK_LINE(59)
	this->greenOffset = (int((int(value) >> int((int)8))) & int((int)255));
	HX_STACK_LINE(60)
	this->blueOffset = (int(value) & int((int)255));
	HX_STACK_LINE(62)
	this->redMultiplier = (int)0;
	HX_STACK_LINE(63)
	this->greenMultiplier = (int)0;
	HX_STACK_LINE(64)
	this->blueMultiplier = (int)0;
	HX_STACK_LINE(66)
	return this->get_color();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

int ColorTransform_obj::get_color( ){
	HX_STACK_FRAME("ColorTransform","get_color","ColorTransform.get_color","flash/geom/ColorTransform.hx",51)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return (int((int((int(::Std_obj::_int(this->redOffset)) << int((int)16))) | int((int(::Std_obj::_int(this->greenOffset)) << int((int)8))))) | int(::Std_obj::_int(this->blueOffset)));
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

Void ColorTransform_obj::concat( ::flash::geom::ColorTransform second){
{
		HX_STACK_FRAME("ColorTransform","concat","ColorTransform.concat","flash/geom/ColorTransform.hx",32)
		HX_STACK_THIS(this)
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(34)
		hx::AddEq(this->redMultiplier,second->redMultiplier);
		HX_STACK_LINE(35)
		hx::AddEq(this->greenMultiplier,second->greenMultiplier);
		HX_STACK_LINE(36)
		hx::AddEq(this->blueMultiplier,second->blueMultiplier);
		HX_STACK_LINE(37)
		hx::AddEq(this->alphaMultiplier,second->alphaMultiplier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))


ColorTransform_obj::ColorTransform_obj()
{
}

void ColorTransform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTransform);
	HX_MARK_MEMBER_NAME(redOffset,"redOffset");
	HX_MARK_MEMBER_NAME(redMultiplier,"redMultiplier");
	HX_MARK_MEMBER_NAME(greenOffset,"greenOffset");
	HX_MARK_MEMBER_NAME(greenMultiplier,"greenMultiplier");
	HX_MARK_MEMBER_NAME(blueOffset,"blueOffset");
	HX_MARK_MEMBER_NAME(blueMultiplier,"blueMultiplier");
	HX_MARK_MEMBER_NAME(alphaOffset,"alphaOffset");
	HX_MARK_MEMBER_NAME(alphaMultiplier,"alphaMultiplier");
	HX_MARK_END_CLASS();
}

void ColorTransform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redOffset,"redOffset");
	HX_VISIT_MEMBER_NAME(redMultiplier,"redMultiplier");
	HX_VISIT_MEMBER_NAME(greenOffset,"greenOffset");
	HX_VISIT_MEMBER_NAME(greenMultiplier,"greenMultiplier");
	HX_VISIT_MEMBER_NAME(blueOffset,"blueOffset");
	HX_VISIT_MEMBER_NAME(blueMultiplier,"blueMultiplier");
	HX_VISIT_MEMBER_NAME(alphaOffset,"alphaOffset");
	HX_VISIT_MEMBER_NAME(alphaMultiplier,"alphaMultiplier");
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("redOffset"));
	outFields->push(HX_CSTRING("redMultiplier"));
	outFields->push(HX_CSTRING("greenOffset"));
	outFields->push(HX_CSTRING("greenMultiplier"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("blueOffset"));
	outFields->push(HX_CSTRING("blueMultiplier"));
	outFields->push(HX_CSTRING("alphaOffset"));
	outFields->push(HX_CSTRING("alphaMultiplier"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("concat"),
	HX_CSTRING("redOffset"),
	HX_CSTRING("redMultiplier"),
	HX_CSTRING("greenOffset"),
	HX_CSTRING("greenMultiplier"),
	HX_CSTRING("blueOffset"),
	HX_CSTRING("blueMultiplier"),
	HX_CSTRING("alphaOffset"),
	HX_CSTRING("alphaMultiplier"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#endif

Class ColorTransform_obj::__mClass;

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.geom.ColorTransform"), hx::TCanCast< ColorTransform_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ColorTransform_obj::__boot()
{
}

} // end namespace flash
} // end namespace geom
