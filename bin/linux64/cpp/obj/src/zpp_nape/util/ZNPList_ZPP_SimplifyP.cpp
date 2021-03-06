#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimplifyP_obj::__construct()
{
HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","new","ZNPList_ZPP_SimplifyP.new","zpp_nape/util/Lists.hx",7681)
{
	HX_STACK_LINE(7691)
	this->length = (int)0;
	HX_STACK_LINE(7690)
	this->pushmod = false;
	HX_STACK_LINE(7689)
	this->modified = false;
	HX_STACK_LINE(7682)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_SimplifyP_obj::~ZNPList_ZPP_SimplifyP_obj() { }

Dynamic ZNPList_ZPP_SimplifyP_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimplifyP_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > ZNPList_ZPP_SimplifyP_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > result = new ZNPList_ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SimplifyP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > result = new ZNPList_ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","at","ZNPList_ZPP_SimplifyP.at","zpp_nape/util/Lists.hx",8084)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8093)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8094)
	if (((it != null()))){
		HX_STACK_LINE(8094)
		return it->elt;
	}
	else{
		HX_STACK_LINE(8094)
		return null();
	}
	HX_STACK_LINE(8094)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::iterator_at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","iterator_at","ZNPList_ZPP_SimplifyP.iterator_at","zpp_nape/util/Lists.hx",8071)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(8080)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8081)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(8081)
		ret = ret->next;
	}
	HX_STACK_LINE(8082)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::back( ){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","back","ZNPList_ZPP_SimplifyP.back","zpp_nape/util/Lists.hx",8062)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8063)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8064)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8065)
	while(((cur != null()))){
		HX_STACK_LINE(8066)
		ret = cur;
		HX_STACK_LINE(8067)
		cur = cur->next;
	}
	HX_STACK_LINE(8069)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,back,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::front( ){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","front","ZNPList_ZPP_SimplifyP.front","zpp_nape/util/Lists.hx",8060)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8060)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,front,return )

bool ZNPList_ZPP_SimplifyP_obj::inlined_has( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_has","ZNPList_ZPP_SimplifyP.inlined_has","zpp_nape/util/Lists.hx",8029)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8038)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8039)
	{
		HX_STACK_LINE(8040)
		ret = false;
		HX_STACK_LINE(8041)
		{
			HX_STACK_LINE(8042)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8043)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8044)
				::zpp_nape::geom::ZPP_SimplifyP npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8046)
				if (((npite == obj))){
					HX_STACK_LINE(8047)
					ret = true;
					HX_STACK_LINE(8048)
					break;
				}
				HX_STACK_LINE(8051)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8055)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_has,return )

bool ZNPList_ZPP_SimplifyP_obj::has( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","has","ZNPList_ZPP_SimplifyP.has","zpp_nape/util/Lists.hx",8025)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(8025)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8025)
	{
		HX_STACK_LINE(8025)
		ret = false;
		HX_STACK_LINE(8025)
		{
			HX_STACK_LINE(8025)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8025)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8025)
				::zpp_nape::geom::ZPP_SimplifyP npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8025)
				if (((npite == obj))){
					HX_STACK_LINE(8025)
					ret = true;
					HX_STACK_LINE(8025)
					break;
				}
				HX_STACK_LINE(8025)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8025)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,has,return )

int ZNPList_ZPP_SimplifyP_obj::size( ){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","size","ZNPList_ZPP_SimplifyP.size","zpp_nape/util/Lists.hx",8022)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8022)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,size,return )

bool ZNPList_ZPP_SimplifyP_obj::empty( ){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","empty","ZNPList_ZPP_SimplifyP.empty","zpp_nape/util/Lists.hx",8017)
	HX_STACK_THIS(this)
	HX_STACK_LINE(8017)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,empty,return )

Void ZNPList_ZPP_SimplifyP_obj::reverse( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","reverse","ZNPList_ZPP_SimplifyP.reverse","zpp_nape/util/Lists.hx",8001)
		HX_STACK_THIS(this)
		HX_STACK_LINE(8002)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8003)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8004)
		while(((cur != null()))){
			HX_STACK_LINE(8005)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8006)
			cur->next = pre;
			HX_STACK_LINE(8007)
			this->head = cur;
			HX_STACK_LINE(8008)
			pre = cur;
			HX_STACK_LINE(8009)
			cur = nx;
		}
		HX_STACK_LINE(8011)
		this->modified = true;
		HX_STACK_LINE(8012)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,reverse,(void))

Void ZNPList_ZPP_SimplifyP_obj::inlined_clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_clear","ZNPList_ZPP_SimplifyP.inlined_clear","zpp_nape/util/Lists.hx",7996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7997)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7997)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7997)
			this->head = ret->next;
			HX_STACK_LINE(7997)
			{
				HX_STACK_LINE(7997)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7997)
				o->elt = null();
				HX_STACK_LINE(7997)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
				HX_STACK_LINE(7997)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7997)
			if (((this->head == null()))){
				HX_STACK_LINE(7997)
				this->pushmod = true;
			}
			HX_STACK_LINE(7997)
			this->modified = true;
			HX_STACK_LINE(7997)
			(this->length)--;
		}
		HX_STACK_LINE(7998)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimplifyP_obj::clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","clear","ZNPList_ZPP_SimplifyP.clear","zpp_nape/util/Lists.hx",7991)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7991)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7991)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7991)
			this->head = ret->next;
			HX_STACK_LINE(7991)
			{
				HX_STACK_LINE(7991)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7991)
				o->elt = null();
				HX_STACK_LINE(7991)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
				HX_STACK_LINE(7991)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7991)
			if (((this->head == null()))){
				HX_STACK_LINE(7991)
				this->pushmod = true;
			}
			HX_STACK_LINE(7991)
			this->modified = true;
			HX_STACK_LINE(7991)
			(this->length)--;
		}
		HX_STACK_LINE(7991)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre,int n){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","splice","ZNPList_ZPP_SimplifyP.splice","zpp_nape/util/Lists.hx",7986)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(7987)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(7987)
		this->erase(pre);
	}
	HX_STACK_LINE(7988)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_erase","ZNPList_ZPP_SimplifyP.inlined_erase","zpp_nape/util/Lists.hx",7940)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7949)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7950)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7951)
	if (((pre == null()))){
		HX_STACK_LINE(7952)
		old = this->head;
		HX_STACK_LINE(7953)
		ret = old->next;
		HX_STACK_LINE(7954)
		this->head = ret;
		HX_STACK_LINE(7955)
		if (((this->head == null()))){
			HX_STACK_LINE(7955)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7958)
		old = pre->next;
		HX_STACK_LINE(7959)
		ret = old->next;
		HX_STACK_LINE(7960)
		pre->next = ret;
		HX_STACK_LINE(7961)
		if (((ret == null()))){
			HX_STACK_LINE(7961)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7964)
	{
		HX_STACK_LINE(7965)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7974)
		o->elt = null();
		HX_STACK_LINE(7975)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
		HX_STACK_LINE(7976)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7981)
	this->modified = true;
	HX_STACK_LINE(7982)
	(this->length)--;
	HX_STACK_LINE(7983)
	this->pushmod = true;
	HX_STACK_LINE(7984)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","erase","ZNPList_ZPP_SimplifyP.erase","zpp_nape/util/Lists.hx",7936)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(7936)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7936)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7936)
	if (((pre == null()))){
		HX_STACK_LINE(7936)
		old = this->head;
		HX_STACK_LINE(7936)
		ret = old->next;
		HX_STACK_LINE(7936)
		this->head = ret;
		HX_STACK_LINE(7936)
		if (((this->head == null()))){
			HX_STACK_LINE(7936)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7936)
		old = pre->next;
		HX_STACK_LINE(7936)
		ret = old->next;
		HX_STACK_LINE(7936)
		pre->next = ret;
		HX_STACK_LINE(7936)
		if (((ret == null()))){
			HX_STACK_LINE(7936)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7936)
	{
		HX_STACK_LINE(7936)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7936)
		o->elt = null();
		HX_STACK_LINE(7936)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
		HX_STACK_LINE(7936)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7936)
	this->modified = true;
	HX_STACK_LINE(7936)
	(this->length)--;
	HX_STACK_LINE(7936)
	this->pushmod = true;
	HX_STACK_LINE(7936)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,erase,return )

bool ZNPList_ZPP_SimplifyP_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_try_remove","ZNPList_ZPP_SimplifyP.inlined_try_remove","zpp_nape/util/Lists.hx",7912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7921)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7922)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7923)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7924)
	while(((cur != null()))){
		HX_STACK_LINE(7925)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7926)
			{
				HX_STACK_LINE(7926)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7926)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7926)
				if (((pre == null()))){
					HX_STACK_LINE(7926)
					old = this->head;
					HX_STACK_LINE(7926)
					ret1 = old->next;
					HX_STACK_LINE(7926)
					this->head = ret1;
					HX_STACK_LINE(7926)
					if (((this->head == null()))){
						HX_STACK_LINE(7926)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7926)
					old = pre->next;
					HX_STACK_LINE(7926)
					ret1 = old->next;
					HX_STACK_LINE(7926)
					pre->next = ret1;
					HX_STACK_LINE(7926)
					if (((ret1 == null()))){
						HX_STACK_LINE(7926)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7926)
				{
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7926)
					o->elt = null();
					HX_STACK_LINE(7926)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
					HX_STACK_LINE(7926)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7926)
				this->modified = true;
				HX_STACK_LINE(7926)
				(this->length)--;
				HX_STACK_LINE(7926)
				this->pushmod = true;
				HX_STACK_LINE(7926)
				ret1;
			}
			HX_STACK_LINE(7927)
			ret = true;
			HX_STACK_LINE(7928)
			break;
		}
		HX_STACK_LINE(7930)
		pre = cur;
		HX_STACK_LINE(7931)
		cur = cur->next;
	}
	HX_STACK_LINE(7933)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_try_remove,return )

Void ZNPList_ZPP_SimplifyP_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_remove","ZNPList_ZPP_SimplifyP.inlined_remove","zpp_nape/util/Lists.hx",7908)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7908)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7908)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7908)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7908)
		while(((cur != null()))){
			HX_STACK_LINE(7908)
			if (((cur->elt == obj))){
				HX_STACK_LINE(7908)
				{
					HX_STACK_LINE(7908)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7908)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7908)
					if (((pre == null()))){
						HX_STACK_LINE(7908)
						old = this->head;
						HX_STACK_LINE(7908)
						ret1 = old->next;
						HX_STACK_LINE(7908)
						this->head = ret1;
						HX_STACK_LINE(7908)
						if (((this->head == null()))){
							HX_STACK_LINE(7908)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7908)
						old = pre->next;
						HX_STACK_LINE(7908)
						ret1 = old->next;
						HX_STACK_LINE(7908)
						pre->next = ret1;
						HX_STACK_LINE(7908)
						if (((ret1 == null()))){
							HX_STACK_LINE(7908)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7908)
					{
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7908)
						o->elt = null();
						HX_STACK_LINE(7908)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
						HX_STACK_LINE(7908)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7908)
					this->modified = true;
					HX_STACK_LINE(7908)
					(this->length)--;
					HX_STACK_LINE(7908)
					this->pushmod = true;
					HX_STACK_LINE(7908)
					ret1;
				}
				HX_STACK_LINE(7908)
				ret = true;
				HX_STACK_LINE(7908)
				break;
			}
			HX_STACK_LINE(7908)
			pre = cur;
			HX_STACK_LINE(7908)
			cur = cur->next;
		}
		HX_STACK_LINE(7908)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimplifyP_obj::try_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","try_remove","ZNPList_ZPP_SimplifyP.try_remove","zpp_nape/util/Lists.hx",7874)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(7883)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7884)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7885)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7886)
	while(((cur != null()))){
		HX_STACK_LINE(7887)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7888)
			this->erase(pre);
			HX_STACK_LINE(7889)
			ret = true;
			HX_STACK_LINE(7890)
			break;
		}
		HX_STACK_LINE(7892)
		pre = cur;
		HX_STACK_LINE(7893)
		cur = cur->next;
	}
	HX_STACK_LINE(7895)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,try_remove,return )

Void ZNPList_ZPP_SimplifyP_obj::remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","remove","ZNPList_ZPP_SimplifyP.remove","zpp_nape/util/Lists.hx",7872)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(7872)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7872)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7872)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7872)
		while(((cur != null()))){
			HX_STACK_LINE(7872)
			if (((cur->elt == obj))){
				HX_STACK_LINE(7872)
				{
					HX_STACK_LINE(7872)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7872)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7872)
					if (((pre == null()))){
						HX_STACK_LINE(7872)
						old = this->head;
						HX_STACK_LINE(7872)
						ret1 = old->next;
						HX_STACK_LINE(7872)
						this->head = ret1;
						HX_STACK_LINE(7872)
						if (((this->head == null()))){
							HX_STACK_LINE(7872)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7872)
						old = pre->next;
						HX_STACK_LINE(7872)
						ret1 = old->next;
						HX_STACK_LINE(7872)
						pre->next = ret1;
						HX_STACK_LINE(7872)
						if (((ret1 == null()))){
							HX_STACK_LINE(7872)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7872)
					{
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7872)
						o->elt = null();
						HX_STACK_LINE(7872)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
						HX_STACK_LINE(7872)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7872)
					this->modified = true;
					HX_STACK_LINE(7872)
					(this->length)--;
					HX_STACK_LINE(7872)
					this->pushmod = true;
					HX_STACK_LINE(7872)
					ret1;
				}
				HX_STACK_LINE(7872)
				ret = true;
				HX_STACK_LINE(7872)
				break;
			}
			HX_STACK_LINE(7872)
			pre = cur;
			HX_STACK_LINE(7872)
			cur = cur->next;
		}
		HX_STACK_LINE(7872)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,remove,(void))

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_pop_unsafe","ZNPList_ZPP_SimplifyP.inlined_pop_unsafe","zpp_nape/util/Lists.hx",7850)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7859)
	::zpp_nape::geom::ZPP_SimplifyP ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7860)
	this->pop();
	HX_STACK_LINE(7861)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","pop_unsafe","ZNPList_ZPP_SimplifyP.pop_unsafe","zpp_nape/util/Lists.hx",7846)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7846)
	::zpp_nape::geom::ZPP_SimplifyP ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7846)
	this->pop();
	HX_STACK_LINE(7846)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,pop_unsafe,return )

Void ZNPList_ZPP_SimplifyP_obj::inlined_pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_pop","ZNPList_ZPP_SimplifyP.inlined_pop","zpp_nape/util/Lists.hx",7812)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7821)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7822)
		this->head = ret->next;
		HX_STACK_LINE(7824)
		{
			HX_STACK_LINE(7825)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7834)
			o->elt = null();
			HX_STACK_LINE(7835)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
			HX_STACK_LINE(7836)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7841)
		if (((this->head == null()))){
			HX_STACK_LINE(7841)
			this->pushmod = true;
		}
		HX_STACK_LINE(7842)
		this->modified = true;
		HX_STACK_LINE(7843)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_pop,(void))

Void ZNPList_ZPP_SimplifyP_obj::pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","pop","ZNPList_ZPP_SimplifyP.pop","zpp_nape/util/Lists.hx",7808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(7808)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7808)
		this->head = ret->next;
		HX_STACK_LINE(7808)
		{
			HX_STACK_LINE(7808)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7808)
			o->elt = null();
			HX_STACK_LINE(7808)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
			HX_STACK_LINE(7808)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7808)
		if (((this->head == null()))){
			HX_STACK_LINE(7808)
			this->pushmod = true;
		}
		HX_STACK_LINE(7808)
		this->modified = true;
		HX_STACK_LINE(7808)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur,::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_insert","ZNPList_ZPP_SimplifyP.inlined_insert","zpp_nape/util/Lists.hx",7764)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7773)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7773)
	{
		HX_STACK_LINE(7774)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7775)
		{
			HX_STACK_LINE(7776)
			if (((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool == null()))){
				HX_STACK_LINE(7777)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();
			}
			else{
				HX_STACK_LINE(7783)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
				HX_STACK_LINE(7784)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7785)
				ret->next = null();
			}
			HX_STACK_LINE(7790)
			Dynamic();
		}
		HX_STACK_LINE(7792)
		ret->elt = o;
		HX_STACK_LINE(7793)
		temp = ret;
	}
	HX_STACK_LINE(7795)
	if (((cur == null()))){
		HX_STACK_LINE(7796)
		temp->next = this->head;
		HX_STACK_LINE(7797)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7800)
		temp->next = cur->next;
		HX_STACK_LINE(7801)
		cur->next = temp;
	}
	HX_STACK_LINE(7803)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(7804)
	(this->length)++;
	HX_STACK_LINE(7805)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur,::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","insert","ZNPList_ZPP_SimplifyP.insert","zpp_nape/util/Lists.hx",7760)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7760)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7760)
	{
		HX_STACK_LINE(7760)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7760)
		{
			HX_STACK_LINE(7760)
			if (((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool == null()))){
				HX_STACK_LINE(7760)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();
			}
			else{
				HX_STACK_LINE(7760)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
				HX_STACK_LINE(7760)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7760)
				ret->next = null();
			}
			HX_STACK_LINE(7760)
			Dynamic();
		}
		HX_STACK_LINE(7760)
		ret->elt = o;
		HX_STACK_LINE(7760)
		temp = ret;
	}
	HX_STACK_LINE(7760)
	if (((cur == null()))){
		HX_STACK_LINE(7760)
		temp->next = this->head;
		HX_STACK_LINE(7760)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7760)
		temp->next = cur->next;
		HX_STACK_LINE(7760)
		cur->next = temp;
	}
	HX_STACK_LINE(7760)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(7760)
	(this->length)++;
	HX_STACK_LINE(7760)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,insert,return )

Void ZNPList_ZPP_SimplifyP_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimplifyP x){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","addAll","ZNPList_ZPP_SimplifyP.addAll","zpp_nape/util/Lists.hx",7750)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(7751)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(7752)
		while(((cx_ite != null()))){
			HX_STACK_LINE(7753)
			::zpp_nape::geom::ZPP_SimplifyP i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(7754)
			this->add(i);
			HX_STACK_LINE(7755)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,addAll,(void))

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_add( ::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","inlined_add","ZNPList_ZPP_SimplifyP.inlined_add","zpp_nape/util/Lists.hx",7704)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7713)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7713)
	{
		HX_STACK_LINE(7714)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7715)
		{
			HX_STACK_LINE(7716)
			if (((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool == null()))){
				HX_STACK_LINE(7717)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();
			}
			else{
				HX_STACK_LINE(7723)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
				HX_STACK_LINE(7724)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7725)
				ret->next = null();
			}
			HX_STACK_LINE(7730)
			Dynamic();
		}
		HX_STACK_LINE(7732)
		ret->elt = o;
		HX_STACK_LINE(7733)
		temp = ret;
	}
	HX_STACK_LINE(7735)
	temp->next = this->head;
	HX_STACK_LINE(7736)
	this->head = temp;
	HX_STACK_LINE(7737)
	this->modified = true;
	HX_STACK_LINE(7738)
	(this->length)++;
	HX_STACK_LINE(7739)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_add,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::add( ::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","add","ZNPList_ZPP_SimplifyP.add","zpp_nape/util/Lists.hx",7700)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(7700)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7700)
	{
		HX_STACK_LINE(7700)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7700)
		{
			HX_STACK_LINE(7700)
			if (((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool == null()))){
				HX_STACK_LINE(7700)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();
			}
			else{
				HX_STACK_LINE(7700)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
				HX_STACK_LINE(7700)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
				HX_STACK_LINE(7700)
				ret->next = null();
			}
			HX_STACK_LINE(7700)
			Dynamic();
		}
		HX_STACK_LINE(7700)
		ret->elt = o;
		HX_STACK_LINE(7700)
		temp = ret;
	}
	HX_STACK_LINE(7700)
	temp->next = this->head;
	HX_STACK_LINE(7700)
	this->head = temp;
	HX_STACK_LINE(7700)
	this->modified = true;
	HX_STACK_LINE(7700)
	(this->length)++;
	HX_STACK_LINE(7700)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,add,return )

Void ZNPList_ZPP_SimplifyP_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP i){
{
		HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","setbegin","ZNPList_ZPP_SimplifyP.setbegin","zpp_nape/util/Lists.hx",7694)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(7695)
		this->head = i;
		HX_STACK_LINE(7696)
		this->modified = true;
		HX_STACK_LINE(7697)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::begin( ){
	HX_STACK_FRAME("ZNPList_ZPP_SimplifyP","begin","ZNPList_ZPP_SimplifyP.begin","zpp_nape/util/Lists.hx",7687)
	HX_STACK_THIS(this)
	HX_STACK_LINE(7687)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,begin,return )


ZNPList_ZPP_SimplifyP_obj::ZNPList_ZPP_SimplifyP_obj()
{
}

void ZNPList_ZPP_SimplifyP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimplifyP);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimplifyP_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_SimplifyP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_SimplifyP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimplifyP >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_ZPP_SimplifyP_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("head"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("at"),
	HX_CSTRING("iterator_at"),
	HX_CSTRING("back"),
	HX_CSTRING("front"),
	HX_CSTRING("inlined_has"),
	HX_CSTRING("has"),
	HX_CSTRING("size"),
	HX_CSTRING("empty"),
	HX_CSTRING("reverse"),
	HX_CSTRING("inlined_clear"),
	HX_CSTRING("clear"),
	HX_CSTRING("splice"),
	HX_CSTRING("inlined_erase"),
	HX_CSTRING("erase"),
	HX_CSTRING("inlined_try_remove"),
	HX_CSTRING("inlined_remove"),
	HX_CSTRING("try_remove"),
	HX_CSTRING("remove"),
	HX_CSTRING("inlined_pop_unsafe"),
	HX_CSTRING("pop_unsafe"),
	HX_CSTRING("inlined_pop"),
	HX_CSTRING("pop"),
	HX_CSTRING("inlined_insert"),
	HX_CSTRING("insert"),
	HX_CSTRING("addAll"),
	HX_CSTRING("inlined_add"),
	HX_CSTRING("add"),
	HX_CSTRING("setbegin"),
	HX_CSTRING("length"),
	HX_CSTRING("pushmod"),
	HX_CSTRING("modified"),
	HX_CSTRING("begin"),
	HX_CSTRING("head"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimplifyP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimplifyP_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_SimplifyP_obj::__mClass;

void ZNPList_ZPP_SimplifyP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SimplifyP"), hx::TCanCast< ZNPList_ZPP_SimplifyP_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZNPList_ZPP_SimplifyP_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
