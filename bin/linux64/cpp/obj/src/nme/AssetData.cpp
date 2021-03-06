#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
namespace nme{

Void AssetData_obj::__construct()
{
	return null();
}

AssetData_obj::~AssetData_obj() { }

Dynamic AssetData_obj::__CreateEmpty() { return  new AssetData_obj; }
hx::ObjectPtr< AssetData_obj > AssetData_obj::__new()
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

Dynamic AssetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap AssetData_obj::library;

::haxe::ds::StringMap AssetData_obj::path;

::haxe::ds::StringMap AssetData_obj::type;

bool AssetData_obj::initialized;

Void AssetData_obj::initialize( ){
{
		HX_STACK_FRAME("AssetData","initialize","AssetData.initialize","nme/AssetData.hx",19)
		HX_STACK_LINE(19)
		if ((!(::nme::AssetData_obj::initialized))){
			HX_STACK_LINE(21)
			::nme::AssetData_obj::path = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(22)
			::nme::AssetData_obj::type = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(23)
			::nme::AssetData_obj::library = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(25)
			::nme::AssetData_obj::path->set(HX_CSTRING("gfx/preloader/haxepunk.png"),HX_CSTRING("gfx/preloader/haxepunk.png"));
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(26)
				::nme::AssetData_obj::type->set(HX_CSTRING("gfx/preloader/haxepunk.png"),value);
			}
			HX_STACK_LINE(27)
			::nme::AssetData_obj::path->set(HX_CSTRING("gfx/debug/console_play.png"),HX_CSTRING("gfx/debug/console_play.png"));
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(28)
				::nme::AssetData_obj::type->set(HX_CSTRING("gfx/debug/console_play.png"),value);
			}
			HX_STACK_LINE(29)
			::nme::AssetData_obj::path->set(HX_CSTRING("gfx/debug/console_step.png"),HX_CSTRING("gfx/debug/console_step.png"));
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(30)
				::nme::AssetData_obj::type->set(HX_CSTRING("gfx/debug/console_step.png"),value);
			}
			HX_STACK_LINE(31)
			::nme::AssetData_obj::path->set(HX_CSTRING("gfx/debug/console_debug.png"),HX_CSTRING("gfx/debug/console_debug.png"));
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(32)
				::nme::AssetData_obj::type->set(HX_CSTRING("gfx/debug/console_debug.png"),value);
			}
			HX_STACK_LINE(33)
			::nme::AssetData_obj::path->set(HX_CSTRING("gfx/debug/console_pause.png"),HX_CSTRING("gfx/debug/console_pause.png"));
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(34)
				::nme::AssetData_obj::type->set(HX_CSTRING("gfx/debug/console_pause.png"),value);
			}
			HX_STACK_LINE(35)
			::nme::AssetData_obj::path->set(HX_CSTRING("gfx/debug/console_logo.png"),HX_CSTRING("gfx/debug/console_logo.png"));
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(36)
				::nme::AssetData_obj::type->set(HX_CSTRING("gfx/debug/console_logo.png"),value);
			}
			HX_STACK_LINE(37)
			::nme::AssetData_obj::path->set(HX_CSTRING("gfx/debug/console_output.png"),HX_CSTRING("gfx/debug/console_output.png"));
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(38)
				::nme::AssetData_obj::type->set(HX_CSTRING("gfx/debug/console_output.png"),value);
			}
			HX_STACK_LINE(39)
			::nme::AssetData_obj::path->set(HX_CSTRING("font/04B_03__.ttf"),HX_CSTRING("font/04B_03__.ttf"));
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("font").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(40)
				::nme::AssetData_obj::type->set(HX_CSTRING("font/04B_03__.ttf"),value);
			}
			HX_STACK_LINE(41)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/bg.png"),HX_CSTRING("assets/bg.png"));
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(42)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/bg.png"),value);
			}
			HX_STACK_LINE(45)
			::nme::AssetData_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AssetData_obj,initialize,(void))


AssetData_obj::AssetData_obj()
{
}

void AssetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetData);
	HX_MARK_END_CLASS();
}

void AssetData_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AssetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return library; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetData_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("library"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("initialized"),
	HX_CSTRING("initialize"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetData_obj::library,"library");
	HX_MARK_MEMBER_NAME(AssetData_obj::path,"path");
	HX_MARK_MEMBER_NAME(AssetData_obj::type,"type");
	HX_MARK_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetData_obj::library,"library");
	HX_VISIT_MEMBER_NAME(AssetData_obj::path,"path");
	HX_VISIT_MEMBER_NAME(AssetData_obj::type,"type");
	HX_VISIT_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

#endif

Class AssetData_obj::__mClass;

void AssetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.AssetData"), hx::TCanCast< AssetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void AssetData_obj::__boot()
{
	initialized= false;
}

} // end namespace nme
