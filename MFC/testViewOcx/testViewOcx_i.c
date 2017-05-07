

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_testViewOcxLib,0xFEF2346F,0xB6B1,0x494B,0x99,0xED,0xB4,0x7C,0x19,0x00,0x6F,0xEB);


MIDL_DEFINE_GUID(IID, DIID__DtestViewOcx,0xCC92D444,0xEB41,0x4207,0x8B,0xAD,0x67,0xD1,0xBB,0xC4,0xA9,0x2D);


MIDL_DEFINE_GUID(IID, DIID__DtestViewOcxEvents,0x4EE4DF87,0x1D45,0x4CA9,0xAA,0xE1,0x1D,0xBF,0x3C,0xEA,0xD2,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_testViewOcx,0x7D16D513,0xD372,0x4918,0x80,0x73,0xB7,0xA7,0x58,0x51,0x57,0x42);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



