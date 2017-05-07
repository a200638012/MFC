

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon May 08 07:51:09 2017
 */
/* Compiler settings for .\testViewOcx.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __testViewOcxidl_h__
#define __testViewOcxidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DtestViewOcx_FWD_DEFINED__
#define ___DtestViewOcx_FWD_DEFINED__
typedef interface _DtestViewOcx _DtestViewOcx;
#endif 	/* ___DtestViewOcx_FWD_DEFINED__ */


#ifndef ___DtestViewOcxEvents_FWD_DEFINED__
#define ___DtestViewOcxEvents_FWD_DEFINED__
typedef interface _DtestViewOcxEvents _DtestViewOcxEvents;
#endif 	/* ___DtestViewOcxEvents_FWD_DEFINED__ */


#ifndef __testViewOcx_FWD_DEFINED__
#define __testViewOcx_FWD_DEFINED__

#ifdef __cplusplus
typedef class testViewOcx testViewOcx;
#else
typedef struct testViewOcx testViewOcx;
#endif /* __cplusplus */

#endif 	/* __testViewOcx_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __testViewOcxLib_LIBRARY_DEFINED__
#define __testViewOcxLib_LIBRARY_DEFINED__

/* library testViewOcxLib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_testViewOcxLib;

#ifndef ___DtestViewOcx_DISPINTERFACE_DEFINED__
#define ___DtestViewOcx_DISPINTERFACE_DEFINED__

/* dispinterface _DtestViewOcx */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DtestViewOcx;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CC92D444-EB41-4207-8BAD-67D1BBC4A92D")
    _DtestViewOcx : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DtestViewOcxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DtestViewOcx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DtestViewOcx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DtestViewOcx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DtestViewOcx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DtestViewOcx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DtestViewOcx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DtestViewOcx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DtestViewOcxVtbl;

    interface _DtestViewOcx
    {
        CONST_VTBL struct _DtestViewOcxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DtestViewOcx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DtestViewOcx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DtestViewOcx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DtestViewOcx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DtestViewOcx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DtestViewOcx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DtestViewOcx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DtestViewOcx_DISPINTERFACE_DEFINED__ */


#ifndef ___DtestViewOcxEvents_DISPINTERFACE_DEFINED__
#define ___DtestViewOcxEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DtestViewOcxEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DtestViewOcxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4EE4DF87-1D45-4CA9-AAE1-1DBF3CEAD24B")
    _DtestViewOcxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DtestViewOcxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DtestViewOcxEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DtestViewOcxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DtestViewOcxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DtestViewOcxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DtestViewOcxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DtestViewOcxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DtestViewOcxEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DtestViewOcxEventsVtbl;

    interface _DtestViewOcxEvents
    {
        CONST_VTBL struct _DtestViewOcxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DtestViewOcxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DtestViewOcxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DtestViewOcxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DtestViewOcxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DtestViewOcxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DtestViewOcxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DtestViewOcxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DtestViewOcxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_testViewOcx;

#ifdef __cplusplus

class DECLSPEC_UUID("7D16D513-D372-4918-8073-B7A758515742")
testViewOcx;
#endif
#endif /* __testViewOcxLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


