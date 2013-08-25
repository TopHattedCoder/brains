#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_XBOX_GAMEPAD
#include <com/haxepunk/utils/XBOX_GAMEPAD.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void XBOX_GAMEPAD_obj::__construct()
{
	return null();
}

XBOX_GAMEPAD_obj::~XBOX_GAMEPAD_obj() { }

Dynamic XBOX_GAMEPAD_obj::__CreateEmpty() { return  new XBOX_GAMEPAD_obj; }
hx::ObjectPtr< XBOX_GAMEPAD_obj > XBOX_GAMEPAD_obj::__new()
{  hx::ObjectPtr< XBOX_GAMEPAD_obj > result = new XBOX_GAMEPAD_obj();
	result->__construct();
	return result;}

Dynamic XBOX_GAMEPAD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XBOX_GAMEPAD_obj > result = new XBOX_GAMEPAD_obj();
	result->__construct();
	return result;}

int XBOX_GAMEPAD_obj::A_BUTTON;

int XBOX_GAMEPAD_obj::B_BUTTON;

int XBOX_GAMEPAD_obj::X_BUTTON;

int XBOX_GAMEPAD_obj::Y_BUTTON;

int XBOX_GAMEPAD_obj::LB_BUTTON;

int XBOX_GAMEPAD_obj::RB_BUTTON;

int XBOX_GAMEPAD_obj::BACK_BUTTON;

int XBOX_GAMEPAD_obj::START_BUTTON;

int XBOX_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON;

int XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON;

int XBOX_GAMEPAD_obj::LEFT_ANALOGUE_X;

int XBOX_GAMEPAD_obj::LEFT_ANALOGUE_Y;

int XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_X;

int XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_Y;

int XBOX_GAMEPAD_obj::TRIGGER;


XBOX_GAMEPAD_obj::XBOX_GAMEPAD_obj()
{
}

void XBOX_GAMEPAD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(XBOX_GAMEPAD);
	HX_MARK_END_CLASS();
}

void XBOX_GAMEPAD_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic XBOX_GAMEPAD_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TRIGGER") ) { return TRIGGER; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"A_BUTTON") ) { return A_BUTTON; }
		if (HX_FIELD_EQ(inName,"B_BUTTON") ) { return B_BUTTON; }
		if (HX_FIELD_EQ(inName,"X_BUTTON") ) { return X_BUTTON; }
		if (HX_FIELD_EQ(inName,"Y_BUTTON") ) { return Y_BUTTON; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LB_BUTTON") ) { return LB_BUTTON; }
		if (HX_FIELD_EQ(inName,"RB_BUTTON") ) { return RB_BUTTON; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BACK_BUTTON") ) { return BACK_BUTTON; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"START_BUTTON") ) { return START_BUTTON; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOGUE_X") ) { return LEFT_ANALOGUE_X; }
		if (HX_FIELD_EQ(inName,"LEFT_ANALOGUE_Y") ) { return LEFT_ANALOGUE_Y; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOGUE_X") ) { return RIGHT_ANALOGUE_X; }
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOGUE_Y") ) { return RIGHT_ANALOGUE_Y; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOGUE_BUTTON") ) { return LEFT_ANALOGUE_BUTTON; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOGUE_BUTTON") ) { return RIGHT_ANALOGUE_BUTTON; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic XBOX_GAMEPAD_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"TRIGGER") ) { TRIGGER=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"A_BUTTON") ) { A_BUTTON=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B_BUTTON") ) { B_BUTTON=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"X_BUTTON") ) { X_BUTTON=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y_BUTTON") ) { Y_BUTTON=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LB_BUTTON") ) { LB_BUTTON=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RB_BUTTON") ) { RB_BUTTON=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BACK_BUTTON") ) { BACK_BUTTON=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"START_BUTTON") ) { START_BUTTON=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOGUE_X") ) { LEFT_ANALOGUE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LEFT_ANALOGUE_Y") ) { LEFT_ANALOGUE_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOGUE_X") ) { RIGHT_ANALOGUE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOGUE_Y") ) { RIGHT_ANALOGUE_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOGUE_BUTTON") ) { LEFT_ANALOGUE_BUTTON=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOGUE_BUTTON") ) { RIGHT_ANALOGUE_BUTTON=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void XBOX_GAMEPAD_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("A_BUTTON"),
	HX_CSTRING("B_BUTTON"),
	HX_CSTRING("X_BUTTON"),
	HX_CSTRING("Y_BUTTON"),
	HX_CSTRING("LB_BUTTON"),
	HX_CSTRING("RB_BUTTON"),
	HX_CSTRING("BACK_BUTTON"),
	HX_CSTRING("START_BUTTON"),
	HX_CSTRING("LEFT_ANALOGUE_BUTTON"),
	HX_CSTRING("RIGHT_ANALOGUE_BUTTON"),
	HX_CSTRING("LEFT_ANALOGUE_X"),
	HX_CSTRING("LEFT_ANALOGUE_Y"),
	HX_CSTRING("RIGHT_ANALOGUE_X"),
	HX_CSTRING("RIGHT_ANALOGUE_Y"),
	HX_CSTRING("TRIGGER"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::A_BUTTON,"A_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::B_BUTTON,"B_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::X_BUTTON,"X_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::Y_BUTTON,"Y_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LB_BUTTON,"LB_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RB_BUTTON,"RB_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::BACK_BUTTON,"BACK_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::START_BUTTON,"START_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::TRIGGER,"TRIGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::A_BUTTON,"A_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::B_BUTTON,"B_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::X_BUTTON,"X_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::Y_BUTTON,"Y_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LB_BUTTON,"LB_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RB_BUTTON,"RB_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::BACK_BUTTON,"BACK_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::START_BUTTON,"START_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::TRIGGER,"TRIGGER");
};

#endif

Class XBOX_GAMEPAD_obj::__mClass;

void XBOX_GAMEPAD_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.XBOX_GAMEPAD"), hx::TCanCast< XBOX_GAMEPAD_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void XBOX_GAMEPAD_obj::__boot()
{
	A_BUTTON= (int)0;
	B_BUTTON= (int)1;
	X_BUTTON= (int)2;
	Y_BUTTON= (int)3;
	LB_BUTTON= (int)4;
	RB_BUTTON= (int)5;
	BACK_BUTTON= (int)6;
	START_BUTTON= (int)7;
	LEFT_ANALOGUE_BUTTON= (int)8;
	RIGHT_ANALOGUE_BUTTON= (int)9;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	RIGHT_ANALOGUE_X= (int)4;
	RIGHT_ANALOGUE_Y= (int)3;
	TRIGGER= (int)2;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
