#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simplify
#include <zpp_nape/geom/ZPP_Simplify.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Simplify_obj::__construct()
{
	return null();
}

ZPP_Simplify_obj::~ZPP_Simplify_obj() { }

Dynamic ZPP_Simplify_obj::__CreateEmpty() { return  new ZPP_Simplify_obj; }
hx::ObjectPtr< ZPP_Simplify_obj > ZPP_Simplify_obj::__new()
{  hx::ObjectPtr< ZPP_Simplify_obj > result = new ZPP_Simplify_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Simplify_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Simplify_obj > result = new ZPP_Simplify_obj();
	result->__construct();
	return result;}

Float ZPP_Simplify_obj::lessval( ::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("ZPP_Simplify","lessval","ZPP_Simplify.lessval","zpp_nape/geom/Simplify.hx",323)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(323)
	return ((a->x - b->x) + ((a->y - b->y)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,lessval,return )

bool ZPP_Simplify_obj::less( ::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("ZPP_Simplify","less","ZPP_Simplify.less","zpp_nape/geom/Simplify.hx",327)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(327)
	return (((a->x - b->x) + ((a->y - b->y))) < 0.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,less,return )

Float ZPP_Simplify_obj::distance( ::zpp_nape::geom::ZPP_SimplifyV v,::zpp_nape::geom::ZPP_SimplifyV a,::zpp_nape::geom::ZPP_SimplifyV b){
	HX_STACK_FRAME("ZPP_Simplify","distance","ZPP_Simplify.distance","zpp_nape/geom/Simplify.hx",329)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(330)
	Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(331)
	Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(332)
	{
		HX_STACK_LINE(333)
		nx = (b->x - a->x);
		HX_STACK_LINE(334)
		ny = (b->y - a->y);
	}
	HX_STACK_LINE(336)
	Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(337)
	Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(339)
		cx = (v->x - a->x);
		HX_STACK_LINE(340)
		cy = (v->y - a->y);
	}
	HX_STACK_LINE(342)
	Float den = ((nx * nx) + (ny * ny));		HX_STACK_VAR(den,"den");
	HX_STACK_LINE(343)
	if (((den == 0.0))){
		HX_STACK_LINE(343)
		return ((cx * cx) + (cy * cy));
	}
	else{
		HX_STACK_LINE(345)
		Float t = (Float((((cx * nx) + (cy * ny)))) / Float((((nx * nx) + (ny * ny)))));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(346)
		if (((t <= (int)0))){
			HX_STACK_LINE(346)
			return ((cx * cx) + (cy * cy));
		}
		else{
			HX_STACK_LINE(347)
			if (((t >= (int)1))){
				HX_STACK_LINE(347)
				Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(347)
				Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					dx = (v->x - b->x);
					HX_STACK_LINE(347)
					dy = (v->y - b->y);
				}
				HX_STACK_LINE(347)
				return ((dx * dx) + (dy * dy));
			}
			else{
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(350)
					Float t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(359)
					hx::SubEq(cx,(nx * t1));
					HX_STACK_LINE(360)
					hx::SubEq(cy,(ny * t1));
				}
				HX_STACK_LINE(362)
				return ((cx * cx) + (cy * cy));
			}
		}
	}
	HX_STACK_LINE(343)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Simplify_obj,distance,return )

::zpp_nape::util::ZNPList_ZPP_SimplifyP ZPP_Simplify_obj::stack;

::zpp_nape::geom::ZPP_GeomVert ZPP_Simplify_obj::simplify( ::zpp_nape::geom::ZPP_GeomVert P,Float epsilon){
	HX_STACK_FRAME("ZPP_Simplify","simplify","ZPP_Simplify.simplify","zpp_nape/geom/Simplify.hx",367)
	HX_STACK_ARG(P,"P")
	HX_STACK_ARG(epsilon,"epsilon")
	HX_STACK_LINE(368)
	::zpp_nape::geom::ZPP_SimplifyV ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(369)
	::zpp_nape::geom::ZPP_SimplifyV min = null();		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(370)
	::zpp_nape::geom::ZPP_SimplifyV max = null();		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(371)
	hx::MultEq(epsilon,epsilon);
	HX_STACK_LINE(372)
	if (((::zpp_nape::geom::ZPP_Simplify_obj::stack == null()))){
		HX_STACK_LINE(373)
		::zpp_nape::geom::ZPP_Simplify_obj::stack = ::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj::__new();
	}
	HX_STACK_LINE(375)
	::zpp_nape::geom::ZPP_SimplifyV pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(376)
	::zpp_nape::geom::ZPP_SimplifyV fst = null();		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(377)
	::zpp_nape::geom::ZPP_GeomVert cur = P;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(378)
	do{
		HX_STACK_LINE(379)
		::zpp_nape::geom::ZPP_SimplifyV v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::zpp_nape::geom::ZPP_SimplifyV ret1;		HX_STACK_VAR(ret1,"ret1");
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				if (((::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool == null()))){
					HX_STACK_LINE(379)
					ret1 = ::zpp_nape::geom::ZPP_SimplifyV_obj::__new();
				}
				else{
					HX_STACK_LINE(379)
					ret1 = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;
					HX_STACK_LINE(379)
					::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = ret1->next;
					HX_STACK_LINE(379)
					ret1->next = null();
				}
				HX_STACK_LINE(379)
				Dynamic();
			}
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				ret1->x = cur->x;
				HX_STACK_LINE(379)
				ret1->y = cur->y;
				HX_STACK_LINE(379)
				{
				}
			}
			HX_STACK_LINE(379)
			ret1->flag = false;
			HX_STACK_LINE(379)
			v = ret1;
		}
		HX_STACK_LINE(380)
		v->forced = cur->forced;
		HX_STACK_LINE(381)
		if ((v->forced)){
			HX_STACK_LINE(382)
			v->flag = true;
			HX_STACK_LINE(383)
			if (((pre != null()))){
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &pre,::zpp_nape::geom::ZPP_SimplifyV &v){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",383)
						{
							HX_STACK_LINE(383)
							::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(383)
							{
								HX_STACK_LINE(383)
								if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
									HX_STACK_LINE(383)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
								}
								else{
									HX_STACK_LINE(383)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
									HX_STACK_LINE(383)
									::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(383)
									ret1->next = null();
								}
								HX_STACK_LINE(383)
								Dynamic();
							}
							HX_STACK_LINE(383)
							ret1->min = pre;
							HX_STACK_LINE(383)
							ret1->max = v;
							HX_STACK_LINE(383)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(383)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_4_1::Block(pre,v));
			}
			else{
				HX_STACK_LINE(384)
				fst = v;
			}
			HX_STACK_LINE(385)
			pre = v;
		}
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(388)
			::zpp_nape::geom::ZPP_SimplifyV obj = v;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(389)
			if (((ret == null()))){
				HX_STACK_LINE(389)
				ret = obj->prev = obj->next = obj;
			}
			else{
				HX_STACK_LINE(391)
				obj->prev = ret;
				HX_STACK_LINE(392)
				obj->next = ret->next;
				HX_STACK_LINE(393)
				ret->next->prev = obj;
				HX_STACK_LINE(394)
				ret->next = obj;
			}
			HX_STACK_LINE(387)
			ret = obj;
		}
		HX_STACK_LINE(398)
		if (((min == null()))){
			HX_STACK_LINE(399)
			min = ret;
			HX_STACK_LINE(400)
			max = ret;
		}
		else{
			HX_STACK_LINE(403)
			if (((((ret->x - min->x) + ((ret->y - min->y))) < 0.0))){
				HX_STACK_LINE(403)
				min = ret;
			}
			HX_STACK_LINE(404)
			if (((((max->x - ret->x) + ((max->y - ret->y))) < 0.0))){
				HX_STACK_LINE(404)
				max = ret;
			}
		}
		HX_STACK_LINE(406)
		cur = cur->next;
	}
while(((cur != P)));
	HX_STACK_LINE(409)
	if (((::zpp_nape::geom::ZPP_Simplify_obj::stack->head == null()))){
		HX_STACK_LINE(410)
		if (((fst == null()))){
			HX_STACK_LINE(411)
			min->flag = max->flag = true;
			struct _Function_3_1{
				inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &min,::zpp_nape::geom::ZPP_SimplifyV &max){
					HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",412)
					{
						HX_STACK_LINE(412)
						::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(412)
						{
							HX_STACK_LINE(412)
							if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
								HX_STACK_LINE(412)
								ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
							}
							else{
								HX_STACK_LINE(412)
								ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
								HX_STACK_LINE(412)
								::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(412)
								ret1->next = null();
							}
							HX_STACK_LINE(412)
							Dynamic();
						}
						HX_STACK_LINE(412)
						ret1->min = min;
						HX_STACK_LINE(412)
						ret1->max = max;
						HX_STACK_LINE(412)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(412)
			::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_3_1::Block(min,max));
			struct _Function_3_2{
				inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &max,::zpp_nape::geom::ZPP_SimplifyV &min){
					HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",413)
					{
						HX_STACK_LINE(413)
						::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(413)
						{
							HX_STACK_LINE(413)
							if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
								HX_STACK_LINE(413)
								ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
							}
							else{
								HX_STACK_LINE(413)
								ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
								HX_STACK_LINE(413)
								::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(413)
								ret1->next = null();
							}
							HX_STACK_LINE(413)
							Dynamic();
						}
						HX_STACK_LINE(413)
						ret1->min = max;
						HX_STACK_LINE(413)
						ret1->max = min;
						HX_STACK_LINE(413)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(413)
			::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_3_2::Block(max,min));
		}
		else{
			HX_STACK_LINE(416)
			Float d1 = ((min->x - fst->x) + ((min->y - fst->y)));		HX_STACK_VAR(d1,"d1");
			HX_STACK_LINE(417)
			if (((d1 < (int)0))){
				HX_STACK_LINE(417)
				d1 = -(d1);
			}
			HX_STACK_LINE(418)
			Float d2 = ((max->x - fst->x) + ((max->y - fst->y)));		HX_STACK_VAR(d2,"d2");
			HX_STACK_LINE(419)
			if (((d2 < (int)0))){
				HX_STACK_LINE(419)
				d2 = -(d2);
			}
			HX_STACK_LINE(420)
			if (((d1 > d2))){
				HX_STACK_LINE(421)
				min->flag = fst->flag = true;
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &min,::zpp_nape::geom::ZPP_SimplifyV &fst){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",422)
						{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(422)
							{
								HX_STACK_LINE(422)
								if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
									HX_STACK_LINE(422)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
								}
								else{
									HX_STACK_LINE(422)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
									HX_STACK_LINE(422)
									::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(422)
									ret1->next = null();
								}
								HX_STACK_LINE(422)
								Dynamic();
							}
							HX_STACK_LINE(422)
							ret1->min = min;
							HX_STACK_LINE(422)
							ret1->max = fst;
							HX_STACK_LINE(422)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(422)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_4_1::Block(min,fst));
				struct _Function_4_2{
					inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &fst,::zpp_nape::geom::ZPP_SimplifyV &min){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",423)
						{
							HX_STACK_LINE(423)
							::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(423)
							{
								HX_STACK_LINE(423)
								if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
									HX_STACK_LINE(423)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
								}
								else{
									HX_STACK_LINE(423)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
									HX_STACK_LINE(423)
									::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(423)
									ret1->next = null();
								}
								HX_STACK_LINE(423)
								Dynamic();
							}
							HX_STACK_LINE(423)
							ret1->min = fst;
							HX_STACK_LINE(423)
							ret1->max = min;
							HX_STACK_LINE(423)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(423)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_4_2::Block(fst,min));
			}
			else{
				HX_STACK_LINE(426)
				max->flag = fst->flag = true;
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &max,::zpp_nape::geom::ZPP_SimplifyV &fst){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(427)
							{
								HX_STACK_LINE(427)
								if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
									HX_STACK_LINE(427)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
								}
								else{
									HX_STACK_LINE(427)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
									HX_STACK_LINE(427)
									::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(427)
									ret1->next = null();
								}
								HX_STACK_LINE(427)
								Dynamic();
							}
							HX_STACK_LINE(427)
							ret1->min = max;
							HX_STACK_LINE(427)
							ret1->max = fst;
							HX_STACK_LINE(427)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(427)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_4_1::Block(max,fst));
				struct _Function_4_2{
					inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &fst,::zpp_nape::geom::ZPP_SimplifyV &max){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
									HX_STACK_LINE(428)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
								}
								else{
									HX_STACK_LINE(428)
									ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
									HX_STACK_LINE(428)
									::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(428)
									ret1->next = null();
								}
								HX_STACK_LINE(428)
								Dynamic();
							}
							HX_STACK_LINE(428)
							ret1->min = fst;
							HX_STACK_LINE(428)
							ret1->max = max;
							HX_STACK_LINE(428)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(428)
				::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_4_2::Block(fst,max));
			}
		}
	}
	else{
		struct _Function_2_1{
			inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &pre,::zpp_nape::geom::ZPP_SimplifyV &fst){
				HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(432)
					{
						HX_STACK_LINE(432)
						if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
							HX_STACK_LINE(432)
							ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
						}
						else{
							HX_STACK_LINE(432)
							ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
							HX_STACK_LINE(432)
							::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(432)
							ret1->next = null();
						}
						HX_STACK_LINE(432)
						Dynamic();
					}
					HX_STACK_LINE(432)
					ret1->min = pre;
					HX_STACK_LINE(432)
					ret1->max = fst;
					HX_STACK_LINE(432)
					return ret1;
				}
				return null();
			}
		};
		HX_STACK_LINE(432)
		::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_2_1::Block(pre,fst));
	}
	HX_STACK_LINE(433)
	while((!(((::zpp_nape::geom::ZPP_Simplify_obj::stack->head == null()))))){
		HX_STACK_LINE(434)
		::zpp_nape::geom::ZPP_SimplifyP cur1 = ::zpp_nape::geom::ZPP_Simplify_obj::stack->pop_unsafe();		HX_STACK_VAR(cur1,"cur1");
		HX_STACK_LINE(435)
		::zpp_nape::geom::ZPP_SimplifyV min1 = cur1->min;		HX_STACK_VAR(min1,"min1");
		HX_STACK_LINE(436)
		::zpp_nape::geom::ZPP_SimplifyV max1 = cur1->max;		HX_STACK_VAR(max1,"max1");
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(438)
			::zpp_nape::geom::ZPP_SimplifyP o = cur1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(447)
			o->min = o->max = null();
			HX_STACK_LINE(448)
			o->next = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
			HX_STACK_LINE(449)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(454)
		Float dmax = epsilon;		HX_STACK_VAR(dmax,"dmax");
		HX_STACK_LINE(455)
		::zpp_nape::geom::ZPP_SimplifyV dv = null();		HX_STACK_VAR(dv,"dv");
		HX_STACK_LINE(456)
		::zpp_nape::geom::ZPP_SimplifyV ite = min1->next;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(457)
		while(((ite != max1))){
			HX_STACK_LINE(458)
			Float dist = ::zpp_nape::geom::ZPP_Simplify_obj::distance(ite,min1,max1);		HX_STACK_VAR(dist,"dist");
			HX_STACK_LINE(459)
			if (((dist > dmax))){
				HX_STACK_LINE(460)
				dmax = dist;
				HX_STACK_LINE(461)
				dv = ite;
			}
			HX_STACK_LINE(463)
			ite = ite->next;
		}
		HX_STACK_LINE(465)
		if (((dv != null()))){
			HX_STACK_LINE(466)
			dv->flag = true;
			struct _Function_3_1{
				inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &min1,::zpp_nape::geom::ZPP_SimplifyV &dv){
					HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",467)
					{
						HX_STACK_LINE(467)
						::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(467)
						{
							HX_STACK_LINE(467)
							if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
								HX_STACK_LINE(467)
								ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
							}
							else{
								HX_STACK_LINE(467)
								ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
								HX_STACK_LINE(467)
								::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(467)
								ret1->next = null();
							}
							HX_STACK_LINE(467)
							Dynamic();
						}
						HX_STACK_LINE(467)
						ret1->min = min1;
						HX_STACK_LINE(467)
						ret1->max = dv;
						HX_STACK_LINE(467)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(467)
			::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_3_1::Block(min1,dv));
			struct _Function_3_2{
				inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyV &dv,::zpp_nape::geom::ZPP_SimplifyV &max1){
					HX_STACK_FRAME("*","closure","*.closure","zpp_nape/geom/Simplify.hx",468)
					{
						HX_STACK_LINE(468)
						::zpp_nape::geom::ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(468)
						{
							HX_STACK_LINE(468)
							if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
								HX_STACK_LINE(468)
								ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
							}
							else{
								HX_STACK_LINE(468)
								ret1 = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
								HX_STACK_LINE(468)
								::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(468)
								ret1->next = null();
							}
							HX_STACK_LINE(468)
							Dynamic();
						}
						HX_STACK_LINE(468)
						ret1->min = dv;
						HX_STACK_LINE(468)
						ret1->max = max1;
						HX_STACK_LINE(468)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(468)
			::zpp_nape::geom::ZPP_Simplify_obj::stack->add(_Function_3_2::Block(dv,max1));
		}
	}
	HX_STACK_LINE(471)
	::zpp_nape::geom::ZPP_GeomVert retp = null();		HX_STACK_VAR(retp,"retp");
	HX_STACK_LINE(472)
	while(((ret != null()))){
		HX_STACK_LINE(473)
		if ((ret->flag)){
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(475)
				::zpp_nape::geom::ZPP_GeomVert obj;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(475)
				{
					HX_STACK_LINE(475)
					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(475)
							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
						}
						else{
							HX_STACK_LINE(475)
							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(475)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(475)
							ret1->next = null();
						}
						HX_STACK_LINE(475)
						ret1->forced = false;
					}
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						ret1->x = ret->x;
						HX_STACK_LINE(475)
						ret1->y = ret->y;
						HX_STACK_LINE(475)
						{
						}
					}
					HX_STACK_LINE(475)
					obj = ret1;
				}
				HX_STACK_LINE(476)
				if (((retp == null()))){
					HX_STACK_LINE(476)
					retp = obj->prev = obj->next = obj;
				}
				else{
					HX_STACK_LINE(478)
					obj->prev = retp;
					HX_STACK_LINE(479)
					obj->next = retp->next;
					HX_STACK_LINE(480)
					retp->next->prev = obj;
					HX_STACK_LINE(481)
					retp->next = obj;
				}
				HX_STACK_LINE(474)
				retp = obj;
			}
			HX_STACK_LINE(485)
			retp->forced = ret->forced;
		}
		HX_STACK_LINE(496)
		if (((bool((ret != null())) && bool((ret->prev == ret))))){
			HX_STACK_LINE(497)
			ret->next = ret->prev = null();
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(499)
				::zpp_nape::geom::ZPP_SimplifyV o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(509)
				o->next = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;
				HX_STACK_LINE(510)
				::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = o;
			}
			HX_STACK_LINE(487)
			ret = ret = null();
		}
		else{
			HX_STACK_LINE(518)
			::zpp_nape::geom::ZPP_SimplifyV retnodes = ret->next;		HX_STACK_VAR(retnodes,"retnodes");
			HX_STACK_LINE(519)
			ret->prev->next = ret->next;
			HX_STACK_LINE(520)
			ret->next->prev = ret->prev;
			HX_STACK_LINE(521)
			ret->next = ret->prev = null();
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(523)
				::zpp_nape::geom::ZPP_SimplifyV o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(533)
				o->next = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;
				HX_STACK_LINE(534)
				::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = o;
			}
			HX_STACK_LINE(539)
			ret = null();
			HX_STACK_LINE(487)
			ret = retnodes;
		}
	}
	HX_STACK_LINE(544)
	return retp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simplify_obj,simplify,return )


ZPP_Simplify_obj::ZPP_Simplify_obj()
{
}

void ZPP_Simplify_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Simplify);
	HX_MARK_END_CLASS();
}

void ZPP_Simplify_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Simplify_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"less") ) { return less_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lessval") ) { return lessval_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"simplify") ) { return simplify_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Simplify_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_SimplifyP >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Simplify_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lessval"),
	HX_CSTRING("less"),
	HX_CSTRING("distance"),
	HX_CSTRING("stack"),
	HX_CSTRING("simplify"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Simplify_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Simplify_obj::stack,"stack");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Simplify_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Simplify_obj::stack,"stack");
};

#endif

Class ZPP_Simplify_obj::__mClass;

void ZPP_Simplify_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Simplify"), hx::TCanCast< ZPP_Simplify_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZPP_Simplify_obj::__boot()
{
	stack= null();
}

} // end namespace zpp_nape
} // end namespace geom
