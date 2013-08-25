#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_GradientType
#include <flash/display/GradientType.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_IGraphicsData
#include <flash/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_flash_display_InterpolationMethod
#include <flash/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_SpreadMethod
#include <flash/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_flash_display_TriangleCulling
#include <flash/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flash{
namespace display{

Void Graphics_obj::__construct(Dynamic handle)
{
HX_STACK_FRAME("Graphics","new","Graphics.new","flash/display/Graphics.hx",26)

HX_STACK_ARG(handle,"handle")
{
	HX_STACK_LINE(26)
	this->__handle = handle;
}
;
	return null();
}

Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(Dynamic handle)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct(handle);
	return result;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Graphics_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("Graphics","moveTo","Graphics.moveTo","flash/display/Graphics.hx",211)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(211)
		::flash::display::Graphics_obj::nme_gfx_move_to(this->__handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("Graphics","lineTo","Graphics.lineTo","flash/display/Graphics.hx",204)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(204)
		::flash::display::Graphics_obj::nme_gfx_line_to(this->__handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_pixelHinting,::flash::display::LineScaleMode scaleMode,::flash::display::CapsStyle caps,::flash::display::JointStyle joints,hx::Null< Float >  __o_miterLimit){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1.0);
bool pixelHinting = __o_pixelHinting.Default(false);
Float miterLimit = __o_miterLimit.Default(3);
	HX_STACK_FRAME("Graphics","lineStyle","Graphics.lineStyle","flash/display/Graphics.hx",197)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(pixelHinting,"pixelHinting")
	HX_STACK_ARG(scaleMode,"scaleMode")
	HX_STACK_ARG(caps,"caps")
	HX_STACK_ARG(joints,"joints")
	HX_STACK_ARG(miterLimit,"miterLimit")
{
		HX_STACK_LINE(197)
		::flash::display::Graphics_obj::nme_gfx_line_style(this->__handle,thickness,color,alpha,pixelHinting,(  (((scaleMode == null()))) ? int((int)0) : int(scaleMode->__Index()) ),(  (((caps == null()))) ? int((int)0) : int(caps->__Index()) ),(  (((joints == null()))) ? int((int)0) : int(joints->__Index()) ),miterLimit);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineGradientStyle( ::flash::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::flash::geom::Matrix matrix,::flash::display::SpreadMethod spreadMethod,::flash::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(0.0);
	HX_STACK_FRAME("Graphics","lineGradientStyle","Graphics.lineGradientStyle","flash/display/Graphics.hx",181)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(183)
		if (((matrix == null()))){
			HX_STACK_LINE(185)
			matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(186)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(190)
		::flash::display::Graphics_obj::nme_gfx_line_gradient_fill(this->__handle,type->__Index(),colors,alphas,ratios,matrix,(  (((spreadMethod == null()))) ? int((int)0) : int(spreadMethod->__Index()) ),(  (((interpolationMethod == null()))) ? int((int)0) : int(interpolationMethod->__Index()) ),focalPointRatio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineBitmapStyle( ::flash::display::BitmapData bitmap,::flash::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("Graphics","lineBitmapStyle","Graphics.lineBitmapStyle","flash/display/Graphics.hx",176)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(176)
		::flash::display::Graphics_obj::nme_gfx_line_bitmap_fill(this->__handle,bitmap->__handle,matrix,repeat,smooth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("Graphics","endFill","Graphics.endFill","flash/display/Graphics.hx",169)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::flash::display::Graphics_obj::nme_gfx_end_fill(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::flash::display::TriangleCulling culling,Array< int > colors,hx::Null< int >  __o_blendMode,Array< Float > viewport){
int blendMode = __o_blendMode.Default(0);
	HX_STACK_FRAME("Graphics","drawTriangles","Graphics.drawTriangles","flash/display/Graphics.hx",159)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(viewport,"viewport")
{
		HX_STACK_LINE(161)
		int cull;		HX_STACK_VAR(cull,"cull");
		HX_STACK_LINE(161)
		if (((culling == null()))){
			HX_STACK_LINE(161)
			cull = (int)0;
		}
		else{
			HX_STACK_LINE(161)
			cull = (culling->__Index() - (int)1);
		}
		HX_STACK_LINE(162)
		::flash::display::Graphics_obj::nme_gfx_draw_triangles(this->__handle,vertices,indices,uvtData,cull,colors,blendMode,viewport);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::drawTiles( ::openfl::display::Tilesheet sheet,Array< Float > data,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
	HX_STACK_FRAME("Graphics","drawTiles","Graphics.drawTiles","flash/display/Graphics.hx",144)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
{
		HX_STACK_LINE(146)
		this->beginBitmapFill(sheet->__bitmap,null(),false,smooth);
		HX_STACK_LINE(148)
		if ((smooth)){
			HX_STACK_LINE(150)
			hx::OrEq(flags,(int)4096);
		}
		HX_STACK_LINE(154)
		::flash::display::Graphics_obj::nme_gfx_draw_tiles(this->__handle,sheet->__handle,data,flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::String __o_winding){
::String winding = __o_winding.Default(HX_CSTRING("evenOdd"));
	HX_STACK_FRAME("Graphics","drawPath","Graphics.drawPath","flash/display/Graphics.hx",139)
	HX_STACK_THIS(this)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(winding,"winding")
{
		HX_STACK_LINE(139)
		::flash::display::Graphics_obj::nme_gfx_draw_path(this->__handle,commands,data,(winding == HX_CSTRING("evenOdd")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float radiusX,Dynamic radiusY){
{
		HX_STACK_FRAME("Graphics","drawRoundRect","Graphics.drawRoundRect","flash/display/Graphics.hx",132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(radiusX,"radiusX")
		HX_STACK_ARG(radiusY,"radiusY")
		HX_STACK_LINE(132)
		::flash::display::Graphics_obj::nme_gfx_draw_round_rect(this->__handle,x,y,width,height,radiusX,(  (((radiusY == null()))) ? Dynamic(radiusX) : Dynamic(radiusY) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("Graphics","drawRect","Graphics.drawRect","flash/display/Graphics.hx",125)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(125)
		::flash::display::Graphics_obj::nme_gfx_draw_rect(this->__handle,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawPoints( Array< Float > xy,Array< int > pointRGBA,hx::Null< int >  __o_defaultRGBA,hx::Null< Float >  __o_size){
int defaultRGBA = __o_defaultRGBA.Default(-1);
Float size = __o_size.Default(-1.0);
	HX_STACK_FRAME("Graphics","drawPoints","Graphics.drawPoints","flash/display/Graphics.hx",118)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xy,"xy")
	HX_STACK_ARG(pointRGBA,"pointRGBA")
	HX_STACK_ARG(defaultRGBA,"defaultRGBA")
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(118)
		::flash::display::Graphics_obj::nme_gfx_draw_points(this->__handle,xy,pointRGBA,defaultRGBA,false,size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawPoints,(void))

Void Graphics_obj::drawGraphicsDatum( ::flash::display::IGraphicsData graphicsDatum){
{
		HX_STACK_FRAME("Graphics","drawGraphicsDatum","Graphics.drawGraphicsDatum","flash/display/Graphics.hx",111)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsDatum,"graphicsDatum")
		HX_STACK_LINE(111)
		::flash::display::Graphics_obj::nme_gfx_draw_datum(this->__handle,graphicsDatum->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsDatum,(void))

Void Graphics_obj::drawGraphicsData( Array< ::Dynamic > graphicsData){
{
		HX_STACK_FRAME("Graphics","drawGraphicsData","Graphics.drawGraphicsData","flash/display/Graphics.hx",94)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(96)
		Dynamic handles = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(handles,"handles");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			while(((_g < graphicsData->length))){
				HX_STACK_LINE(98)
				::flash::display::IGraphicsData datum = graphicsData->__get(_g).StaticCast< ::flash::display::IGraphicsData >();		HX_STACK_VAR(datum,"datum");
				HX_STACK_LINE(98)
				++(_g);
				HX_STACK_LINE(100)
				handles->__Field(HX_CSTRING("push"),true)(datum->__handle);
			}
		}
		HX_STACK_LINE(104)
		::flash::display::Graphics_obj::nme_gfx_draw_data(this->__handle,handles);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("Graphics","drawEllipse","Graphics.drawEllipse","flash/display/Graphics.hx",89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(89)
		::flash::display::Graphics_obj::nme_gfx_draw_ellipse(this->__handle,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("Graphics","drawCircle","Graphics.drawCircle","flash/display/Graphics.hx",82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(82)
		::flash::display::Graphics_obj::nme_gfx_draw_ellipse(this->__handle,(x - radius),(y - radius),(radius * (int)2),(radius * (int)2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("Graphics","curveTo","Graphics.curveTo","flash/display/Graphics.hx",75)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(75)
		::flash::display::Graphics_obj::nme_gfx_curve_to(this->__handle,controlX,controlY,anchorX,anchorY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("Graphics","clear","Graphics.clear","flash/display/Graphics.hx",68)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::flash::display::Graphics_obj::nme_gfx_clear(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::beginGradientFill( ::flash::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::flash::geom::Matrix matrix,::flash::display::SpreadMethod spreadMethod,::flash::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(0.0);
	HX_STACK_FRAME("Graphics","beginGradientFill","Graphics.beginGradientFill","flash/display/Graphics.hx",52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(54)
		if (((matrix == null()))){
			HX_STACK_LINE(56)
			matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(57)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(61)
		::flash::display::Graphics_obj::nme_gfx_begin_gradient_fill(this->__handle,type->__Index(),colors,alphas,ratios,matrix,(  (((spreadMethod == null()))) ? int((int)0) : int(spreadMethod->__Index()) ),(  (((interpolationMethod == null()))) ? int((int)0) : int(interpolationMethod->__Index()) ),focalPointRatio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::beginFill( int color,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(1.0);
	HX_STACK_FRAME("Graphics","beginFill","Graphics.beginFill","flash/display/Graphics.hx",47)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(47)
		::flash::display::Graphics_obj::nme_gfx_begin_fill(this->__handle,color,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginBitmapFill( ::flash::display::BitmapData bitmap,::flash::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("Graphics","beginBitmapFill","Graphics.beginBitmapFill","flash/display/Graphics.hx",40)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(40)
		::flash::display::Graphics_obj::nme_gfx_begin_bitmap_fill(this->__handle,bitmap->__handle,matrix,repeat,smooth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::arcTo( Float controlX,Float controlY,Float x,Float y){
{
		HX_STACK_FRAME("Graphics","arcTo","Graphics.arcTo","flash/display/Graphics.hx",33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(33)
		::flash::display::Graphics_obj::nme_gfx_arc_to(this->__handle,controlX,controlY,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,arcTo,(void))

int Graphics_obj::RGBA( int rgb,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_FRAME("Graphics","RGBA","Graphics.RGBA","flash/display/Graphics.hx",218)
	HX_STACK_ARG(rgb,"rgb")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(218)
		return (int(rgb) | int((int(alpha) << int((int)24))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,RGBA,return )

Dynamic Graphics_obj::nme_gfx_clear;

Dynamic Graphics_obj::nme_gfx_begin_fill;

Dynamic Graphics_obj::nme_gfx_begin_bitmap_fill;

Dynamic Graphics_obj::nme_gfx_line_bitmap_fill;

Dynamic Graphics_obj::nme_gfx_begin_gradient_fill;

Dynamic Graphics_obj::nme_gfx_line_gradient_fill;

Dynamic Graphics_obj::nme_gfx_end_fill;

Dynamic Graphics_obj::nme_gfx_line_style;

Dynamic Graphics_obj::nme_gfx_move_to;

Dynamic Graphics_obj::nme_gfx_line_to;

Dynamic Graphics_obj::nme_gfx_curve_to;

Dynamic Graphics_obj::nme_gfx_arc_to;

Dynamic Graphics_obj::nme_gfx_draw_ellipse;

Dynamic Graphics_obj::nme_gfx_draw_data;

Dynamic Graphics_obj::nme_gfx_draw_datum;

Dynamic Graphics_obj::nme_gfx_draw_rect;

Dynamic Graphics_obj::nme_gfx_draw_path;

Dynamic Graphics_obj::nme_gfx_draw_tiles;

Dynamic Graphics_obj::nme_gfx_draw_points;

Dynamic Graphics_obj::nme_gfx_draw_round_rect;

Dynamic Graphics_obj::nme_gfx_draw_triangles;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
}

Dynamic Graphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RGBA") ) { return RGBA_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"arcTo") ) { return arcTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawPoints") ) { return drawPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nme_gfx_clear") ) { return nme_gfx_clear; }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nme_gfx_arc_to") ) { return nme_gfx_arc_to; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_gfx_move_to") ) { return nme_gfx_move_to; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_to") ) { return nme_gfx_line_to; }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_gfx_end_fill") ) { return nme_gfx_end_fill; }
		if (HX_FIELD_EQ(inName,"nme_gfx_curve_to") ) { return nme_gfx_curve_to; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_data") ) { return nme_gfx_draw_data; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_rect") ) { return nme_gfx_draw_rect; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_path") ) { return nme_gfx_draw_path; }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawGraphicsDatum") ) { return drawGraphicsDatum_dyn(); }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_fill") ) { return nme_gfx_begin_fill; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_style") ) { return nme_gfx_line_style; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_datum") ) { return nme_gfx_draw_datum; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_tiles") ) { return nme_gfx_draw_tiles; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_points") ) { return nme_gfx_draw_points; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_ellipse") ) { return nme_gfx_draw_ellipse; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_triangles") ) { return nme_gfx_draw_triangles; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_round_rect") ) { return nme_gfx_draw_round_rect; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_bitmap_fill") ) { return nme_gfx_line_bitmap_fill; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_bitmap_fill") ) { return nme_gfx_begin_bitmap_fill; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_gradient_fill") ) { return nme_gfx_line_gradient_fill; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_gradient_fill") ) { return nme_gfx_begin_gradient_fill; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nme_gfx_clear") ) { nme_gfx_clear=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nme_gfx_arc_to") ) { nme_gfx_arc_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_gfx_move_to") ) { nme_gfx_move_to=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_to") ) { nme_gfx_line_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_gfx_end_fill") ) { nme_gfx_end_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_curve_to") ) { nme_gfx_curve_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_data") ) { nme_gfx_draw_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_rect") ) { nme_gfx_draw_rect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_path") ) { nme_gfx_draw_path=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_fill") ) { nme_gfx_begin_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_style") ) { nme_gfx_line_style=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_datum") ) { nme_gfx_draw_datum=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_tiles") ) { nme_gfx_draw_tiles=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_points") ) { nme_gfx_draw_points=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_ellipse") ) { nme_gfx_draw_ellipse=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_triangles") ) { nme_gfx_draw_triangles=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_round_rect") ) { nme_gfx_draw_round_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_bitmap_fill") ) { nme_gfx_line_bitmap_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_bitmap_fill") ) { nme_gfx_begin_bitmap_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_gradient_fill") ) { nme_gfx_line_gradient_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_gradient_fill") ) { nme_gfx_begin_gradient_fill=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("RGBA"),
	HX_CSTRING("nme_gfx_clear"),
	HX_CSTRING("nme_gfx_begin_fill"),
	HX_CSTRING("nme_gfx_begin_bitmap_fill"),
	HX_CSTRING("nme_gfx_line_bitmap_fill"),
	HX_CSTRING("nme_gfx_begin_gradient_fill"),
	HX_CSTRING("nme_gfx_line_gradient_fill"),
	HX_CSTRING("nme_gfx_end_fill"),
	HX_CSTRING("nme_gfx_line_style"),
	HX_CSTRING("nme_gfx_move_to"),
	HX_CSTRING("nme_gfx_line_to"),
	HX_CSTRING("nme_gfx_curve_to"),
	HX_CSTRING("nme_gfx_arc_to"),
	HX_CSTRING("nme_gfx_draw_ellipse"),
	HX_CSTRING("nme_gfx_draw_data"),
	HX_CSTRING("nme_gfx_draw_datum"),
	HX_CSTRING("nme_gfx_draw_rect"),
	HX_CSTRING("nme_gfx_draw_path"),
	HX_CSTRING("nme_gfx_draw_tiles"),
	HX_CSTRING("nme_gfx_draw_points"),
	HX_CSTRING("nme_gfx_draw_round_rect"),
	HX_CSTRING("nme_gfx_draw_triangles"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("moveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("lineGradientStyle"),
	HX_CSTRING("lineBitmapStyle"),
	HX_CSTRING("endFill"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("drawTiles"),
	HX_CSTRING("drawPath"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawPoints"),
	HX_CSTRING("drawGraphicsDatum"),
	HX_CSTRING("drawGraphicsData"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("clear"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("beginBitmapFill"),
	HX_CSTRING("arcTo"),
	HX_CSTRING("__handle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_clear,"nme_gfx_clear");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_fill,"nme_gfx_begin_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_bitmap_fill,"nme_gfx_begin_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_bitmap_fill,"nme_gfx_line_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_gradient_fill,"nme_gfx_begin_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_gradient_fill,"nme_gfx_line_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_end_fill,"nme_gfx_end_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_style,"nme_gfx_line_style");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_move_to,"nme_gfx_move_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_to,"nme_gfx_line_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_curve_to,"nme_gfx_curve_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_arc_to,"nme_gfx_arc_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_ellipse,"nme_gfx_draw_ellipse");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_data,"nme_gfx_draw_data");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_datum,"nme_gfx_draw_datum");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_rect,"nme_gfx_draw_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_path,"nme_gfx_draw_path");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_tiles,"nme_gfx_draw_tiles");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_points,"nme_gfx_draw_points");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_round_rect,"nme_gfx_draw_round_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_triangles,"nme_gfx_draw_triangles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_clear,"nme_gfx_clear");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_fill,"nme_gfx_begin_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_bitmap_fill,"nme_gfx_begin_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_bitmap_fill,"nme_gfx_line_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_gradient_fill,"nme_gfx_begin_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_gradient_fill,"nme_gfx_line_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_end_fill,"nme_gfx_end_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_style,"nme_gfx_line_style");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_move_to,"nme_gfx_move_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_to,"nme_gfx_line_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_curve_to,"nme_gfx_curve_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_arc_to,"nme_gfx_arc_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_ellipse,"nme_gfx_draw_ellipse");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_data,"nme_gfx_draw_data");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_datum,"nme_gfx_draw_datum");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_rect,"nme_gfx_draw_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_path,"nme_gfx_draw_path");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_tiles,"nme_gfx_draw_tiles");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_points,"nme_gfx_draw_points");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_round_rect,"nme_gfx_draw_round_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_triangles,"nme_gfx_draw_triangles");
};

#endif

Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.Graphics"), hx::TCanCast< Graphics_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Graphics_obj::__boot()
{
	nme_gfx_clear= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_clear"),(int)1);
	nme_gfx_begin_fill= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_begin_fill"),(int)3);
	nme_gfx_begin_bitmap_fill= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_begin_bitmap_fill"),(int)5);
	nme_gfx_line_bitmap_fill= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_line_bitmap_fill"),(int)5);
	nme_gfx_begin_gradient_fill= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_begin_gradient_fill"),(int)-1);
	nme_gfx_line_gradient_fill= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_line_gradient_fill"),(int)-1);
	nme_gfx_end_fill= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_end_fill"),(int)1);
	nme_gfx_line_style= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_line_style"),(int)-1);
	nme_gfx_move_to= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_move_to"),(int)3);
	nme_gfx_line_to= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_line_to"),(int)3);
	nme_gfx_curve_to= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_curve_to"),(int)5);
	nme_gfx_arc_to= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_arc_to"),(int)5);
	nme_gfx_draw_ellipse= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_ellipse"),(int)5);
	nme_gfx_draw_data= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_data"),(int)2);
	nme_gfx_draw_datum= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_datum"),(int)2);
	nme_gfx_draw_rect= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_rect"),(int)5);
	nme_gfx_draw_path= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_path"),(int)4);
	nme_gfx_draw_tiles= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_tiles"),(int)4);
	nme_gfx_draw_points= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_points"),(int)-1);
	nme_gfx_draw_round_rect= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_round_rect"),(int)-1);
	nme_gfx_draw_triangles= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_gfx_draw_triangles"),(int)-1);
}

} // end namespace flash
} // end namespace display
