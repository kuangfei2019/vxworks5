/* RemoteActivation_i.c generated by WIDL Version 2.2.1 on 06-Dec-01 at 11:54:18 AM */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IID_DEFINED__
#define __IID_DEFINED__
typedef struct _IID
{
  unsigned long x;
  unsigned short s1;
  unsigned short s2;
  unsigned char c[8];
} IID;
#endif /* __IID_DEFINED__ */

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif /* CLSID_DEFINED */

const IID IID_IRemoteActivation = {0x4d9f4ab8,0x7d1c,0x11cf,{0x86,0x1e,0x00,0x20,0xaf,0x6e,0x7c,0x57}};

#ifdef __cplusplus
}
#endif

