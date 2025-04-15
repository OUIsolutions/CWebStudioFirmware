/* MIT License

Copyright (c) 2023 Mateus Moutinho Queiroz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */ 

#ifndef __CWEBSTUDIO_H
#define __CWEBSTUDIO_H
#ifndef CWebStudio_dep_declare
#define CWebStudio_dep_declare

#if defined(__linux__)
#include <sys/wait.h>
#endif



#include <stdio.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#if !defined(CTextEngine_fdeclare)
/* MIT License

Copyright (c) 2023 OUI

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */ 
#ifndef CTextEngine_native_imports
#define CTextEngine_native_imports
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>


#endif

#ifndef CTextEngine_macros
#define CTextEngine_macros
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#define CTextScope(s,t)\
ctext_open(s, t);\
for(int snaunduwwqwetjsdvda = 0; snaunduwwqwetjsdvda < 1; ctext_close(s, t), ++snaunduwwqwetjsdvda)

#define CTextScope_format(s,t, ...)\
CTextStack_open_format(s,t,__VA_ARGS__);\
for(int snaunduwwqwetjsdvda = 0; snaunduwwqwetjsdvda < 1; ctext_close(s, t), ++snaunduwwqwetjsdvda)

#endif

#ifndef CTextEngine_types
#define CTextEngine_types
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct CTextStack{

    char *rendered_text;
    size_t rendered_text_alocation_size;
    size_t size;

    char *line_breaker;
    char *separator;
    int ident_level;

}CTextStack;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#define CTEXT_LINE_BREAKER "\n"
#define CTEXT_SEPARATOR "   "

#define CTEXT_LONG 1
#define CTEXT_DOUBLE 2
#define CTEXT_BOOL 3
#define CTEXT_STRING 4

#endif

#ifndef CTextEngine_typesB
#define CTextEngine_typesB
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct CTextArray{

    CTextStack **stacks;
    long size;


}CTextArray;


#endif

#ifndef CTextEngine_typesC
#define CTextEngine_typesC
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct CTextStackModule{

    //admnistrative methods
    CTextStack  *(*newStack)(const char *line_breaker, const char *separator);
    CTextStack *(*newStack_string)(const char *starter);
    CTextStack *(*newStack_string_format)(const char *format, ...);

    CTextStack *(*newStack_string_getting_ownership)(const char *starter);
    CTextStack *(*newStack_string_empty)();

    void (*free)(struct CTextStack *self);
    struct CTextStack *(*clone)(struct CTextStack *self);
    void (*represent)(struct CTextStack *self);
    char *(*self_transform_in_string_and_self_clear)(struct CTextStack *self);
    void (*restart)(struct CTextStack *self);

    //render methods
    void (*text)(struct CTextStack *self, const char *element);

    void (*segment_text)(struct CTextStack *self, const char *element);

    void (*format)(struct CTextStack *self, const char *format, ...);

    void (*segment)(struct CTextStack *self);

    void (*segment_format)(struct CTextStack *self, const char *format, ...);

    void (*open_format)(struct CTextStack *self, const char *tag, const char *format,...);

    void (*only_open_format)(struct CTextStack *self, const char *tag, const char *format,...);

    void (*auto_close_format)(struct CTextStack *self, const char *tag, const char *format,...);

    void (*open)(struct CTextStack *self, const char *tag);

    void (*close)(struct CTextStack *self, const char *tag);


    //algorithm methods
    struct CTextStack * (*substr)(struct CTextStack *self, long starter, long end);
    void  (*self_substr)(struct CTextStack *self, long starter, long end);


    struct CTextStack *(*pop)(struct CTextStack *self, long starter, long end);
    void(*self_pop)(struct CTextStack *self, long starter, long end);



    struct CTextStack *(*insert_at)(struct CTextStack *self,long point, const char *element);
    void (*self_insert_at)(struct CTextStack *self,long point, const char *element);

    struct CTextStack *(*replace)(struct CTextStack *self,const char *element, const char *element_to_replace);
    void (*self_replace)(struct CTextStack *self,const char *element, const char *element_to_replace);


    struct CTextStack *(*replace_long)(struct CTextStack *self,const char *element, long element_to_replace);
    void(*self_replace_long)(struct CTextStack *self,const char *element, long element_to_replace);


    struct CTextStack *(*replace_double)(struct CTextStack *self,const char *element, double element_to_replace);
    void (*self_replace_double)(struct CTextStack *self,const char *element, double element_to_replace);


    struct CTextStack * (*lower)(struct CTextStack *self);
    void(*self_lower)(struct CTextStack *self);

    struct CTextStack * (*upper)(struct CTextStack *self);
    void(*self_upper)(struct CTextStack *self);

    struct CTextStack *(*captalize)(struct CTextStack *self);
    void (*self_captalize)(struct CTextStack *self);

    struct CTextStack * (*reverse)(struct CTextStack *self);
    void(*self_reverse)(struct CTextStack *self);

    struct CTextStack * (*trim)(struct CTextStack *self);
    void(*self_trim)(struct CTextStack *self);

    bool (*starts_with)(struct CTextStack *self, const char *element);
    bool (*ends_with)(struct CTextStack *self, const char *element);

    bool (*equal)(struct  CTextStack *self,const char *element);
    int (*typeof_element)(struct CTextStack *self);
    bool (*is_a_num)(struct CTextStack *self);

    const char * (*typeof_in_str)(struct CTextStack *self);
    bool  (*parse_to_bool)(struct CTextStack *self);
    long  (*parse_to_integer)(struct CTextStack *self);
    double  (*parse_to_double)(struct CTextStack *self);

    long (*index_of)(struct CTextStack *self, const char *element);
    long (*index_of_char)(struct CTextStack *self, char element);
}CTextStackModule;



//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CTextArrayModule{
    CTextArray *(*newArray)();
    void (*append)(CTextArray *self,CTextStack *element);
    void (*append_string)(CTextArray *self,const char *element);
    CTextStack * (*join)(CTextArray *self,const char *separator);

    CTextArray * (*map)(CTextArray *self, CTextStack *(caller)(CTextStack* element));
    CTextArray * (*filter)(CTextArray *self, bool (caller)(CTextStack* element));
    void  (*foreach)(CTextArray *self, void (*caller)(CTextStack* element));
    bool (*includes)(CTextArray *self,const char *element);
    void (*represent)(CTextArray *self);
    void (*free)(CTextArray *self);

}CTextArrayModule;

#endif

#ifndef CTextEngine_typesD
#define CTextEngine_typesD
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




typedef struct CTextNamespace{

    CTextArrayModule array;
    CTextStackModule stack;

}CTextNamespace;

#endif

#ifndef CTextEngine_consts
#define CTextEngine_consts
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#define CTEXT_BY_OWNESHIP 1
#define CTEXT_BY_COPY 2
#define CTEXT_BY_REFERENCE 3

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
//
// Created by jurandi on 18-04-2023.
//
#define CTEXT_HTML "html"
#define CTEXT_BODY "body"
#define CTEXT_DIV "div"
#define CTEXT_H1 "h1"
#define CTEXT_H2 "h2"
#define CTEXT_H3 "h3"
#define CTEXT_H4 "h4"
#define CTEXT_H5 "h5"
#define CTEXT_H6 "h6"
#define CTEXT_P "p"
#define CTEXT_SPAN "span"
#define CTEXT_A "a"
#define CTEXT_IMG "img"
#define CTEXT_INPUT "input"
#define CTEXT_BUTTON "button"
#define CTEXT_TABLE "table"
#define CTEXT_TR "tr"
#define CTEXT_TD "td"
#define TH "th"
#define CTEXT_THEAD "thead"
#define CTEXT_TBODY "tbody"
#define CTEXT_TFOOT "tfoot"
#define CTEXT_UL "ul"
#define CTEXT_LI "li"
#define CTEXT_OL "ol"
#define CTEXT_FORM "form"
#define CTEXT_LABEL "label"
#define CTEXT_SELECT "select"
#define CTEXT_OPTION "option"
#define CTEXT_TEXTAREA "textarea"
#define CTEXT_SCRIPT "script"
#define CTEXT_STYLE "style"
#define CTEXT_META "meta"
#define CTEXT_LINK "link"
#define CTEXT_HEAD "head"
#define CTEXT_BASE "base"
#define CTEXT_BR "br"
#define CTEXT_HR "hr"
#define CTEXT_TITLE "title"
#define CTEXT_IFRAME "iframe"
#define CTEXT_NAV "nav"
#define CTEXT_HEADER "header"
#define CTEXT_FOOTER "footer"
#define CTEXT_SECTION "section"
#define CTEXT_ARTICLE "article"
#define CTEXT_ASIDE "aside"
#define CTEXT_DETAILS "details"
#define CTEXT_SUMMARY "summary"
#define CTEXT_DIALOG "dialog"
#define MENU "menu"
#define MENUITEM "menuitem"
#define CTEXT_MAIN "main"
#define CTEXT_CANVAS "canvas"
#define CTEXT_AUDIO "audio"
#define CTEXT_VIDEO "video"
#define CTEXT_SOURCE "source"
#define CTEXT_TRACK "track"
#define CTEXT_EMBED "embed"
#define CTEXT_PARAM "param"
    




#endif

#ifndef CTextEngine_fdeclare
#define CTextEngine_fdeclare
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CTextArray * newCTextArray();


void CTextArray_append(CTextArray *self,CTextStack *element);


void CTextArray_append_string(CTextArray *self,const char *element);

CTextStack * CTextArray_join(CTextArray *self,const char *separator);

CTextArray * CTextArray_split(const char *element,const char *target);

CTextArray * CTextArray_map(CTextArray *self, CTextStack *(caller)(CTextStack* element));

CTextArray * CTextArray_filter(CTextArray *self, bool (caller)(CTextStack* element));

void  CTextArray_foreach(CTextArray *self, void (*caller)(CTextStack* element));

bool CTextArray_includes(CTextArray *self,const char *element);

void  CTextArray_free(CTextArray *self);

void CTextArray_represent(CTextArray *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CTextStackModule newCTextStackModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CTextArrayModule newCTextArrayModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CTextNamespace newCTextNamespace();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






char * CTextStack_self_transform_in_string_and_self_clear(struct CTextStack *self);

void private_CTextStack_parse_ownership(struct CTextStack *self, struct CTextStack *new_stack);

void CTextStack_restart(struct CTextStack *self);

void CTextStack_represent(struct CTextStack *self);

void CTextStack_free(struct CTextStack *self);

 CTextStack * CTextStack_clone(struct CTextStack *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



 CTextStack * CTextStack_substr(struct CTextStack *self, long starter, long end);


void CTextStack_self_substr(struct CTextStack *self, long starter, long end);

struct CTextStack *CTextStack_replace(struct CTextStack *self,const char *element, const char *element_to_replace);

void CTextStack_self_replace(struct CTextStack *self,const char *element, const char *element_to_replace);


struct CTextStack *CTextStack_replace_long(struct CTextStack *self,const char *element, long element_to_replace);



void CTextStack_self_replace_long(struct CTextStack *self,const char *element, long element_to_replace);


struct CTextStack *CTextStack_replace_double(struct CTextStack *self,const char *element, double element_to_replace);


void CTextStack_self_replace_double(struct CTextStack *self,const char *element, double element_to_replace);


long CTextStack_index_of(struct  CTextStack *self, const char *element);

long CTextStack_index_of_char(struct  CTextStack *self, char element);

bool CTextStack_starts_with(struct  CTextStack *self, const char *element);


bool CTextStack_ends_with(struct  CTextStack *self, const char *element);



struct CTextStack *CTextStack_lower(struct CTextStack *self);

void CTextStack_self_lower(struct CTextStack *self);


struct CTextStack *CTextStack_upper(struct CTextStack *self);


CTextStack *CTextStack_captalize(struct CTextStack *self);

void CTextStack_self_captalize(struct CTextStack *self);


void CTextStack_self_upper(struct CTextStack *self);


 CTextStack *CTextStack_reverse(struct CTextStack *self);

void CTextStack_self_reverse(struct CTextStack *self);


CTextStack *CTextStack_pop(struct CTextStack *self, long starter, long end);


void  CTextStack_self_pop(struct CTextStack *self, long starter, long end);



CTextStack *CTextStack_insert_at(struct CTextStack *self,long point, const char *element);


void CTextStack_self_insert_at(struct CTextStack *self,long point, const char *element);

CTextStack *CTextStack_trim(struct CTextStack *self);

void CTextStack_self_trim(struct CTextStack *self);

bool CTextStack_equal(  CTextStack *self,const char *element);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

 CTextStack * newCTextStack(const char *line_breaker, const char *separator);

 CTextStack *newCTextStack_string(const char *starter);


 CTextStack *newCTextStack_string_format(const char *format, ...);


 CTextStack *newCTextStack_string_getting_ownership(const char *starter);

 CTextStack *newCTextStack_string_empty();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

int CTextStack_typeof(struct CTextStack *self);

bool CTextStack_is_a_num(struct CTextStack *self);

const char * CTextStack_typeof_in_str(struct CTextStack *self);

bool  CTextStack_parse_to_bool(struct CTextStack *self);

long  CTextStack_parse_to_integer(struct CTextStack *self);

double  CTextStack_parse_to_double(struct CTextStack *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

void private_ctext_text_double_size_if_reachs(struct CTextStack *self);


void CTextStack_text(struct CTextStack *self, const char *text);



void CTextStack_segment_text(struct CTextStack *self, const char *text);


void CTextStack_format(struct CTextStack *self, const char *format, ...);


void CTextStack_segment_format(struct CTextStack *self, const char *format, ...);



void CTextStack_segment(struct CTextStack *self);


void CTextStack_open_format(struct CTextStack *self, const char *tag, const char *format, ...);




void CTextStack_only_open_format(struct CTextStack *self, const char *tag, const char *format, ...);


void CTextStack_auto_close_format(struct CTextStack *self, const char *tag, const char *format, ...);


void ctext_open(struct CTextStack *self, const char *tag);



void ctext_close(struct CTextStack *self, const char *tag);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


long private_CText_transform_index(long size, long value);


void private_ctext_generate_formated_text(
    struct CTextStack *stack,
    const char *format,
    va_list argptr
    );
#endif

#define CWEB_CTEXT_ENGINE_DECLARATED
#endif

#if !defined(UniversalSocket_dep)
/* MIT License

Copyright (c) 2024 Samuel Henrique

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */ 
#ifndef UniversalSocket_dep
#define UniversalSocket_dep



#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>


//#define _GET_ADDR_INFO_DEFAULT_


#if defined(__linux__)
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <unistd.h>
#include <errno.h>

#endif

#if defined(_WIN32)

#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>

#pragma comment(lib, "ws2_32.lib")

#endif

#endif

#ifndef UniversalSocket_mac
#define UniversalSocket_mac

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#define UNI_AF_INET AF_INET
#define UNI_INADDR_ANY INADDR_ANY
#define UNI_FD_SET FD_SET
#define UNI_FD_CLR FD_CLR
#define UNI_FD_ISSET FD_ISSET
#define UNI_FD_ZERO FD_ZERO
#define UNI_SOCK_STREAM SOCK_STREAM
#define UNI_SOCK_DGRAM SOCK_DGRAM
#define UNI_SOCK_RAW SOCK_RAW
#define UNI_MSG_PEEK MSG_PEEK
#define UNI_SO_RCVTIMEO SO_RCVTIMEO
#define UNI_SO_SNDTIMEO SO_SNDTIMEO
#define UNI_SO_KEEPALIVE SO_KEEPALIVE
#define UNI_SO_BROADCAST SO_BROADCAST
#define UNI_SO_LINGER SO_LINGER
#define UNI_AF_UNSPEC AF_UNSPEC
#define UNI_IPPROTO_TCP IPPROTO_TCP
#define UNI_IPPROTO_UDP IPPROTO_UDP
#define UNI_MSG_OOB MSG_OOB
#define UNI_AF_INET6 AF_INET6
#define UNI_SHUT_RD SHUT_RD
#define UNI_SHUT_WR SHUT_WR
#define UNI_SHUT_RDWR SHUT_RDWR

#define UNI_SO_REUSEADDR SO_REUSEADDR
#define UNI_SO_RCVBUF SO_RCVBUF
#define UNI_SOL_SOCKET SOL_SOCKET
#define UNI_AF_INET6 AF_INET6

#define UNI_INET6_ADDRSTRLEN INET6_ADDRSTRLEN

#define UNI_EAI_MEMORY EAI_MEMORY

#define UNI_INET_ADDRSTRLEN INET_ADDRSTRLEN




//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#if defined(__linux__)

#define UNI_INVALID_SOCKET -1
#define UNI_SOCKET_ERROR -1
#define UNI_EAGAIN EAGAIN
#define UNI_EWOULDBLOCK EWOULDBLOCK

#define UNI_ECONNREFUSED ECONNREFUSED
#define UNI_ETIMEDOUT ETIMEDOUT
#define UNI_EINPROGRESS EINPROGRESS
#define UNI_EADDRNOTAVAIL EADDRNOTAVAIL
#define UNI_ENETUNREACH ENETUNREACH
#define UNI_MSG_WAITALL MSG_WAITALL

#define UNI_EAI_NONAME EAI_NONAME 
#define UNI_EAI_AGAIN EAI_AGAIN
#define UNI_EAI_FAIL EAI_FAIL
#define UNI_EAI_NODATA EAI_NONAME

#endif


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#if defined(_WIN32)

#define UNI_INVALID_SOCKET INVALID_SOCKET
#define UNI_SOCKET_ERROR SOCKET_ERROR
#define UNI_EAGAIN WSAEWOULDBLOCK
#define UNI_EWOULDBLOCK WSAEWOULDBLOCK
#define UNI_MSG_WAITALL 0

#define UNI_ECONNREFUSED WSAECONNREFUSED
#define UNI_ETIMEDOUT WSAETIMEDOUT
#define UNI_EINPROGRESS WSAEINPROGRESS
#define UNI_EADDRNOTAVAIL WSAEADDRNOTAVAIL
#define UNI_ENETUNREACH WSAENETUNREACH

#define UNI_EAI_NONAME WSAHOST_NOT_FOUND
#define UNI_EAI_AGAIN WSATRY_AGAIN
#define UNI_EAI_FAIL WSANO_RECOVERY
#define UNI_EAI_NODATA WSANO_DATA

#endif








#endif

#ifndef UniversalSocket_types
#define UniversalSocket_types

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct sockaddr Universal_sockaddr;

typedef struct sockaddr_in Universal_sockaddr_in;

typedef struct sockaddr_in6 Universal_sockaddr_in6;

typedef struct sockaddr_storage Universal_sockaddr_storage;

typedef struct addrinfo Universal_addrinfo;

typedef struct in_addr Universal_in_addr;

typedef struct in6_addr Universal_in6_addr;

typedef struct hostent Universal_hostent;





//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#if defined(__linux__)

typedef int Universal_socket_int;

typedef socklen_t Universal_socket_len;

typedef unsigned int Universal_DWORD;

typedef ssize_t Universal_ssize_t;

#endif


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




#if defined(_WIN32)

typedef SOCKET Universal_socket_int;

typedef int Universal_socket_len;

typedef DWORD Universal_DWORD;

typedef unsigned long in_addr_t;

typedef long Universal_ssize_t;

#endif

#endif

#ifndef UniversalSocket_dec
#define UniversalSocket_dec

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




extern const char* Universal_inet_ntoa(Universal_in_addr addr);

extern ssize_t Universal_recv (int fd, void *buf, size_t n, int flags);



//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



extern ssize_t Universal_send (int fd, const void *buf, size_t n, int flags);

extern const char *Universal_inet_ntop(int af, const void *src, char *dst, Universal_socket_len size);

extern int Universal_inet_pton(int af, const char *src, void *dst);

uint32_t Universal_ntohl(uint32_t netlong);

uint16_t Universal_htons(uint16_t value);

uint16_t Universal_ntohs(uint16_t value);

extern in_addr_t Universal_inet_addr(const char *ip);




//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


extern int Universal_bind (int fd,Universal_sockaddr_in  *addrin , Universal_socket_len len);

extern int Universal_accept (int fd, Universal_sockaddr_in *addrin,
		   Universal_socket_len *adrr_len);

extern int Universal_listen (int fd, int n);

extern int Universal_connect(int sockfd, const Universal_sockaddr *addr, socklen_t addrlen);




//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






int Universal_getaddrinfo(const char *node, const char *service, const Universal_addrinfo *hints, Universal_addrinfo **res);






//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



extern char *Universal_GetLastError();









//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


extern int Universal_start_all ();

extern int Universal_close (int fd);

extern int Universal_end ();

//#if defined(_GET_ADDR_INFO_DEFAULT_)

int Universal_getaddrinfo(const char *node, const char *service, const Universal_addrinfo *hints, Universal_addrinfo **res);

void Universal_freeaddrinfo(Universal_addrinfo *addrinfo_ptr);
//#endif





//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int Universal_socket (int domain, int type, int protocol);

int Universal_ZeroMemory(void *ptr, size_t num);

int Universal_setsockopt(
    Universal_socket_int sockfd,
    int level,
    int optname,
    const void *optval,
    Universal_socket_len optlen
);

int Universal_getsockopt(
    Universal_socket_int sockfd,
    int level,
    int optname,
    void *optval,
    Universal_socket_len *optlen
);

Universal_hostent *Universal_gethostbyname(const char *hostname);






//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




#if defined(_WIN32)

ssize_t private_Universal_recv_all(int fd, void *buf, size_t n);

#endif

#endif

#define CWEB_UNIVERSAL_SOCKET_DECLARATED
#endif 

#if !defined(cJSON__h) && !defined(CWEB_MOCK_CJSON) 
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#ifndef cJSON__h
#define cJSON__h

#ifdef __cplusplus
extern "C"
{
#endif

#if !defined(__WINDOWS__) && (defined(WIN32) || defined(WIN64) || defined(_MSC_VER) || defined(_WIN32))
#define __WINDOWS__
#endif

#ifdef __WINDOWS__

/* When compiling for windows, we specify a specific calling convention to avoid issues where we are being called from a project with a different default calling convention.  For windows you have 3 define options:

CJSON_HIDE_SYMBOLS - Define this in the case where you don't want to ever dllexport symbols
CJSON_EXPORT_SYMBOLS - Define this on library build when you want to dllexport symbols (default)
CJSON_IMPORT_SYMBOLS - Define this if you want to dllimport symbol

For *nix builds that support visibility attribute, you can define similar behavior by

setting default visibility to hidden by adding
-fvisibility=hidden (for gcc)
or
-xldscope=hidden (for sun cc)
to CFLAGS

then using the CJSON_API_VISIBILITY flag to "export" the same symbols the way CJSON_EXPORT_SYMBOLS does

*/

#define CJSON_CDECL __cdecl
#define CJSON_STDCALL __stdcall

/* export symbols by default, this is necessary for copy pasting the C and header file */
#if !defined(CJSON_HIDE_SYMBOLS) && !defined(CJSON_IMPORT_SYMBOLS) && !defined(CJSON_EXPORT_SYMBOLS)
#define CJSON_EXPORT_SYMBOLS
#endif

#if defined(CJSON_HIDE_SYMBOLS)
#define CJSON_PUBLIC(type)   type CJSON_STDCALL
#elif defined(CJSON_EXPORT_SYMBOLS)
#define CJSON_PUBLIC(type)   __declspec(dllexport) type CJSON_STDCALL
#elif defined(CJSON_IMPORT_SYMBOLS)
#define CJSON_PUBLIC(type)   __declspec(dllimport) type CJSON_STDCALL
#endif
#else /* !__WINDOWS__ */
#define CJSON_CDECL
#define CJSON_STDCALL

#if (defined(__GNUC__) || defined(__SUNPRO_CC) || defined (__SUNPRO_C)) && defined(CJSON_API_VISIBILITY)
#define CJSON_PUBLIC(type)   __attribute__((visibility("default"))) type
#else
#define CJSON_PUBLIC(type) type
#endif
#endif

/* project version */
#define CJSON_VERSION_MAJOR 1
#define CJSON_VERSION_MINOR 7
#define CJSON_VERSION_PATCH 18

#include <stddef.h>

/* cJSON Types: */
#define cJSON_Invalid (0)
#define cJSON_False  (1 << 0)
#define cJSON_True   (1 << 1)
#define cJSON_NULL   (1 << 2)
#define cJSON_Number (1 << 3)
#define cJSON_String (1 << 4)
#define cJSON_Array  (1 << 5)
#define cJSON_Object (1 << 6)
#define cJSON_Raw    (1 << 7) /* raw json */

#define cJSON_IsReference 256
#define cJSON_StringIsConst 512

/* The cJSON structure: */
typedef struct cJSON
{
    /* next/prev allow you to walk array/object chains. Alternatively, use GetArraySize/GetArrayItem/GetObjectItem */
    struct cJSON *next;
    struct cJSON *prev;
    /* An array or object item will have a child pointer pointing to a chain of the items in the array/object. */
    struct cJSON *child;

    /* The type of the item, as above. */
    int type;

    /* The item's string, if type==cJSON_String  and type == cJSON_Raw */
    char *valuestring;
    /* writing to valueint is DEPRECATED, use cJSON_SetNumberValue instead */
    int valueint;
    /* The item's number, if type==cJSON_Number */
    double valuedouble;

    /* The item's name string, if this item is the child of, or is in the list of subitems of an object. */
    char *string;
} cJSON;

typedef struct cJSON_Hooks
{
      /* malloc/free are CDECL on Windows regardless of the default calling convention of the compiler, so ensure the hooks allow passing those functions directly. */
      void *(CJSON_CDECL *malloc_fn)(size_t sz);
      void (CJSON_CDECL *free_fn)(void *ptr);
} cJSON_Hooks;

typedef int cJSON_bool;

/* Limits how deeply nested arrays/objects can be before cJSON rejects to parse them.
 * This is to prevent stack overflows. */
#ifndef CJSON_NESTING_LIMIT
#define CJSON_NESTING_LIMIT 1000
#endif

/* returns the version of cJSON as a string */
CJSON_PUBLIC(const char*) cJSON_Version(void);

/* Supply malloc, realloc and free functions to cJSON */
CJSON_PUBLIC(void) cJSON_InitHooks(cJSON_Hooks* hooks);

/* Memory Management: the caller is always responsible to free the results from all variants of cJSON_Parse (with cJSON_Delete) and cJSON_Print (with stdlib free, cJSON_Hooks.free_fn, or cJSON_free as appropriate). The exception is cJSON_PrintPreallocated, where the caller has full responsibility of the buffer. */
/* Supply a block of JSON, and this returns a cJSON object you can interrogate. */
CJSON_PUBLIC(cJSON *) cJSON_Parse(const char *value);
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLength(const char *value, size_t buffer_length);
/* ParseWithOpts allows you to require (and check) that the JSON is null terminated, and to retrieve the pointer to the final byte parsed. */
/* If you supply a ptr in return_parse_end and parsing fails, then return_parse_end will contain a pointer to the error so will match cJSON_GetErrorPtr(). */
CJSON_PUBLIC(cJSON *) cJSON_ParseWithOpts(const char *value, const char **return_parse_end, cJSON_bool require_null_terminated);
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLengthOpts(const char *value, size_t buffer_length, const char **return_parse_end, cJSON_bool require_null_terminated);

/* Render a cJSON entity to text for transfer/storage. */
CJSON_PUBLIC(char *) cJSON_Print(const cJSON *item);
/* Render a cJSON entity to text for transfer/storage without any formatting. */
CJSON_PUBLIC(char *) cJSON_PrintUnformatted(const cJSON *item);
/* Render a cJSON entity to text using a buffered strategy. prebuffer is a guess at the final size. guessing well reduces reallocation. fmt=0 gives unformatted, =1 gives formatted */
CJSON_PUBLIC(char *) cJSON_PrintBuffered(const cJSON *item, int prebuffer, cJSON_bool fmt);
/* Render a cJSON entity to text using a buffer already allocated in memory with given length. Returns 1 on success and 0 on failure. */
/* NOTE: cJSON is not always 100% accurate in estimating how much memory it will use, so to be safe allocate 5 bytes more than you actually need */
CJSON_PUBLIC(cJSON_bool) cJSON_PrintPreallocated(cJSON *item, char *buffer, const int length, const cJSON_bool format);
/* Delete a cJSON entity and all subentities. */
CJSON_PUBLIC(void) cJSON_Delete(cJSON *item);

/* Returns the number of items in an array (or object). */
CJSON_PUBLIC(int) cJSON_GetArraySize(const cJSON *array);
/* Retrieve item number "index" from array "array". Returns NULL if unsuccessful. */
CJSON_PUBLIC(cJSON *) cJSON_GetArrayItem(const cJSON *array, int index);
/* Get item "string" from object. Case insensitive. */
CJSON_PUBLIC(cJSON *) cJSON_GetObjectItem(const cJSON * const object, const char * const string);
CJSON_PUBLIC(cJSON *) cJSON_GetObjectItemCaseSensitive(const cJSON * const object, const char * const string);
CJSON_PUBLIC(cJSON_bool) cJSON_HasObjectItem(const cJSON *object, const char *string);
/* For analysing failed parses. This returns a pointer to the parse error. You'll probably need to look a few chars back to make sense of it. Defined when cJSON_Parse() returns 0. 0 when cJSON_Parse() succeeds. */
CJSON_PUBLIC(const char *) cJSON_GetErrorPtr(void);

/* Check item type and return its value */
CJSON_PUBLIC(char *) cJSON_GetStringValue(const cJSON * const item);
CJSON_PUBLIC(double) cJSON_GetNumberValue(const cJSON * const item);

/* These functions check the type of an item */
CJSON_PUBLIC(cJSON_bool) cJSON_IsInvalid(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsFalse(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsTrue(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsBool(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsNull(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsNumber(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsString(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsArray(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsObject(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsRaw(const cJSON * const item);

/* These calls create a cJSON item of the appropriate type. */
CJSON_PUBLIC(cJSON *) cJSON_CreateNull(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateTrue(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateFalse(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateBool(cJSON_bool boolean);
CJSON_PUBLIC(cJSON *) cJSON_CreateNumber(double num);
CJSON_PUBLIC(cJSON *) cJSON_CreateString(const char *string);
/* raw json */
CJSON_PUBLIC(cJSON *) cJSON_CreateRaw(const char *raw);
CJSON_PUBLIC(cJSON *) cJSON_CreateArray(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateObject(void);

/* Create a string where valuestring references a string so
 * it will not be freed by cJSON_Delete */
CJSON_PUBLIC(cJSON *) cJSON_CreateStringReference(const char *string);
/* Create an object/array that only references it's elements so
 * they will not be freed by cJSON_Delete */
CJSON_PUBLIC(cJSON *) cJSON_CreateObjectReference(const cJSON *child);
CJSON_PUBLIC(cJSON *) cJSON_CreateArrayReference(const cJSON *child);

/* These utilities create an Array of count items.
 * The parameter count cannot be greater than the number of elements in the number array, otherwise array access will be out of bounds.*/
CJSON_PUBLIC(cJSON *) cJSON_CreateIntArray(const int *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateFloatArray(const float *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateDoubleArray(const double *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateStringArray(const char *const *strings, int count);

/* Append item to the specified array/object. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToArray(cJSON *array, cJSON *item);
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObject(cJSON *object, const char *string, cJSON *item);
/* Use this when string is definitely const (i.e. a literal, or as good as), and will definitely survive the cJSON object.
 * WARNING: When this function was used, make sure to always check that (item->type & cJSON_StringIsConst) is zero before
 * writing to `item->string` */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObjectCS(cJSON *object, const char *string, cJSON *item);
/* Append reference to item to the specified array/object. Use this when you want to add an existing cJSON to a new cJSON, but don't want to corrupt your existing cJSON. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToArray(cJSON *array, cJSON *item);
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToObject(cJSON *object, const char *string, cJSON *item);

/* Remove/Detach items from Arrays/Objects. */
CJSON_PUBLIC(cJSON *) cJSON_DetachItemViaPointer(cJSON *parent, cJSON * const item);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromArray(cJSON *array, int which);
CJSON_PUBLIC(void) cJSON_DeleteItemFromArray(cJSON *array, int which);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObject(cJSON *object, const char *string);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObjectCaseSensitive(cJSON *object, const char *string);
CJSON_PUBLIC(void) cJSON_DeleteItemFromObject(cJSON *object, const char *string);
CJSON_PUBLIC(void) cJSON_DeleteItemFromObjectCaseSensitive(cJSON *object, const char *string);

/* Update array items. */
CJSON_PUBLIC(cJSON_bool) cJSON_InsertItemInArray(cJSON *array, int which, cJSON *newitem); /* Shifts pre-existing items to the right. */
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemViaPointer(cJSON * const parent, cJSON * const item, cJSON * replacement);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInArray(cJSON *array, int which, cJSON *newitem);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObject(cJSON *object,const char *string,cJSON *newitem);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObjectCaseSensitive(cJSON *object,const char *string,cJSON *newitem);

/* Duplicate a cJSON item */
CJSON_PUBLIC(cJSON *) cJSON_Duplicate(const cJSON *item, cJSON_bool recurse);
/* Duplicate will create a new, identical cJSON item to the one you pass, in new memory that will
 * need to be released. With recurse!=0, it will duplicate any children connected to the item.
 * The item->next and ->prev pointers are always zero on return from Duplicate. */
/* Recursively compare two cJSON items for equality. If either a or b is NULL or invalid, they will be considered unequal.
 * case_sensitive determines if object keys are treated case sensitive (1) or case insensitive (0) */
CJSON_PUBLIC(cJSON_bool) cJSON_Compare(const cJSON * const a, const cJSON * const b, const cJSON_bool case_sensitive);

/* Minify a strings, remove blank characters(such as ' ', '\t', '\r', '\n') from strings.
 * The input pointer json cannot point to a read-only address area, such as a string constant, 
 * but should point to a readable and writable address area. */
CJSON_PUBLIC(void) cJSON_Minify(char *json);

/* Helper functions for creating and adding items to an object at the same time.
 * They return the added item or NULL on failure. */
CJSON_PUBLIC(cJSON*) cJSON_AddNullToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddTrueToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddFalseToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddBoolToObject(cJSON * const object, const char * const name, const cJSON_bool boolean);
CJSON_PUBLIC(cJSON*) cJSON_AddNumberToObject(cJSON * const object, const char * const name, const double number);
CJSON_PUBLIC(cJSON*) cJSON_AddStringToObject(cJSON * const object, const char * const name, const char * const string);
CJSON_PUBLIC(cJSON*) cJSON_AddRawToObject(cJSON * const object, const char * const name, const char * const raw);
CJSON_PUBLIC(cJSON*) cJSON_AddObjectToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddArrayToObject(cJSON * const object, const char * const name);

/* When assigning an integer value, it needs to be propagated to valuedouble too. */
#define cJSON_SetIntValue(object, number) ((object) ? (object)->valueint = (object)->valuedouble = (number) : (number))
/* helper for the cJSON_SetNumberValue macro */
CJSON_PUBLIC(double) cJSON_SetNumberHelper(cJSON *object, double number);
#define cJSON_SetNumberValue(object, number) ((object != NULL) ? cJSON_SetNumberHelper(object, (double)number) : (number))
/* Change the valuestring of a cJSON_String object, only takes effect when type of object is cJSON_String */
CJSON_PUBLIC(char*) cJSON_SetValuestring(cJSON *object, const char *valuestring);

/* If the object is not a boolean type this does nothing and returns cJSON_Invalid else it returns the new type*/
#define cJSON_SetBoolValue(object, boolValue) ( \
    (object != NULL && ((object)->type & (cJSON_False|cJSON_True))) ? \
    (object)->type=((object)->type &(~(cJSON_False|cJSON_True)))|((boolValue)?cJSON_True:cJSON_False) : \
    cJSON_Invalid\
)

/* Macro for iterating over an array or object */
#define cJSON_ArrayForEach(element, array) for(element = (array != NULL) ? (array)->child : NULL; element != NULL; element = element->next)

/* malloc/free objects using the malloc/free functions that have been set with cJSON_InitHooks */
CJSON_PUBLIC(void *) cJSON_malloc(size_t size);
CJSON_PUBLIC(void) cJSON_free(void *object);

#ifdef __cplusplus
}
#endif

#endif

#define CWEB_CJSON_DECLARATED
#endif

#if !defined(UniversalGarbage_fdeclare) && !defined(CWEB_MOCK_UNIVERSAL_GARBAGE)
/* MIT License

Copyright (c) 2023 OUI

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */ 
#ifndef UniversalGarbage_native_imports
#define UniversalGarbage_native_imports

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#endif

#ifndef UniversalGarbage_macros
#define UniversalGarbage_macros
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#define UniversalGarbage_create_empty_struct(name,element_type) \
(element_type*)malloc(sizeof(element_type));    \
*name = (element_type){0};\


#define UniversalGarbage_cast(value) ((void**)&value)


#define UniversalGarbage_add(garbage,deallocator_callback,value) \
    rawUniversalGarbage_add(garbage,(void(*)(void*))deallocator_callback,UniversalGarbage_cast(value))

#define UniversalGarbage_add_simple(garbage,value) \
     UniversalGarbage_add(garbage,free,value)


#define UniversalGarbage_add_return(garbage,deallocator_callback,value) \
        UniversalGarbage_add(garbage->return_values,deallocator_callback,value)


#define UniversalGarbage_add_simple_return(garbage,value) \
    UniversalGarbage_add_simple(garbage->return_values,value)



#define  UniversalGarbage_remove(garbage,value) \
    rawUniversalGarbage_remove(garbage,UniversalGarbage_cast(value));\


#define  UniversalGarbage_disconnect(garbage,value) \
    rawUniversalGarbage_disconnect(garbage,UniversalGarbage_cast(value));\



#define UniversalGarbage_reallocate(garbage,value) \
    rawUniversalGarbage_reallocate(garbage,UniversalGarbage_cast(value))

#define UniversalGarbage_resset(garbage,value) \
    rawUniversalGarbage_resset(garbage,UniversalGarbage_cast(value))

#endif

#ifndef UniversalGarbage_types
#define UniversalGarbage_types
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct privateUniversalGarbageElement{
    void **pointer;
    void (*deallocator_callback)(void *element);
    void *pointed_value;
}privateUniversalGarbageElement;

#endif

#ifndef UniversalGarbage_typesB
#define UniversalGarbage_typesB
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef  struct UniversalGarbage{

    struct UniversalGarbage *return_values;
    privateUniversalGarbageElement **elements;
    int  elements_size;
    bool is_the_root;

}UniversalGarbage;

#endif

#ifndef UniversalGarbage_fdeclare
#define UniversalGarbage_fdeclare
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


UniversalGarbage * newUniversalGarbage();

UniversalGarbage * private_new_MainUniversalGarbage();



bool  rawUniversalGarbage_resset(UniversalGarbage *self, void **pointer);

bool  rawUniversalGarbage_remove(UniversalGarbage *self, void **pointer);

bool  rawUniversalGarbage_disconnect(UniversalGarbage *self, void **pointer);

bool rawUniversalGarbage_reallocate(UniversalGarbage *self, void **pointer);

bool  rawUniversalGarbage_add(UniversalGarbage *self,  void (*dealocator_callback)(void *element), void **pointer);

void private_UniversalGarbage_free_all_sub_elements(UniversalGarbage *self);

void UniversalGarbage_free_including_return(UniversalGarbage *self);

void UniversalGarbage_free(UniversalGarbage *self);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void private_UniversalGarbageSimpleElement_free_pointed_value(privateUniversalGarbageElement *self);


void private_UniversalGarbageSimpleElement_free(privateUniversalGarbageElement *self);

privateUniversalGarbageElement * private_newUniversalGarbageSimpleElement(void (*dealocator_callback)(void *element), void **pointer);
#endif

#define CWEB_UNIVERSAL_GARBAGE_DECLARATED
#endif
#endif

#ifndef CWebStudio_macros
#define CWebStudio_macros
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
#define CWEB_HYDRATION_DEFAULT_BODY_SIZE 5000
#define CWEB_HYDRATION_CALBACK_HANDLER_ROUTE "/private_cweb_hydration_main_callback_handler"

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
#define PRIVATE_CWEB_HYDRATION_CALLBACK_KEY "callback"
#define PRIVATE_CWEB_HYDRATION_ARGS_KEY "args"
#define PRIVATE_CWEB_HYDRATION_ID_KEY "id"
#define PRIVATE_CWEB_HYDRATION_HTML_KEY "html"
#define PRIVATE_CWEB_HYDRATION_MENSSAGE_KEY "menssage"


#define PRIVATE_CWEB_HYDRATION_ALERT "private_cweb_alert"
#define PRIVATE_CWEB_HYDRATION_DESTROY_BY_ID "private_cweb_destroy_by_id"
#define PRIVATE_CWEB_HYDRATION_REPLACE_BY_ID "private_cweb_hydration_replace_by_id"

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
#define CWEB_HYDRATION_NOT_BODY_JSON_PROVIDED 1
#define CWEB_HYDRATION_NOT_BODY_JSON_PROVIDED_MSG "json body not provided"

#define CWEB_HYDRATION_NOT_BODY_IS_NOT_OBJECT 2
#define CWEB_HYDRATION_NOT_BODY_IS_NOT_OBJECT_MSG  "json body not not object"


#define CWEB_HYDRATION_NAME_NOT_PROVIDED 3
#define CWEB_HYDRATION_NAME_NOT_PROVIDED_MSG  "body['name'] not provided"

#define CWEB_HYDRATION_NAME_NOT_STRING 4
#define CWEB_HYDRATION_NAME_NOT_STRING_MSG  "body['name'] its not string"


#define CWEB_HYDRATION_ARGS_NOT_PROVIDED 5
#define CWEB_HYDRATION_ARGS_NOT_PROVIDED_MSG  "body['args'] not provided"

#define CWEB_HYDRATION_ARGS_NOT_ARRAY 6
#define CWEB_HYDRATION_ARGS_NOT_ARRAY_MSG  "body['args'] its not array"


#define CWEB_HYDRATION_CONTENT_NOT_PROVIDED 7
#define CWEB_HYDRATION_CONTENT_NOT_PROVIDED_MSG  "body['content'] not provided"

#define CWEB_HYDRATION_CONTENT_NOT_OBJECT 8
#define CWEB_HYDRATION_CONTENT_NOT_OBJECT_MSG  "body['content'] not a object"


#define CWEB_HYDRATION_CONTENT_KEY_NOT_PROVIDED 9
#define CWEB_HYDRATION_CONTENT_KEY_NOT_PROVIDED_MSG  "body['content']['%s'] not provided at content"

#define CWEB_HYDRATION_CONTENT_SEARCH_NOT_ARRAY 10
#define CWEB_HYDRATION_CONTENT_SEARCH_NOT_ARRAY_MSG "body['content']['%s']   is not of array"



#define CWEB_HYDRATION_CONTENT_SEARCH_NOT_EXIST 11
#define CWEB_HYDRATION_CONTENT_SEARCH_NOT_EXIST_MSG "search at index %d  not exist"


#define CWEB_HYDRATION_SEARCH_ITEM_NOT_EXIST 12
#define CWEB_HYDRATION_SEARCH_ITEM_NOT_EXIST_MSG "body['content']['%s'][%d] not exist"


#define CWEB_HYDRATION_SEARCH_ITEM_WRONG_TYPE 13
#define CWEB_HYDRATION_SEARCH_ITEM_WRONG_TYPE_MSG "body['content']['%s'][%d] its not of type %s"


#define CWEB_HYDRATION_INDEX_ARGS_NOT_PROVIDED  14
#define CWEB_HYDRATION_INDEX_ARGS_NOT_PROVIDED_MSG  "body['args'][%d]  not provided"

#define CWEB_HYDRATION_INDEX_ARGS_WRONG_TYPE 15
#define CWEB_HYDRATION_INDEX_ARGS_WRONG_TYPE_MSG  "body['args'][%d] is not of type %s"



#define CWEB_BRIDGE_NOT_FOUND 16
#define CWEB_BRIDGE_NOT_FOUND_MSG  "bridge of name %s not found"

#define CWEB_SEARCH_NOT_EXIST 17
#define CWEB_SEARCH_NOT_EXIST_MSG "search at index %d not exist"

#define CWEB_HYDRATION_STRING "string"
#define CWEB_HYDRATION_BOOL  "bool"
#define CWEB_HYDRATION_NUMBER "number"

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#define CWEB_HYDRATION_JSON_ERROR_CODE_KEY "error_code"
#define CWEB_HYDRATION_JSON_ERROR_MENSSAGE "error_menssage"
#define CWEB_HYDRATON_JSON_DATA "data"

#define CWEB_HYDRATON_JSON_NAME "name"
#define CWEB_HYDRATON_JSON_HTML "html"
#define CWEB_HYDRATON_JSON_MSG "msg"
#define CWEB_HYDRATON_JSON_CODE "code"
#define CWEB_HYDRATON_JSON_KEY "key"
#define CWEB_HYDRATON_JSON_QUERY_SELECTOR "query_selector"

#define CWEB_HYDRATON_JSON_VALUE "value"
#define CWEB_HYDRATION_JSON_URL "url"

#define CWEB_HYDRATON_JSON_ARGS "args"
#define CWEB_HYDRATON_JSON_CONTENT "content"

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
#define INVALID_HTTP -1
#define MAX_HEADER_SIZE_CODE -2
#define MAX_HEADER_LEN 20000
#define MAX_LINE_LEN MAX_HEADER_LEN /2
#define READ_ERROR -3
#define MAX_CONTENT_SIZE -4
#define UNDEFINED_CONTENT -5
#define INVALID_JSON -6
#define CWEB_UTF_DECREMENTER  64
#define CWEB_C_NON_ASSCI_SIGIN -61

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#define CWEB_AUTO_SET_CONTENT NULL
#define CWEB_OK  200
#define CWEB_NOT_FOUND 404
#define CWEB_BAD_REQUEST 400
#define CWEB_FORBIDDEN 403
#define CWEB_INTERNAL_SERVER_ERROR 500

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
#ifdef CWEB_DEBUG
#define cweb_print(...) printf(__VA_ARGS__);
#else
#define cweb_print(...);
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#endif

#ifndef CWebStudio_types
#define CWebStudio_types
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebKeyVal{
    char *key;
     char *value;

}CwebKeyVal;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct {
    char  *file;
    char *included;

}privateCwebRecursionElement;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebStringArray {
  int size;         

  char **strings;       

}CwebStringArray; // End the structure with a semicolon


#endif

#ifndef CWebStudio_typesB
#define CWebStudio_typesB
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebDict {
  int size;
  CwebKeyVal **keys_vals;

}CwebDict;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct  CWebHyDrationBridge {
    char *name;
    void  *hydration;
    void  (*callback)(struct CWebHyDrationBridge *bridge);

    CwebStringArray *requirements_code;

    void *extra_args;

}CWebHyDrationBridge;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct{

    privateCwebRecursionElement **elements;
    int size;

}privateCwebRecursionList;

#endif

#ifndef CWebStudio_typesC
#define CWebStudio_typesC
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct privateCWebHyDrationBridgeArray {
    CWebHyDrationBridge **elments;
    int size;

}privateCWebHyDrationBridgeArray;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef  struct{
    char *name;
    CWebHyDrationBridge *bridge;
} CWebHyDrationSearchRequirements;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct{
    CWebHyDrationBridge *bridge;
    cJSON *search;
    const char *name;
} CWebHyDrationSearchResult;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebHttpRequest{

    char *url;
    int socket;
    char *route;
    char *method;
    char *client_ip;
    int content_error;
    CwebDict *params;
    CwebDict *headers;
    int content_length;
    unsigned char *content;
    cJSON *json;
    void *hydratation;
    void *extra_args;
    UniversalGarbage *garbage;

}CwebHttpRequest;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebHttpResponse{
    int status_code;
    struct CwebDict *headers;
    int content_length;
    bool exist_content;
    unsigned char *content;

}CwebHttpResponse;


#endif

#ifndef CWebStudio_typesD
#define CWebStudio_typesD
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CWebHyDration {
    CwebHttpRequest *request;
   const  char *error_bridge_name;
    char *error_msg;
    cJSON *response;
    cJSON *args;
    cJSON *content;

    int error_code;
   // CwebStringArray *stack_elements;
    CTextStack *script_text;
    long max_content_size;
    privateCWebHyDrationBridgeArray *all_bridges;

}CWebHyDration;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

 typedef struct CwebServer{
    int port;
    int function_timeout;
    double client_timeout;
    int max_queue;

    #if defined(__linux__)
        bool single_process;
    #endif

    long max_requests;
    bool allow_cors;
    bool use_static;
    const char *static_folder;
    bool use_cache;

    //methods
    CwebHttpResponse *(*request_handler)(CwebHttpRequest *request);

}CwebServer;


#endif

#ifndef CWebStudio_typesG
#define CWebStudio_typesG
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebKeyValModule{
    void (*represent)(CwebKeyVal *key_val);
    void (*free)(CwebKeyVal *key_val);
}CwebKeyValModule;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct CWebHydrationResponseNamespace {
    void (*replace_element_by_query_selector)(
        CWebHyDrationBridge *self,
        const char *query_selector,
        const char *code,
        ...
    );
    void (*remove_session_storage_data)(CWebHyDrationBridge *self,const char*key);

    void (*append_by_query_selector)(
        CWebHyDrationBridge *self,
        const char *query_selector,
        const char *code,
        ...
    );


    void (*destroy_by_query_selector)(
        CWebHyDrationBridge *self,
        const char * query_selecor
    );



    void (*hide_element_by_query_selector)(
    CWebHyDrationBridge *self,
    const char *query_selecor);

    void (*unhide_element_by_query_selector)(
        CWebHyDrationBridge *self,
        const char *query_selector
    );
    void (*hide_element_by_id)(CWebHyDrationBridge *self,const char *id);
    void (*unhide_element_by_id)(CWebHyDrationBridge *self,const char *id);
    void (*append_by_id)(CWebHyDrationBridge *self,const char *id, const char *code,...);

    void (*set_session_storage_data)(CWebHyDrationBridge *self,const char*key, const char *value,...);
    void (*alert)(CWebHyDrationBridge *self,const char *menssage,...);
    void (*execute_script)(CWebHyDrationBridge *self,const char *code,...);
    void (*replace_element_by_id)(CWebHyDrationBridge *self,const char *id, const char *code,...);
    void (*destroy_by_id)(CWebHyDrationBridge *self,const char * id);
    void (*redirect)(CWebHyDrationBridge *self, const char *url);
    void (*add_cookie_with_time)(CWebHyDrationBridge *self, const char *key, long time, const char *value, ...);
    void (*add_cookie)(CWebHyDrationBridge *self, const char *key, const char *value, ...);
    void (*delet_cookie)(CWebHyDrationBridge *self, const char *key);
    void (*console_log)(CWebHyDrationBridge *self,const char *menssage,...);
    void (*console_warn)(CWebHyDrationBridge *self,const char *menssage,...);
    void (*console_error)(CWebHyDrationBridge *self,const char *menssage,...);
    void (*console_clear)(CWebHyDrationBridge *self);
    void (*add_class_by_query_selector)(CWebHyDrationBridge *self, const char *element, const char *class_name, ...);
    void (*remove_class_by_query_selector)(CWebHyDrationBridge *self, const char *element, const char *class_name, ...);
    void (*remove_class_by_id)(CWebHyDrationBridge *self, const char *id, const char *class_name, ...);
    void (*add_class_by_id)(CWebHyDrationBridge *self, const char *id, const char *class_name, ...);



}CWebHydrationActionsNamespace;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CWebHydrationArgsNamespace {

    bool   (*is_arg_null)(CWebHyDrationBridge *self,int index);
    int   (*get_args_size)(CWebHyDrationBridge *self);
    bool   (*is_arg_number)(CWebHyDrationBridge *self,int index);
    bool   (*is_arg_bool)(CWebHyDrationBridge *self,int index);
    bool   (*is_arg_string)(CWebHyDrationBridge *self,int index);
    double  (*get_double_arg)(CWebHyDrationBridge *self,int index);
    long  (*get_long_arg)(CWebHyDrationBridge *self,int index);
    bool  (*get_bool_arg)(CWebHyDrationBridge *self,int index);
    char* (*get_str_arg)(CWebHyDrationBridge *self,int index);
    cJSON * (*get_cJSON_arg)(CWebHyDrationBridge *self,int index);

}CWebHydrationArgsNamespace;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CWebHydrationBridgeNamespace{

    CWebHyDrationBridge * (*create_bridge)(CWebHyDration *self,const char *name,void (*callback)(CWebHyDrationBridge *));
    char *(*call_trigger)(
        CWebHyDrationBridge *self,
        const char *trigger,
        const char *func_args,
        ...
    );

    char *(*call)(CWebHyDrationBridge *self,const char *func_args,...);
    char *(*onclick)(CWebHyDrationBridge *self,const char *func_args,...);
    char *(*onfoccusout)(CWebHyDrationBridge *self,const char *func_args,...);

    CTextStack * (*create_stack)(CWebHyDrationBridge *self);
    CTextStack * (*create_empty_stack)(CWebHyDrationBridge *self);

    bool (*has_errors)(CWebHyDrationBridge *self);
    CWebHyDrationBridge * (*get_child_bridge)(CWebHyDration *self,const char *name);
    CWebHyDrationBridge * (*get_brother_bridge)(CWebHyDrationBridge *self,const char *name);

}CWebHydrationBridgeNamespace;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct CWebHydrationSearchRequirementsNamespace {




    CWebHyDrationSearchRequirements * (*newSearchRequirements)(CWebHyDrationBridge *self, const char *name,...);

    void (*add_function)(CWebHyDrationSearchRequirements *self,const char *function,...);
    void (*add_elements_by_query_selector)(
        CWebHyDrationSearchRequirements *self,
        const char *query_selector,
        ...
    );
    void (*add_elements_by_query_selector_not_auto_converting)(
        CWebHyDrationSearchRequirements *self,
        const char *query_selector,
        ...
    );
    void (*add_elements_by_attribute)(
        CWebHyDrationSearchRequirements *self,
       const char *attribute,
       const char*attribute_value,
       ...
    );
    void (*add_elements_by_attribute_not_auto_converting)(
        CWebHyDrationSearchRequirements *self,
        const char *attribute,
        const char*attribute_value,
        ...
    );

    void (*add_elements_by_class_name)(
        CWebHyDrationSearchRequirements *self,
        const char*class_value,
        ...
    );

    void (*add_elements_by_class_name_not_auto_converting)(
        CWebHyDrationSearchRequirements *self,
        const char*class_value,...
    );

    void (*add_elements_by_id)(
        CWebHyDrationSearchRequirements *self,
        const char*id_values,
        ...
    );

    void (*add_elements_by_id_not_auto_converting)(
        CWebHyDrationSearchRequirements *self,
        const char*id_values,
        ...
    );

    void (*add_session_storage_item_not_converting)(
        CWebHyDrationSearchRequirements *self,
        const char *name,
        ...
    );

    void (*add_elements_by_id_setting_search_as_same_name)(
        CWebHyDrationBridge *self, const char *id
    );


    void (*add_elements_by_id_setting_search_as_same_name_not_auto_converting)(
        CWebHyDrationBridge *self, const char *id
    );


    void (*add_elements_by_class_name_setting_search_as_same_name)(
        CWebHyDrationBridge *self, const char *class_name
    );

    void (*add_elements_by_class_name_setting_search_as_same_name_not_auto_converting)(
        CWebHyDrationBridge *self, const char *class_name
    );

    void (*add_session_storage_item)(
        CWebHyDrationSearchRequirements *self,
        const char *name,
        ...
    );

    void (*add_value_cookie_by_key)(CWebHyDrationSearchRequirements *self, const char *key);
    void (*add_confirm)(CWebHyDrationSearchRequirements *self, const char*message, ...);
    void (*add_prompt)(CWebHyDrationSearchRequirements *self, const char *message, ...);

}CWebHydrationSearchRequirementsNamespace;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct CWebHydrationSearchResultNamespace {

    int  (*get_total_avaialible_searchs)(CWebHyDrationBridge *self);
    CWebHyDrationSearchResult * (*get_search_by_index)(CWebHyDrationBridge *self,int index);
    CWebHyDrationSearchResult * (*get_search_by_name)(CWebHyDrationBridge *self,const char *name,...);
    bool (*search_exist)(CWebHyDrationBridge *self,const char *name,...);
    double (*get_double_from_first_element_of_search)(CWebHyDrationBridge *self,const char *name,...);
    long (*get_long_from_first_element_of_search)(CWebHyDrationBridge *self,const char *name,...);
    bool (*get_bool_from_first_element_of_search)(CWebHyDrationBridge *self,const char *name,...);
    char* (*get_string_from_first_element_of_search)(CWebHyDrationBridge *self,const char *name,...);
    cJSON* (*get_cJSON_from_first_element_of_search)(CWebHyDrationBridge *self,const char *name,...);
    int  (*get_total_itens)(CWebHyDrationSearchResult *self);
    bool  (*search_item_exist)(CWebHyDrationSearchResult *self,int index);
    bool  (*is_search_item_number)(CWebHyDrationSearchResult *self,int index);
    bool  (*is_search_item_bool)(CWebHyDrationSearchResult *self,int index);
    bool  (*is_search_item_string)(CWebHyDrationSearchResult *self,int index);
    double (*get_double)(CWebHyDrationSearchResult *self,int  index);
    long (*get_long)(CWebHyDrationSearchResult *self,int  index);
    bool (*get_bool)(CWebHyDrationSearchResult *self,int  index);
    char*  (*get_string)(CWebHyDrationSearchResult *self,int  index);
    cJSON *  (*get_cJSON)(CWebHyDrationSearchResult *self,int  index);

}CWebHydrationSearchResultNamespace;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebHttpRequestModule{
    CwebHttpRequest *(*newCwebHttpRequest)(int socket);
    unsigned char*(*read_content)(struct CwebHttpRequest *self,long max_content_size);
    cJSON * (*read_cJSON)(CwebHttpRequest *self, long max_content_size);

    void (*set_url)(struct CwebHttpRequest *self,const char *url);
    void (*set_route)(struct CwebHttpRequest *self,const char *route);
    void (*set_method)(struct CwebHttpRequest *self,const char *method);

    void (*add_header)(struct CwebHttpRequest *self,const char *key,const char *value);
    void (*add_param)(struct CwebHttpRequest *self,const char *key,const char *value);
    void (*set_content_string)(struct CwebHttpRequest *self,const char *content);


    char *(*get_header)(struct CwebHttpRequest *self,const char *key);
    char *(*get_header_by_normalized_key)(
            struct CwebHttpRequest *self,
            const char *key,
            const char *chars_to_remove
    );

    char *(*get_param)(struct CwebHttpRequest *self,const char *key);
    char *(*get_param_by_sanitized_key)(struct CwebHttpRequest *self,const char *key,
                                        const char *chars_to_remove);


    int (*parse_http_request)(struct CwebHttpRequest *self);

    CTextStack *(*create_empty_stack)(CwebHttpRequest *self);
    CTextStack *(*create_stack)(CwebHttpRequest *self);


    void (*free)(struct CwebHttpRequest *request);
    void (*represent)(struct CwebHttpRequest *request);
}CwebHttpRequestModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebHttpResponseModule{

    CwebHttpResponse  * (*newHttpResponse)();

    CwebHttpResponse * (*send_any)(
            const char *content_type,
            size_t content_length,
            unsigned char *content,
            int status_code
    );
    CwebHttpResponse * (*send_json_string)(
            const char *content,
            int status_code
    );
    CwebHttpResponse * (*send_json_string_cleaning_memory)(
            char *content,
            int status_code
    );
    CwebHttpResponse * (*send_cJSON)(
            cJSON *content,
            int status_code
    );


    CwebHttpResponse * (*send_cJSON_cleaning_memory)(
            cJSON *content,
            int status_code
    );


    CwebHttpResponse * (*send_text)(
            const char *content,
            int status_code
    );

    CwebHttpResponse * (*send_text_cleaning_memory)(
            char *content,
            int status_code
    );

    CwebHttpResponse* (*send_rendered_CTextStack)(struct CTextStack *stack,int status_code);

    CwebHttpResponse* (*send_var_html)(const char *content,int status_code);

    CwebHttpResponse* (*send_var_html_cleaning_memory)(
            char *content,
            int status_code
    );

    CwebHttpResponse * (*send_file)(
            const char *file_path,
            const char *content_type,
            int status_code
    );



    void (*set_content)(CwebHttpResponse *response, unsigned char *content, int content_length);
    void (*add_header)(CwebHttpResponse *response,const char *key,const  char *value);
    char *(*generate_response)(CwebHttpResponse *response);
    void (*free)(CwebHttpResponse *response);

}CwebHttpResponseModule;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct CwebServerModule{
    CwebServer (*newServer)(int port , CwebHttpResponse *(*request_handler)(CwebHttpRequest *request));
    int (*start)(struct  CwebServer *self);
}CwebServerModule;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebStringArrayModule{
    CwebStringArray *(*newStringArray)();
    void (*set)( CwebStringArray *self,int index,const char *value);
    void (*add)( CwebStringArray *self,const char *string);
    void (*merge)(CwebStringArray *self, CwebStringArray *other);
    void (*represent)(CwebStringArray *self);
    int (*find)(CwebStringArray *self,const char *string);

    void (*free)(CwebStringArray *self);
}CwebStringArrayModule;


#endif

#ifndef CWebStudio_typesH
#define CWebStudio_typesH
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CwebDictModule{


    CwebDict *(*newDict)();
    void  (*set)(CwebDict *dict,const char *key,const char *value);
    char* (*get)(CwebDict *dict,const char *key);
    char* (*get_by_normalized_key)(CwebDict *dict,const char *key,const char *chars_to_remove);
    void  (*free)(CwebDict *dict);
    void  (*represent)(CwebDict *dict);

    CwebKeyValModule keyval;

}CwebDictModule;


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CWebHydrationNamespace{
    CWebHyDration *(*newCWebHyDration)(CwebHttpRequest *request);
    bool (*is_the_trigger)(CWebHyDration *self);
    char *(*create_script)(CWebHyDration *self);
    CwebHttpResponse *(*generate_response)(CWebHyDration *self);
    CTextStack  * (*create_stack)(CWebHyDration *self);
    CTextStack  * (*create_empty_stack)(CWebHyDration *self);
    CWebHydrationBridgeNamespace bridge;
    CWebHydrationActionsNamespace actions;
    CWebHydrationSearchRequirementsNamespace search_requirements;
    CWebHydrationSearchResultNamespace search_result;
    CWebHydrationArgsNamespace args;
}CWebHydrationNamespace;


#endif

#ifndef CWebStudio_typesO
#define CWebStudio_typesO
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct CwebNamespace{
    CwebDictModule dict;
    CwebHttpRequestModule request;
    CwebHttpResponseModule response;
    CwebServerModule server;
    CwebStringArrayModule  string_array;
    CWebHydrationNamespace hydration;
}CwebNamespace;


#endif

#ifndef CWebStudio_fdeclare
#define CWebStudio_fdeclare
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


void  private_cweb_generate_cors_response(struct CwebHttpResponse *response);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
CwebDict *newCwebDict();
void CwebDict_set(CwebDict *self, const  char *key, const char *value);
char *CwebDict_get(CwebDict *self, const char *key);

char *CwebDict_get_by_normalized_key(
  CwebDict *self,
  const char *key,
  const char *chars_to_remove
);

void CwebDict_represent(CwebDict *dict);
void CwebDict_free(CwebDict *self);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


unsigned char *cweb_load_any_content(const char * path,int *size,bool *is_binary);

char *cweb_load_string_file_content(const char * path);

unsigned char *cweb_load_binary_content(const char * path,int *size);


const char *cweb_generate_content_type(const char *file_name);

char *private_cweb_convert_url_encoded_text(const char *text);



char * private_CWeb_format_vaarg(const char *expresion, va_list args);

char * private_CWeb_format(const char *expresion, ...);
//bool private_cweb_is_string_from_point(const char *content, long content_size, const char *test_string, long test_string_size, long point);
char *private_cweb_convert_to_hexa(const char *data);


CTextStack  *private_cweb_create_assci_code(const char *msg);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


void privateCWebHyDrationBridge_add_response(CWebHyDrationBridge *self,const char *name,cJSON *data);

void CWebHyDrationBridge_set_session_storage_data(CWebHyDrationBridge *self,const char*key, const char *value,...);

void CWebHyDrationBridge_remove_session_storage_data(CWebHyDrationBridge *self,const char*key);

void CWebHyDrationBridge_alert(CWebHyDrationBridge *self,const char *menssage,...);

void CWebHyDrationBridge_execute_script(CWebHyDrationBridge *self,const char *code,...);

void CWebHyDrationBridge_replace_element_by_query_selector(
    CWebHyDrationBridge *self,
    const char *query_selector,
    const char *code,
    ...
);


void CWebHyDrationBridge_append_by_query_selector(
    CWebHyDrationBridge *self,
    const char *query_selector,
    const char *code,
    ...
);




void CWebHyDrationBridge_destroy_by_query_selector(
    CWebHyDrationBridge *self,
    const char * query_selecor
);



void CWebHyDrationBridge_hide_element_by_query_selector(
CWebHyDrationBridge *self,
const char *query_selecor);


void CWebHyDrationBridge_unhide_element_by_query_selector(
    CWebHyDrationBridge *self,
    const char *query_selector
);



void CWebHyDrationBridge_replace_element_by_id(CWebHyDrationBridge *self,const char *id, const char *code,...);


void CWebHyDrationBridge_append_by_id(CWebHyDrationBridge *self,const char *id, const char *code,...);


void CWebHyDrationBridge_hide_element_by_id(CWebHyDrationBridge *self,const char *id);


void CWebHyDrationBridge_unhide_element_by_id(CWebHyDrationBridge *self,const char *id);


void CWebHyDrationBridge_destroy_by_id(CWebHyDrationBridge *self,const char * id);


void CWebHydration_redirect(CWebHyDrationBridge *self, const char *url);

void CWebHydrationBridge_creatCookie(CWebHyDrationBridge *self, const char *key, const char *value, ...);

void CWebHydrationBridge_creatCookie_with_time(CWebHyDrationBridge *self, const char *key, long time, const char *value, ...);

void CWebHyDrationBridge_deletCookie(CWebHyDrationBridge *self, const char *key);

void CWebHyDration_console_log(CWebHyDrationBridge *self, const char *menssage, ...);
void CWebHyDration_console_warn(CWebHyDrationBridge *self, const char *menssage, ...);
void CWebHyDration_console_error(CWebHyDrationBridge *self, const char *menssage, ...);
void CWebHyDration_console_clear(CWebHyDrationBridge *self);

void CWebHyDrationBridge_remove_class_by_id(CWebHyDrationBridge *self, const char *id, const char *class_name, ...);
void CWebHyDrationBridge_add_class_by_id(CWebHyDrationBridge *self, const char *id, const char *class_name, ...);
void CWebHyDrationBridge_remove_class_by_query_selector(CWebHyDrationBridge *self, const char *element, const char *class_name, ...);
void CWebHyDrationBridge_add_class_by_query_selector(CWebHyDrationBridge *self, const char *element, const char *class_name, ...);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int   CWebHyDrationBridge_get_args_size(CWebHyDrationBridge *self);

bool private_cweb_hydration_type_verifier(CWebHyDrationBridge *self,int index,cJSON_bool (*callback_verifier)( cJSON * item));

bool   CWebHyDrationBridge_is_arg_number(CWebHyDrationBridge *self,int index);

bool   CWebHyDrationBridge_is_arg_bool(CWebHyDrationBridge *self,int index);

bool   CWebHyDrationBridge_is_arg_null(CWebHyDrationBridge *self,int index);

bool   CWebHyDrationBridge_is_arg_string(CWebHyDrationBridge *self,int index);

cJSON *privateCWebHyDration_get_arg_index(CWebHyDrationBridge *self,int index,cJSON_bool (*callback_verifier)( cJSON * item),const char *expected_type);

double  CWebHyDrationBridge_get_double_arg(CWebHyDrationBridge *self,int index);

long  CWebHyDrationBridge_get_long_arg(CWebHyDrationBridge *self,int index);

bool  CWebHyDrationBridge_get_bool_arg(CWebHyDrationBridge *self,int index);

char* CWebHyDrationBridge_get_str_arg(CWebHyDrationBridge *self,int index);

cJSON * CWebHyDrationBridge_get_cJSON_arg(CWebHyDrationBridge *self,int index);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CWebHyDrationBridge *private_newCWebHyDrationBridge(
    const char *name,
    void (*callback)(CWebHyDrationBridge *),

    CWebHyDration *hydration
);



CWebHyDrationBridge * CWebHyDrationBridge_get_brother_bridge(CWebHyDrationBridge *self,const char *name);

bool CWebHyDrationBridge_has_errors(CWebHyDrationBridge *self);

CTextStack * CWebHyDrationBridge_create_stack(CWebHyDrationBridge *self);

CTextStack * CWebHyDrationBridge_create_empty_stack(CWebHyDrationBridge *self);

CWebHyDrationSearchRequirements * CWebHyDrationBridge_newSearchRequirements(CWebHyDrationBridge *self, const char *name,...);


char *CWebHyDrationBridge_call(CWebHyDrationBridge *self,const char *func_args,...);



CTextStack* private_CWebHyDrationBridge_create_script(CWebHyDrationBridge *self);


void private_CWebHyDrationBridge_free(CWebHyDrationBridge *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



char *privateCWebHyDrationBridge_call_by_vaargss(CWebHyDrationBridge *self,const char *func_args,va_list  args);


char *CWebHyDrationBridge_call(CWebHyDrationBridge *self,const char *func_args,...);

char *privateCWebHyDrationBridge_call_trigger_by_vaarg(
    CWebHyDrationBridge *self,
    const char *trigger,
    const char *func_args,
    va_list  args
);


char *CWebHyDrationBridge_call_trigger(
    CWebHyDrationBridge *self,
    const char *trigger,
    const char *func_args,
    ...
);


char *CWebHyDrationBridge_onclick(CWebHyDrationBridge *self,const char *func_args,...);

char *CWebHyDrationBridge_onfoccusout(CWebHyDrationBridge *self,const char *func_args,...);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void CWebHyDrationBridge_add_elements_by_id_setting_search_as_same_name(
    CWebHyDrationBridge *self, const char *id
);


void CWebHyDrationBridge_add_elements_by_id_setting_search_as_same_name_not_auto_converting(
    CWebHyDrationBridge *self, const char *id
);


void CWebHyDrationBridge_add_elements_by_class_name_setting_search_as_same_name(
    CWebHyDrationBridge *self, const char *class_name
);

void CWebHyDrationBridge_add_elements_by_class_name_setting_search_as_same_name_not_auto_converting(
    CWebHyDrationBridge *self, const char *class_name
);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int  CWebHyDrationBridge_get_total_avaialible_searchs(CWebHyDrationBridge *self);

CWebHyDrationSearchResult * CWebHyDrationBridge_get_search_by_index(CWebHyDrationBridge *self,int index);

CWebHyDrationSearchResult * CWebHyDrationBridge_get_search_by_name(CWebHyDrationBridge *self,const char *name,...);

bool CWebHyDrationBridge_search_exist(CWebHyDrationBridge *self,const char *name,...);

double CWebHyDrationBridge_get_double_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...);

long CWebHyDrationBridge_get_long_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...);

bool CWebHyDrationBridge_get_bool_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...);

char* CWebHyDrationBridge_get_string_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...);

cJSON* CWebHyDrationBridge_get_cJSON_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

privateCWebHyDrationBridgeArray * private_new_privateCWebHyDrationBridgeArray();

void privateCWebHyDrationBridgeArray_append(privateCWebHyDrationBridgeArray *self,CWebHyDrationBridge *element);

void privateCWebHyDrationBridgeArray_free(privateCWebHyDrationBridgeArray *self);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CWebHyDration * newCWebHyDration(CwebHttpRequest *request);

CWebHyDrationBridge * CWebHyDration_create_bridge(CWebHyDration *self,const char *name,void (*callback)(CWebHyDrationBridge *));

CTextStack  * CWebHyDration_create_stack(CWebHyDration *self);

CTextStack  * CWebHyDration_create_empty_stack(CWebHyDration *self);

CWebHyDrationBridge * CWebHyDration_get_child_bridge(CWebHyDration *self,const char *name);

void privateCWebHydration_raise_error(CWebHyDration *self,CWebHyDrationBridge *bridge, int error_code, const char *format,...);

CwebHttpResponse *private_CWebHydration_formmat_error_response(CWebHyDration *self);

bool CWebHyDration_is_the_trigger(CWebHyDration *self);

CwebHttpResponse *CWebHydration_generate_response(CWebHyDration *self);

char *CWebHyDration_create_script(CWebHyDration *self);

void private_CWebHyDration_free(CWebHyDration *self);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




CWebHyDrationSearchRequirements * private_newCWebHyDrationSearchRequirements_getting_name_ownership(
    CWebHyDrationBridge *bridge, char *name
);


void private_CWebHyDrationSearchRequirements_free(CWebHyDrationSearchRequirements *self);


void CWebHyDrationSearchRequirements_add_function(CWebHyDrationSearchRequirements *self,const char *function,...);


void private_CWebHyDrationSearchRequirements_add_elements_by_query_selector(
    CWebHyDrationSearchRequirements *self,
    const char *query_selector,bool auto_convert
);


void CWebHyDrationSearchRequirements_add_elements_by_query_selector(
    CWebHyDrationSearchRequirements *self,
    const char *query_selector,
    ...
);




void CWebHyDrationSearchRequirements_add_elements_by_query_selector_not_auto_converting(
    CWebHyDrationSearchRequirements *self,const char *query_selector,...);


void CWebHyDrationSearchRequirements_add_elements_by_attribute(
    CWebHyDrationSearchRequirements *self,
   const char *attribute,
   const char*attribute_value,
   ...
);

void CWebHyDrationSearchRequirements_add_elements_by_attribute_not_auto_converting(
    CWebHyDrationSearchRequirements *self,
    const char *attribute,
    const char*attribute_value,
    ...
);

void CWebHyDrationSearchRequirements_add_cookie_item(CWebHyDrationSearchRequirements *self, const char *name);
void CWebHyDrationSearchRequirements_add_confirm(CWebHyDrationSearchRequirements *self, const char*message, ...);


void CWebHyDrationSearchRequirements_add_elements_by_class_name(
    CWebHyDrationSearchRequirements *self,
    const char*class_value,
    ...
);

void CWebHyDrationSearchRequirements_add_elements_by_class_name_not_auto_converting(
    CWebHyDrationSearchRequirements *self,
    const char*class_value,...
);

void CWebHyDrationSearchRequirements_add_elements_by_id(
    CWebHyDrationSearchRequirements *self,
    const char*id_values,
    ...
);

void CWebHyDrationSearchRequirements_add_elements_by_id_not_auto_converting(
    CWebHyDrationSearchRequirements *self,
    const char*id_values,
    ...
);


void CWebHyDrationSearchRequirements_add_session_storage_item_not_converting(
    CWebHyDrationSearchRequirements *self,
    const char *name,
    ...
);


void CWebHyDrationSearchRequirements_add_session_storage_item(
    CWebHyDrationSearchRequirements *self,
    const char *name,
    ...
);

void CWebHyDrationSearchRequirements_add_prompt(CWebHyDrationSearchRequirements *self, const char *message, ...);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CWebHyDrationSearchResult * private_newCWebHyDrationSearchResult(CWebHyDrationBridge *bridge,cJSON *search);

void privateCWebHyDrationSearchResult_free(CWebHyDrationSearchResult *self);

bool  privateCWebHyDrationSearchResult_has_erorrs(CWebHyDrationSearchResult *self);


int  CWebHyDrationSearchResult_get_total_itens(CWebHyDrationSearchResult *self);


bool  CWebHyDrationSearchResult_search_item_exist(CWebHyDrationSearchResult *self,int index);


bool  CWebHyDrationSearchResult_is_search_item_number(CWebHyDrationSearchResult *self,int index);

bool  CWebHyDrationSearchResult_is_search_item_bool(CWebHyDrationSearchResult *self,int index);


bool  CWebHyDrationSearchResult_is_search_item_string(CWebHyDrationSearchResult *self,int index);
cJSON * private_CWebHyDrationSearchResult_get_cJSON_item_verifying_type(
    CWebHyDrationSearchResult *self,
    int index,
    cJSON_bool (*callback_verifier)( cJSON *  item),
    const char *expected_type
);



double CWebHyDrationSearchResult_get_double(CWebHyDrationSearchResult *self,int  index);


long CWebHyDrationSearchResult_get_long(CWebHyDrationSearchResult *self,int  index);


bool CWebHyDrationSearchResult_get_bool(CWebHyDrationSearchResult *self,int  index);



char*  CWebHyDrationSearchResult_get_string(CWebHyDrationSearchResult *self,int  index);


cJSON *  CWebHyDrationSearchResult_get_cJSON(CWebHyDrationSearchResult *self,int  index);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
CwebKeyVal* newCwebKeyVal(const char *key, const  char *value);
void CwebKeyVal_represent( CwebKeyVal *self);
void CwebKeyVal_free( CwebKeyVal *self);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebDictModule newCwebDictModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebKeyValModule newCwebKeyValModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CWebHydrationActionsNamespace newCWebHydrationActionsNamespace();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CWebHydrationArgsNamespace newCWebHydrationArgsNamespace();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CWebHydrationBridgeNamespace newCWebHydrationBridgetNamespace();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CWebHydrationNamespace newCWebHydrationNamespace();
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CWebHydrationSearchRequirementsNamespace newCWebHydrationSearchRequirementsNamespace();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CWebHydrationSearchResultNamespace newCWebHydrationSearchResultNamespace();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebNamespace newCwebNamespace();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebHttpRequestModule newCwebRequestModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CwebHttpResponseModule newCwebHttpResponseModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebServerModule newCwebServerModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CwebStringArrayModule newCwebStringArrayModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



 CwebHttpRequest *newCwebHttpRequest(int socket);


unsigned char * CwebHttpRequest_read_content( CwebHttpRequest *self, long max_content_size);


cJSON * CWebHttpRequest_read_cJSON(CwebHttpRequest *self, long max_content_size);


CTextStack *CwebHttpRequest_create_empty_stack(CwebHttpRequest *self);

CTextStack *CwebHttpRequest_create_stack(CwebHttpRequest *self);


char * CwebHttpRequest_get_header( CwebHttpRequest *self, const char *key);

char * CwebHttpRequest_get_param_by_sanitized_key( CwebHttpRequest *self, const char *key, const char *chars_to_remove);


char * CwebHttpRequest_get_param( CwebHttpRequest *self, const char *key);

char * CwebHttpRequest_get_header_by_normalized_key( CwebHttpRequest *self, const char *key, const char *chars_to_remove);


void CwebHttpRequest_set_route( CwebHttpRequest *self, const char *route);


void CwebHttpRequest_add_header( CwebHttpRequest *self, const char *key, const char *value);

void CwebHttpRequest_add_param( CwebHttpRequest *self, const char *key, const char *value);


void CwebHttpRequest_set_method( CwebHttpRequest *self, const char *method);

void CwebHttpRequest_set_content_string( CwebHttpRequest *self, const char *content);

void CwebHttpRequest_represent( CwebHttpRequest *self);


void CwebHttpRequest_free( CwebHttpRequest *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




void private_CwebHttpRequest_interpret_query_params(struct CwebHttpRequest *self, const char *query_params);


void CwebHttpRequest_set_url(struct CwebHttpRequest *self, const char *url);

int private_CwebHttpRequest_interpret_first_line(struct CwebHttpRequest *self, char *first_line);


int private_CwebHttpRequest_interpret_headders(struct CwebHttpRequest *self, struct CwebStringArray *line_headers);




int  CwebHttpRequest_parse_http_request(struct CwebHttpRequest *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



struct CwebHttpResponse *newCwebHttpResponse();

char *CwebHttpResponse_generate_response(struct CwebHttpResponse*self);


void CwebHttpResponse_free(struct CwebHttpResponse *self);

void CwebHttpResponse_set_content(CwebHttpResponse *self, unsigned char *content, int content_length);
void CwebHttpResponse_add_header(CwebHttpResponse *self, const char *key, const  char *value);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CwebHttpResponse* cweb_send_any(const char *content_type,size_t content_length,unsigned char *content,int status_code);

CwebHttpResponse * cweb_send_json_string(const char *content,int status_code);


CwebHttpResponse * cweb_send_json_string_cleaning_memory(char *content,int status_code);


CwebHttpResponse * cweb_send_cJSON(cJSON *content,int status_code);

CwebHttpResponse * cweb_send_cJSON_cleaning_memory(cJSON *content, int status_code);

CwebHttpResponse* cweb_send_any_cleaning_memory(const char *content_type,size_t content_length,unsigned char *content,int status_code);


CwebHttpResponse* cweb_send_rendered_CTextStack(struct CTextStack *stack,int status_code);



CwebHttpResponse* cweb_send_text(const char *content,int status_code);

CwebHttpResponse* cweb_send_text_cleaning_memory(char *content,int status_code);



CwebHttpResponse* cweb_send_var_html(const char *content,int status_code);



CwebHttpResponse* cweb_send_var_html_cleaning_memory(char *content,int status_code);


CwebHttpResponse* cweb_send_file(const char *file_path,const char *content_type,int status_code);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


struct CwebServer  newCwebSever(int port , CwebHttpResponse *(*request_handler)(CwebHttpRequest *request));

int CwebServer_start(CwebServer *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#if defined(__linux__)


void private_cweb_execute_request_in_safty_mode(CwebServer  *self,int new_socket, const char *client_ip);

int  private_CWebServer_run_server_in_multiprocess(CwebServer *self);
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





void private_CWebServer_execute_request(CwebServer *self,int socket,const char *client_ip);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int private_CWebServer_run_server_in_single_process(CwebServer *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


void private_cweb_send_error_mensage( CwebHttpResponse *response, int socket);

void cweb_kill_single_process_server( );

void cweb_set_static_folder(const char *folder);

const char * cweb_get_static_folder();

long cweb_get_total_requests();
#if defined(__linux__)

void private_cweb_treat_response(bool use_static,int new_socket);
void private_cweb_handle_child_termination(int signal);


#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

void private_cweb_load_file_and_include(
        CTextStack *code,
        CTextStack *src,
        privateCwebRecursionList * recursion_listage
);
void private_cweb_generate_inline_inclusion(CTextStack *code, const char *content, long content_size,
                                            privateCwebRecursionList *recursion_listage, const char *filename);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


privateCwebRecursionElement * newPrivateCwebRecursionElement(const char *file, const char *included);

void PrivateCwebRecursionElement_represent(privateCwebRecursionElement *self);

void PrivateCwebRecursionElement_free(privateCwebRecursionElement *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


privateCwebRecursionList * newprivateCwebRecursionList();


privateCwebRecursionElement * privateCwebRecursionList_add_if_not_colide(privateCwebRecursionList *self,const char *file,const char *included);

void privateCwebRecursionList_represent(privateCwebRecursionList *self);

void privateCwebRecursionList_free(privateCwebRecursionList *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

char * private_cweb_smart_static_ref(CTextStack *src);

char * cweb_smart_static_ref(const char *src);


CTextStack * private_cweb_change_smart_cache(CTextStack *content);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CTextStack * private_cweb_format_filename(CTextStack *src);


CwebHttpResponse * private_cweb_treat_five_icon();

char * private_cweb_aply_macro_modifiers_in_content(const char *content, long content_size);

char * cweb_aply_macro_modifiers_in_content(const char *content);

char * cweb_aply_macro_modifiers_in_file(const char *filename);

CwebHttpResponse * private_cweb_generate_static_response(struct CwebHttpRequest *request,bool use_cache);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebStringArray * newCwebStringArray();

int  CwebStringArray_find(struct CwebStringArray *self, const char *string);
void CwebStringArray_add(struct CwebStringArray *self, const char *string);

void CwebStringArray_add_getting_ownership(struct CwebStringArray *self, char *string);

void CwebStringArray_merge(struct CwebStringArray *self, struct CwebStringArray *other);
void CwebStringArray_represent(struct CwebStringArray *self);
void CwebStringArray_free(struct CwebStringArray *self);
void CwebStringArray_set(struct CwebStringArray *self, int index, const char *value);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


char *cweb_parse_string_to_lower(const char *old_string);

char *cweb_parse_string_to_upper(const char *old_string);

char *cweb_normalize_string(const char *old_string,const char *invalid_chars);

bool cweb_starts_with(const char *string, const char *prefix);

char *cweb_replace_string_once(const char *target, const char *old_element, const char *new_element);

char* cweb_replace_string(const char *target, const char *old_element, const char *new_element);

#endif

#ifndef CWebStudio_globals
#define CWebStudio_globals
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
unsigned char private_cweb_hydration_js_content[] = {108,101,116,32,112,114,105,118,97,116,101,95,99,119,101,98,95,97,99,116,105,111,110,115,95,104,97,110,100,108,101,114,115,32,61,32,123,10,32,32,97,108,101,114,116,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,97,108,101,114,116,40,100,97,116,97,91,34,109,115,103,34,93,41,59,10,32,32,125,44,10,32,32,101,120,101,99,117,116,101,95,115,99,114,105,112,116,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,101,118,97,108,40,100,97,116,97,91,34,99,111,100,101,34,93,41,59,10,32,32,125,44,10,32,32,114,101,100,105,114,101,99,116,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,119,105,110,100,111,119,46,108,111,99,97,116,105,111,110,46,104,114,101,102,32,61,32,100,97,116,97,91,34,117,114,108,34,93,59,10,32,32,125,44,10,32,32,115,101,116,95,115,101,115,115,105,111,110,95,115,116,111,114,97,103,101,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,115,101,115,115,105,111,110,83,116,111,114,97,103,101,46,115,101,116,73,116,101,109,40,100,97,116,97,91,34,107,101,121,34,93,44,32,100,97,116,97,91,34,118,97,108,117,101,34,93,41,59,10,32,32,125,44,10,32,32,114,101,109,111,118,101,95,115,101,115,115,105,111,110,95,115,116,111,114,97,103,101,95,100,97,116,97,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,115,101,115,115,105,111,110,83,116,111,114,97,103,101,46,114,101,109,111,118,101,73,116,101,109,40,100,97,116,97,91,34,107,101,121,34,93,41,59,10,32,32,125,44,10,32,32,97,100,100,95,99,111,111,107,105,101,95,119,105,116,104,95,116,105,109,101,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,120,112,105,114,101,115,32,61,32,34,34,59,10,32,32,32,32,105,102,32,40,100,97,116,97,46,100,97,121,115,41,32,123,10,32,32,32,32,32,32,99,111,110,115,116,32,100,97,116,101,32,61,32,110,101,119,32,68,97,116,101,40,41,59,10,32,32,32,32,32,32,100,97,116,101,46,115,101,116,84,105,109,101,40,100,97,116,101,46,103,101,116,84,105,109,101,40,41,32,43,32,100,97,116,97,46,100,97,121,115,32,42,32,50,52,32,42,32,54,48,32,42,32,54,48,32,42,32,49,48,48,48,41,59,10,32,32,32,32,32,32,101,120,112,105,114,101,115,32,61,32,34,59,32,101,120,112,105,114,101,115,61,34,32,43,32,100,97,116,101,46,116,111,85,84,67,83,116,114,105,110,103,40,41,59,10,32,32,32,32,125,10,32,32,32,32,100,111,99,117,109,101,110,116,46,99,111,111,107,105,101,32,61,10,32,32,32,32,32,32,100,97,116,97,46,110,97,109,101,32,43,32,34,61,34,32,43,32,40,100,97,116,97,46,118,97,108,117,101,32,124,124,32,34,34,41,32,43,32,101,120,112,105,114,101,115,32,43,32,34,59,32,112,97,116,104,61,47,34,59,10,32,32,125,44,10,32,32,97,100,100,95,99,111,111,107,105,101,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,100,111,99,117,109,101,110,116,46,99,111,111,107,105,101,32,61,32,100,97,116,97,46,110,97,109,101,32,43,32,34,61,34,32,43,32,40,100,97,116,97,46,118,97,108,117,101,32,124,124,32,34,34,41,32,43,32,34,59,32,112,97,116,104,61,47,34,59,10,32,32,125,44,10,32,32,100,101,108,101,116,95,99,111,111,107,105,101,58,32,102,117,110,99,116,105,111,110,32,40,110,97,109,101,41,32,123,10,32,32,32,32,100,111,99,117,109,101,110,116,46,99,111,111,107,105,101,32,61,32,110,97,109,101,32,43,32,34,61,59,32,77,97,120,45,65,103,101,61,45,57,57,57,57,57,57,57,57,59,34,59,10,32,32,125,44,10,32,32,114,101,112,108,97,99,101,95,101,108,101,109,101,110,116,95,98,121,95,113,117,101,114,121,95,115,101,108,101,99,116,111,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,113,117,101,114,121,83,101,108,101,99,116,111,114,40,100,97,116,97,46,113,117,101,114,121,95,115,101,108,101,99,116,111,114,41,59,10,32,32,32,32,105,102,32,40,33,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,59,10,32,32,32,32,125,10,32,32,32,32,101,108,101,109,101,110,116,46,105,110,115,101,114,116,65,100,106,97,99,101,110,116,72,84,77,76,40,34,97,102,116,101,114,101,110,100,34,44,32,100,97,116,97,46,104,116,109,108,41,59,10,32,32,32,32,101,108,101,109,101,110,116,46,114,101,109,111,118,101,40,41,59,10,32,32,125,44,10,10,32,32,97,112,112,101,110,100,95,98,121,95,113,117,101,114,121,95,115,101,108,101,99,116,111,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,113,117,101,114,121,83,101,108,101,99,116,111,114,40,100,97,116,97,46,113,117,101,114,121,95,115,101,108,101,99,116,111,114,41,59,10,32,32,32,32,105,102,32,40,33,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,59,10,32,32,32,32,125,10,32,32,32,32,101,108,101,109,101,110,116,46,105,110,110,101,114,72,84,77,76,32,43,61,32,100,97,116,97,46,104,116,109,108,59,10,32,32,125,44,10,10,32,32,104,105,100,101,95,101,108,101,109,101,110,116,95,98,121,95,113,117,101,114,121,95,115,101,108,101,99,116,111,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,113,117,101,114,121,83,101,108,101,99,116,111,114,40,100,97,116,97,46,113,117,101,114,121,95,115,101,108,101,99,116,111,114,41,59,10,32,32,32,32,105,102,32,40,33,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,59,10,32,32,32,32,125,10,32,32,32,32,101,108,101,109,101,110,116,46,115,116,121,108,101,46,100,105,115,112,108,97,121,32,61,32,34,110,111,110,101,34,59,10,32,32,125,44,10,32,32,117,110,104,105,100,101,95,101,108,101,109,101,110,116,95,98,121,95,113,117,101,114,121,95,115,101,108,101,99,116,111,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,113,117,101,114,121,83,101,108,101,99,116,111,114,40,100,97,116,97,46,113,117,101,114,121,95,115,101,108,101,99,116,111,114,41,59,10,32,32,32,32,105,102,32,40,33,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,59,10,32,32,32,32,125,10,32,32,32,32,101,108,101,109,101,110,116,46,115,116,121,108,101,46,100,105,115,112,108,97,121,32,61,32,34,115,104,111,119,34,59,10,32,32,125,44,10,10,32,32,100,101,115,116,114,111,121,95,98,121,95,113,117,101,114,121,95,115,101,108,101,99,116,111,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,113,117,101,114,121,83,101,108,101,99,116,111,114,40,100,97,116,97,46,113,117,101,114,121,95,115,101,108,101,99,116,111,114,41,59,10,32,32,32,32,105,102,32,40,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,101,108,101,109,101,110,116,46,114,101,109,111,118,101,40,41,59,10,32,32,32,32,125,10,32,32,125,44,10,10,32,32,108,111,103,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,99,111,110,115,111,108,101,46,108,111,103,40,100,97,116,97,46,109,101,115,115,97,103,101,41,59,10,32,32,125,44,10,10,32,32,119,97,114,110,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,99,111,110,115,111,108,101,46,119,97,114,110,40,100,97,116,97,46,109,101,115,115,97,103,101,41,59,10,32,32,125,44,10,10,32,32,101,114,114,111,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,99,111,110,115,111,108,101,46,101,114,114,111,114,40,100,97,116,97,46,109,101,115,115,97,103,101,41,59,10,32,32,125,44,10,10,32,32,99,108,101,97,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,99,111,110,115,111,108,101,46,99,108,101,97,114,40,41,59,10,32,32,125,44,10,10,32,32,97,100,100,95,99,108,97,115,115,95,98,121,95,113,117,101,114,121,95,115,101,108,101,99,116,111,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,113,117,101,114,121,83,101,108,101,99,116,111,114,40,100,97,116,97,46,113,117,101,114,121,95,115,101,108,101,99,116,111,114,41,59,10,32,32,32,32,105,102,32,40,33,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,59,10,32,32,32,32,125,10,32,32,32,32,101,108,101,109,101,110,116,46,99,108,97,115,115,76,105,115,116,46,97,100,100,40,100,97,116,97,46,99,108,97,115,115,95,110,97,109,101,41,59,10,32,32,125,44,10,10,32,32,114,101,109,111,118,101,95,99,108,97,115,115,95,98,121,95,113,117,101,114,121,95,115,101,108,101,99,116,111,114,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,113,117,101,114,121,83,101,108,101,99,116,111,114,40,100,97,116,97,46,113,117,101,114,121,95,115,101,108,101,99,116,111,114,41,59,10,32,32,32,32,105,102,32,40,33,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,59,10,32,32,32,32,125,10,32,32,32,32,101,108,101,109,101,110,116,46,99,108,97,115,115,76,105,115,116,46,114,101,109,111,118,101,40,100,97,116,97,46,99,108,97,115,115,95,110,97,109,101,41,59,10,32,32,125,44,10,10,32,32,97,100,100,95,99,108,97,115,115,95,98,121,95,105,100,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,103,101,116,69,108,101,109,101,110,116,66,121,73,100,40,100,97,116,97,46,105,100,41,59,10,32,32,32,32,105,102,32,40,33,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,59,10,32,32,32,32,125,10,32,32,32,32,101,108,101,109,101,110,116,46,99,108,97,115,115,76,105,115,116,46,97,100,100,40,100,97,116,97,46,99,108,97,115,115,95,110,97,109,101,41,59,10,32,32,125,44,10,10,32,32,114,101,109,111,118,101,95,99,108,97,115,115,95,98,121,95,105,100,58,32,102,117,110,99,116,105,111,110,32,40,100,97,116,97,41,32,123,10,32,32,32,32,108,101,116,32,101,108,101,109,101,110,116,32,61,32,100,111,99,117,109,101,110,116,46,103,101,116,69,108,101,109,101,110,116,66,121,73,100,40,100,97,116,97,46,105,100,41,59,10,32,32,32,32,105,102,32,40,33,101,108,101,109,101,110,116,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,59,10,32,32,32,32,125,10,32,32,32,32,101,108,101,109,101,110,116,46,99,108,97,115,115,76,105,115,116,46,114,101,109,111,118,101,40,100,97,116,97,46,99,108,97,115,115,95,110,97,109,101,41,59,10,32,32,125,44,10,125,59,10,108,101,116,32,99,119,101,98,95,98,114,105,100,103,101,115,32,61,32,123,125,59,10,10,102,117,110,99,116,105,111,110,32,112,114,105,118,97,116,101,95,99,119,101,98,95,99,111,110,118,101,114,116,95,97,115,115,99,105,40,97,115,99,105,105,76,105,115,116,41,32,123,10,32,32,114,101,116,117,114,110,32,97,115,99,105,105,76,105,115,116,46,109,97,112,40,40,99,111,100,101,41,32,61,62,32,83,116,114,105,110,103,46,102,114,111,109,67,104,97,114,67,111,100,101,40,99,111,100,101,41,41,46,106,111,105,110,40,34,34,41,59,10,125,10,10,97,115,121,110,99,32,102,117,110,99,116,105,111,110,32,112,114,105,118,97,116,101,95,99,119,101,98,95,99,97,108,108,95,98,114,105,100,103,101,95,119,105,116,104,95,97,115,115,105,99,40,10,32,32,98,114,105,100,103,101,95,110,97,109,101,95,97,115,115,99,105,44,10,32,32,98,114,105,100,103,101,95,97,114,103,115,95,97,115,115,99,105,44,10,41,32,123,10,32,32,108,101,116,32,98,114,105,100,103,101,110,97,109,101,95,99,111,110,118,101,114,116,101,100,32,61,32,112,114,105,118,97,116,101,95,99,119,101,98,95,99,111,110,118,101,114,116,95,97,115,115,99,105,40,98,114,105,100,103,101,95,110,97,109,101,95,97,115,115,99,105,41,59,10,32,32,108,101,116,32,98,114,105,100,103,101,95,97,114,103,115,95,99,111,110,118,101,114,116,101,100,32,61,32,112,114,105,118,97,116,101,95,99,119,101,98,95,99,111,110,118,101,114,116,95,97,115,115,99,105,40,98,114,105,100,103,101,95,97,114,103,115,95,97,115,115,99,105,41,59,10,32,32,108,101,116,32,99,117,114,114,101,110,116,95,98,114,105,100,103,101,32,61,32,99,119,101,98,95,98,114,105,100,103,101,115,91,98,114,105,100,103,101,110,97,109,101,95,99,111,110,118,101,114,116,101,100,93,59,10,32,32,108,101,116,32,99,111,100,101,32,61,32,34,99,117,114,114,101,110,116,95,98,114,105,100,103,101,40,34,32,43,32,98,114,105,100,103,101,95,97,114,103,115,95,99,111,110,118,101,114,116,101,100,32,43,32,34,41,34,59,10,32,32,116,114,121,32,123,10,32,32,32,32,101,118,97,108,40,99,111,100,101,41,59,10,32,32,125,32,99,97,116,99,104,32,40,101,114,114,111,114,41,32,123,10,32,32,32,32,99,111,110,115,111,108,101,46,108,111,103,40,101,114,114,111,114,41,59,10,32,32,125,10,125,10,10,97,115,121,110,99,32,102,117,110,99,116,105,111,110,32,112,114,105,118,97,116,101,95,99,119,101,98,95,115,101,110,100,95,116,111,95,115,101,114,118,101,114,40,110,97,109,101,44,32,97,114,103,115,44,32,99,111,110,116,101,110,116,41,32,123,10,32,32,108,101,116,32,98,111,100,121,32,61,32,123,32,110,97,109,101,58,32,110,97,109,101,44,32,97,114,103,115,58,32,97,114,103,115,44,32,99,111,110,116,101,110,116,58,32,99,111,110,116,101,110,116,32,125,59,10,32,32,108,101,116,32,112,114,111,112,115,32,61,32,123,10,32,32,32,32,109,101,116,104,111,100,58,32,34,80,79,83,84,34,44,10,32,32,32,32,98,111,100,121,58,32,74,83,79,78,46,115,116,114,105,110,103,105,102,121,40,98,111,100,121,41,44,10,32,32,125,59,10,32,32,99,111,110,115,116,32,82,79,85,84,69,32,61,32,34,47,112,114,105,118,97,116,101,95,99,119,101,98,95,104,121,100,114,97,116,105,111,110,95,109,97,105,110,95,99,97,108,108,98,97,99,107,95,104,97,110,100,108,101,114,34,59,10,32,32,108,101,116,32,114,101,115,117,108,116,32,61,32,97,119,97,105,116,32,102,101,116,99,104,40,82,79,85,84,69,44,32,112,114,111,112,115,41,59,10,32,32,108,101,116,32,97,99,116,105,111,110,115,32,61,32,97,119,97,105,116,32,114,101,115,117,108,116,46,106,115,111,110,40,41,59,10,32,32,105,102,32,40,33,114,101,115,117,108,116,46,111,107,41,32,123,10,32,32,32,32,99,111,110,115,111,108,101,46,108,111,103,40,97,99,116,105,111,110,115,41,59,10,32,32,32,32,114,101,116,117,114,110,59,10,32,32,125,10,32,32,97,99,116,105,111,110,115,46,102,111,114,69,97,99,104,40,102,117,110,99,116,105,111,110,32,40,105,116,101,109,41,32,123,10,32,32,32,32,116,114,121,32,123,10,32,32,32,32,32,32,108,101,116,32,114,101,115,112,111,110,115,101,95,97,99,116,105,111,110,32,61,32,112,114,105,118,97,116,101,95,99,119,101,98,95,97,99,116,105,111,110,115,95,104,97,110,100,108,101,114,115,91,105,116,101,109,46,110,97,109,101,93,59,10,32,32,32,32,32,32,105,102,32,40,33,114,101,115,112,111,110,115,101,95,97,99,116,105,111,110,41,32,123,10,32,32,32,32,32,32,32,32,116,104,114,111,119,32,69,114,114,111,114,40,34,114,101,115,112,111,110,115,101,32,34,32,43,32,105,116,101,109,46,110,97,109,101,32,43,32,34,105,116,115,32,110,111,116,32,97,32,97,99,116,105,111,110,34,41,59,10,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,114,101,115,112,111,110,115,101,95,97,99,116,105,111,110,40,105,116,101,109,46,100,97,116,97,41,59,10,32,32,32,32,125,32,99,97,116,99,104,32,40,101,114,114,111,114,41,32,123,10,32,32,32,32,32,32,99,111,110,115,111,108,101,46,108,111,103,40,101,114,114,111,114,41,59,10,32,32,32,32,125,10,32,32,125,41,59,10,125,10,10,102,117,110,99,116,105,111,110,32,112,114,105,118,97,116,101,95,99,119,101,98,95,104,97,110,100,108,101,95,114,101,113,117,105,114,101,100,95,100,97,116,97,40,99,97,108,108,98,97,99,107,44,32,97,114,103,115,44,32,99,111,110,116,101,110,116,44,32,110,97,109,101,41,32,123,10,32,32,108,101,116,32,114,101,115,117,108,116,32,61,32,117,110,100,101,102,105,110,101,100,59,10,32,32,116,114,121,32,123,10,32,32,32,32,114,101,115,117,108,116,32,61,32,99,97,108,108,98,97,99,107,40,97,114,103,115,41,59,10,32,32,125,32,99,97,116,99,104,32,40,101,114,114,111,114,41,32,123,10,32,32,32,32,99,111,110,115,111,108,101,46,108,111,103,40,101,114,114,111,114,41,59,10,32,32,32,32,114,101,116,117,114,110,59,10,32,32,125,10,10,32,32,105,102,32,40,33,65,114,114,97,121,46,105,115,65,114,114,97,121,40,114,101,115,117,108,116,41,41,32,123,10,32,32,32,32,114,101,115,117,108,116,32,61,32,91,114,101,115,117,108,116,93,59,10,32,32,125,10,10,32,32,105,102,32,40,33,99,111,110,116,101,110,116,91,110,97,109,101,93,41,32,123,10,32,32,32,32,99,111,110,116,101,110,116,91,110,97,109,101,93,32,61,32,91,93,59,10,32,32,125,10,32,32,99,111,110,116,101,110,116,91,110,97,109,101,93,32,61,32,99,111,110,116,101,110,116,91,110,97,109,101,93,46,99,111,110,99,97,116,40,114,101,115,117,108,116,41,59,10,125,10,102,117,110,99,116,105,111,110,32,112,114,105,118,97,116,101,95,99,119,101,98,95,116,114,121,95,116,111,95,99,111,110,118,101,114,116,95,116,111,95,110,117,109,98,101,114,40,112,111,115,115,105,98,108,101,95,110,117,109,98,101,114,41,32,123,10,32,32,108,101,116,32,112,111,115,115,105,98,108,101,95,99,111,110,118,101,114,115,105,111,110,32,61,32,112,97,114,115,101,70,108,111,97,116,40,112,111,115,115,105,98,108,101,95,110,117,109,98,101,114,41,59,10,32,32,105,102,32,40,105,115,78,97,78,40,112,111,115,115,105,98,108,101,95,99,111,110,118,101,114,115,105,111,110,41,41,32,123,10,32,32,32,32,114,101,116,117,114,110,32,112,111,115,115,105,98,108,101,95,110,117,109,98,101,114,59,10,32,32,125,10,10,32,32,114,101,116,117,114,110,32,112,111,115,115,105,98,108,101,95,99,111,110,118,101,114,115,105,111,110,59,10,125,10,10,102,117,110,99,116,105,111,110,32,112,114,105,118,97,116,101,95,99,119,101,98,95,103,101,116,95,115,101,115,115,105,111,110,95,115,116,111,114,97,103,101,95,105,116,101,109,40,112,114,111,112,115,41,32,123,10,32,32,108,101,116,32,102,105,110,97,108,118,97,108,117,101,32,61,32,115,101,115,115,105,111,110,83,116,111,114,97,103,101,46,103,101,116,73,116,101,109,40,112,114,111,112,115,46,110,97,109,101,41,59,10,10,32,32,105,102,32,40,33,102,105,110,97,108,118,97,108,117,101,41,32,123,10,32,32,32,32,114,101,116,117,114,110,32,91,93,59,10,32,32,125,10,32,32,105,102,32,40,112,114,111,112,115,46,97,117,116,111,95,99,111,110,118,101,114,116,41,32,123,10,32,32,32,32,102,105,110,97,108,118,97,108,117,101,32,61,32,112,114,105,118,97,116,101,95,99,119,101,98,95,116,114,121,95,116,111,95,99,111,110,118,101,114,116,95,116,111,95,110,117,109,98,101,114,40,102,105,110,97,108,118,97,108,117,101,41,59,10,32,32,125,10,10,32,32,114,101,116,117,114,110,32,91,102,105,110,97,108,118,97,108,117,101,93,59,10,125,10,10,102,117,110,99,116,105,111,110,32,112,114,105,118,97,116,101,95,99,119,101,98,95,103,101,116,95,101,108,101,109,101,110,116,115,40,112,114,111,112,115,41,32,123,10,32,32,108,101,116,32,101,108,101,109,101,110,116,115,32,61,32,91,46,46,46,100,111,99,117,109,101,110,116,46,113,117,101,114,121,83,101,108,101,99,116,111,114,65,108,108,40,112,114,111,112,115,46,113,117,101,114,121,95,115,101,108,101,99,116,111,114,41,93,59,10,32,32,114,101,116,117,114,110,32,101,108,101,109,101,110,116,115,46,109,97,112,40,40,101,108,101,109,101,110,116,41,32,61,62,32,123,10,32,32,32,32,108,101,116,32,102,105,110,97,108,118,97,108,117,101,32,61,32,117,110,100,101,102,105,110,101,100,59,10,10,32,32,32,32,105,102,32,40,101,108,101,109,101,110,116,46,116,121,112,101,32,61,61,61,32,34,99,104,101,99,107,98,111,120,34,41,32,123,10,32,32,32,32,32,32,114,101,116,117,114,110,32,101,108,101,109,101,110,116,46,99,104,101,99,107,101,100,59,10,32,32,32,32,125,10,10,32,32,32,32,105,102,32,40,101,108,101,109,101,110,116,46,116,97,103,78,97,109,101,32,61,61,61,32,34,73,78,80,85,84,34,32,124,124,32,101,108,101,109,101,110,116,46,116,97,103,78,97,109,101,32,61,61,61,32,34,84,69,88,84,65,82,69,65,34,41,32,123,10,32,32,32,32,32,32,102,105,110,97,108,118,97,108,117,101,32,61,32,101,108,101,109,101,110,116,46,118,97,108,117,101,59,10,32,32,32,32,125,32,101,108,115,101,32,123,10,32,32,32,32,32,32,102,105,110,97,108,118,97,108,117,101,32,61,32,101,108,101,109,101,110,116,46,116,101,120,116,67,111,110,116,101,110,116,59,10,32,32,32,32,125,10,10,32,32,32,32,105,102,32,40,112,114,111,112,115,46,97,117,116,111,95,99,111,110,118,101,114,116,41,32,123,10,32,32,32,32,32,32,102,105,110,97,108,118,97,108,117,101,32,61,32,112,114,105,118,97,116,101,95,99,119,101,98,95,116,114,121,95,116,111,95,99,111,110,118,101,114,116,95,116,111,95,110,117,109,98,101,114,40,102,105,110,97,108,118,97,108,117,101,41,59,10,32,32,32,32,125,10,10,32,32,32,32,114,101,116,117,114,110,32,102,105,110,97,108,118,97,108,117,101,59,10,32,32,125,41,59,10,125,10,10,102,117,110,99,116,105,111,110,32,112,114,105,118,97,116,101,95,99,119,101,98,95,103,101,116,95,118,97,108,117,101,95,99,111,111,107,105,101,95,98,121,95,107,101,121,40,112,114,111,112,115,41,123,10,32,32,99,111,110,115,116,32,110,97,109,101,69,81,32,61,32,112,114,111,112,115,46,110,97,109,101,32,43,32,34,61,34,59,10,32,32,32,32,99,111,110,115,116,32,99,111,111,107,105,101,115,65,114,114,97,121,32,61,32,100,111,99,117,109,101,110,116,46,99,111,111,107,105,101,46,115,112,108,105,116,40,39,59,39,41,59,10,32,32,32,32,10,32,32,32,32,102,111,114,32,40,108,101,116,32,105,32,61,32,48,59,32,105,32,60,32,99,111,111,107,105,101,115,65,114,114,97,121,46,108,101,110,103,116,104,59,32,105,43,43,41,32,123,10,32,32,32,32,32,32,32,32,108,101,116,32,99,111,111,107,105,101,32,61,32,99,111,111,107,105,101,115,65,114,114,97,121,91,105,93,46,116,114,105,109,40,41,59,10,32,32,32,32,32,32,32,32,105,102,32,40,99,111,111,107,105,101,46,105,110,100,101,120,79,102,40,110,97,109,101,69,81,41,32,61,61,61,32,48,41,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,114,101,116,117,114,110,32,91,99,111,111,107,105,101,46,115,117,98,115,116,114,105,110,103,40,110,97,109,101,69,81,46,108,101,110,103,116,104,44,32,99,111,111,107,105,101,46,108,101,110,103,116,104,41,93,59,10,32,32,32,32,32,32,32,32,125,10,32,32,32,32,125,10,32,32,32,32,114,101,116,117,114,110,32,91,93,59,32,10,125,10,0};


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


static long long  cweb_actual_request = 0;
static long cweb_total_requests = 0;
static bool private_cweb_end_server = false;

static const char* cweb_static_folder;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
unsigned char private_cweb_404[] = {60,33,68,79,67,84,89,80,69,32,104,116,109,108,62,10,60,104,116,109,108,32,108,97,110,103,61,34,112,116,45,66,82,34,62,10,60,104,101,97,100,62,10,32,32,32,32,60,109,101,116,97,32,99,104,97,114,115,101,116,61,34,85,84,70,45,56,34,62,10,32,32,32,32,60,109,101,116,97,32,110,97,109,101,61,34,118,105,101,119,112,111,114,116,34,32,99,111,110,116,101,110,116,61,34,119,105,100,116,104,61,100,101,118,105,99,101,45,119,105,100,116,104,44,32,105,110,105,116,105,97,108,45,115,99,97,108,101,61,49,46,48,34,62,10,32,32,32,32,60,116,105,116,108,101,62,69,114,114,111,60,47,116,105,116,108,101,62,10,32,32,32,32,60,115,116,121,108,101,62,10,32,32,32,32,32,32,32,32,98,111,100,121,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,114,103,105,110,58,32,48,59,10,32,32,32,32,32,32,32,32,32,32,32,32,112,97,100,100,105,110,103,58,32,48,59,10,32,32,32,32,32,32,32,32,32,32,32,32,100,105,115,112,108,97,121,58,32,102,108,101,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,106,117,115,116,105,102,121,45,99,111,110,116,101,110,116,58,32,99,101,110,116,101,114,59,10,32,32,32,32,32,32,32,32,32,32,32,32,97,108,105,103,110,45,105,116,101,109,115,58,32,99,101,110,116,101,114,59,10,32,32,32,32,32,32,32,32,32,32,32,32,104,101,105,103,104,116,58,32,49,48,48,118,104,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,97,99,107,103,114,111,117,110,100,45,99,111,108,111,114,58,32,35,50,56,50,99,51,52,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,102,102,102,102,102,102,59,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,102,97,109,105,108,121,58,32,39,65,114,105,97,108,39,44,32,115,97,110,115,45,115,101,114,105,102,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,99,111,110,116,97,105,110,101,114,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,116,101,120,116,45,97,108,105,103,110,58,32,99,101,110,116,101,114,59,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,120,45,119,105,100,116,104,58,32,57,48,37,59,10,32,32,32,32,32,32,32,32,32,32,32,32,112,97,100,100,105,110,103,58,32,50,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,111,114,100,101,114,45,114,97,100,105,117,115,58,32,49,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,97,99,107,103,114,111,117,110,100,58,32,35,51,97,51,102,52,55,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,111,120,45,115,104,97,100,111,119,58,32,48,32,52,112,120,32,56,112,120,32,114,103,98,97,40,48,44,32,48,44,32,48,44,32,48,46,51,41,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,99,111,100,101,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,48,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,119,101,105,103,104,116,58,32,98,111,108,100,59,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,114,103,105,110,58,32,48,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,102,102,54,98,54,98,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,109,101,115,115,97,103,101,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,50,52,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,114,103,105,110,58,32,49,48,112,120,32,48,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,100,51,100,51,100,51,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,100,101,115,99,114,105,112,116,105,111,110,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,56,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,114,103,105,110,45,98,111,116,116,111,109,58,32,51,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,97,57,97,57,97,57,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,108,105,110,107,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,100,105,115,112,108,97,121,58,32,105,110,108,105,110,101,45,98,108,111,99,107,59,10,32,32,32,32,32,32,32,32,32,32,32,32,112,97,100,100,105,110,103,58,32,49,50,112,120,32,50,52,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,56,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,50,56,50,99,51,52,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,97,99,107,103,114,111,117,110,100,45,99,111,108,111,114,58,32,35,102,102,54,98,54,98,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,111,114,100,101,114,45,114,97,100,105,117,115,58,32,53,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,116,101,120,116,45,100,101,99,111,114,97,116,105,111,110,58,32,110,111,110,101,59,10,32,32,32,32,32,32,32,32,32,32,32,32,116,114,97,110,115,105,116,105,111,110,58,32,98,97,99,107,103,114,111,117,110,100,45,99,111,108,111,114,32,48,46,51,115,32,101,97,115,101,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,108,105,110,107,58,104,111,118,101,114,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,98,97,99,107,103,114,111,117,110,100,45,99,111,108,111,114,58,32,35,102,102,52,99,52,99,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,64,109,101,100,105,97,32,40,109,97,120,45,119,105,100,116,104,58,32,54,48,48,112,120,41,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,99,111,100,101,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,54,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,125,10,32,32,32,32,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,109,101,115,115,97,103,101,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,50,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,125,10,32,32,32,32,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,100,101,115,99,114,105,112,116,105,111,110,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,54,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,125,10,32,32,32,32,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,108,105,110,107,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,54,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,125,10,32,32,32,32,32,32,32,32,125,10,32,32,32,32,60,47,115,116,121,108,101,62,10,60,47,104,101,97,100,62,10,60,98,111,100,121,62,10,32,32,32,32,60,100,105,118,32,99,108,97,115,115,61,34,101,114,114,111,114,45,99,111,110,116,97,105,110,101,114,34,62,10,32,32,32,32,32,32,32,32,60,104,49,32,99,108,97,115,115,61,34,101,114,114,111,114,45,99,111,100,101,34,62,52,48,52,60,47,104,49,62,10,32,32,32,32,32,32,32,32,60,112,32,99,108,97,115,115,61,34,101,114,114,111,114,45,109,101,115,115,97,103,101,34,62,80,97,103,101,32,110,111,116,45,102,111,117,110,100,60,47,112,62,10,32,32,32,32,32,32,32,32,60,112,32,99,108,97,115,115,61,34,101,114,114,111,114,45,100,101,115,99,114,105,112,116,105,111,110,34,62,83,111,114,114,121,44,32,116,104,105,115,32,112,97,103,101,32,110,111,116,32,102,111,117,110,100,46,60,47,112,62,10,32,32,32,32,32,32,32,32,60,97,32,104,114,101,102,61,34,47,34,32,99,108,97,115,115,61,34,101,114,114,111,114,45,108,105,110,107,34,62,98,97,99,107,60,47,97,62,10,32,32,32,32,60,47,100,105,118,62,10,60,47,98,111,100,121,62,10,60,47,104,116,109,108,62,0};

unsigned char private_cweb_500[] = {60,33,68,79,67,84,89,80,69,32,104,116,109,108,62,10,60,104,116,109,108,32,108,97,110,103,61,34,112,116,45,66,82,34,62,10,60,104,101,97,100,62,10,32,32,32,32,60,109,101,116,97,32,99,104,97,114,115,101,116,61,34,85,84,70,45,56,34,62,10,32,32,32,32,60,109,101,116,97,32,110,97,109,101,61,34,118,105,101,119,112,111,114,116,34,32,99,111,110,116,101,110,116,61,34,119,105,100,116,104,61,100,101,118,105,99,101,45,119,105,100,116,104,44,32,105,110,105,116,105,97,108,45,115,99,97,108,101,61,49,46,48,34,62,10,32,32,32,32,60,116,105,116,108,101,62,69,114,114,111,60,47,116,105,116,108,101,62,10,32,32,32,32,60,115,116,121,108,101,62,10,32,32,32,32,32,32,32,32,98,111,100,121,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,114,103,105,110,58,32,48,59,10,32,32,32,32,32,32,32,32,32,32,32,32,112,97,100,100,105,110,103,58,32,48,59,10,32,32,32,32,32,32,32,32,32,32,32,32,100,105,115,112,108,97,121,58,32,102,108,101,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,106,117,115,116,105,102,121,45,99,111,110,116,101,110,116,58,32,99,101,110,116,101,114,59,10,32,32,32,32,32,32,32,32,32,32,32,32,97,108,105,103,110,45,105,116,101,109,115,58,32,99,101,110,116,101,114,59,10,32,32,32,32,32,32,32,32,32,32,32,32,104,101,105,103,104,116,58,32,49,48,48,118,104,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,97,99,107,103,114,111,117,110,100,45,99,111,108,111,114,58,32,35,50,56,50,99,51,52,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,102,102,102,102,102,102,59,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,102,97,109,105,108,121,58,32,39,65,114,105,97,108,39,44,32,115,97,110,115,45,115,101,114,105,102,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,99,111,110,116,97,105,110,101,114,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,116,101,120,116,45,97,108,105,103,110,58,32,99,101,110,116,101,114,59,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,120,45,119,105,100,116,104,58,32,57,48,37,59,10,32,32,32,32,32,32,32,32,32,32,32,32,112,97,100,100,105,110,103,58,32,50,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,111,114,100,101,114,45,114,97,100,105,117,115,58,32,49,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,97,99,107,103,114,111,117,110,100,58,32,35,51,97,51,102,52,55,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,111,120,45,115,104,97,100,111,119,58,32,48,32,52,112,120,32,56,112,120,32,114,103,98,97,40,48,44,32,48,44,32,48,44,32,48,46,51,41,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,99,111,100,101,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,48,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,119,101,105,103,104,116,58,32,98,111,108,100,59,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,114,103,105,110,58,32,48,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,102,102,54,98,54,98,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,109,101,115,115,97,103,101,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,50,52,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,114,103,105,110,58,32,49,48,112,120,32,48,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,100,51,100,51,100,51,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,100,101,115,99,114,105,112,116,105,111,110,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,56,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,109,97,114,103,105,110,45,98,111,116,116,111,109,58,32,51,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,97,57,97,57,97,57,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,108,105,110,107,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,100,105,115,112,108,97,121,58,32,105,110,108,105,110,101,45,98,108,111,99,107,59,10,32,32,32,32,32,32,32,32,32,32,32,32,112,97,100,100,105,110,103,58,32,49,50,112,120,32,50,52,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,56,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,99,111,108,111,114,58,32,35,50,56,50,99,51,52,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,97,99,107,103,114,111,117,110,100,45,99,111,108,111,114,58,32,35,102,102,54,98,54,98,59,10,32,32,32,32,32,32,32,32,32,32,32,32,98,111,114,100,101,114,45,114,97,100,105,117,115,58,32,53,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,116,101,120,116,45,100,101,99,111,114,97,116,105,111,110,58,32,110,111,110,101,59,10,32,32,32,32,32,32,32,32,32,32,32,32,116,114,97,110,115,105,116,105,111,110,58,32,98,97,99,107,103,114,111,117,110,100,45,99,111,108,111,114,32,48,46,51,115,32,101,97,115,101,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,108,105,110,107,58,104,111,118,101,114,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,98,97,99,107,103,114,111,117,110,100,45,99,111,108,111,114,58,32,35,102,102,52,99,52,99,59,10,32,32,32,32,32,32,32,32,125,10,10,32,32,32,32,32,32,32,32,64,109,101,100,105,97,32,40,109,97,120,45,119,105,100,116,104,58,32,54,48,48,112,120,41,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,99,111,100,101,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,54,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,125,10,32,32,32,32,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,109,101,115,115,97,103,101,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,50,48,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,125,10,32,32,32,32,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,100,101,115,99,114,105,112,116,105,111,110,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,54,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,125,10,32,32,32,32,32,32,32,32,32,32,32,32,46,101,114,114,111,114,45,108,105,110,107,32,123,10,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,102,111,110,116,45,115,105,122,101,58,32,49,54,112,120,59,10,32,32,32,32,32,32,32,32,32,32,32,32,125,10,32,32,32,32,32,32,32,32,125,10,32,32,32,32,60,47,115,116,121,108,101,62,10,60,47,104,101,97,100,62,10,60,98,111,100,121,62,10,32,32,32,32,60,100,105,118,32,99,108,97,115,115,61,34,101,114,114,111,114,45,99,111,110,116,97,105,110,101,114,34,62,10,32,32,32,32,32,32,32,32,60,104,49,32,99,108,97,115,115,61,34,101,114,114,111,114,45,99,111,100,101,34,62,53,48,48,60,47,104,49,62,10,32,32,32,32,32,32,32,32,60,112,32,99,108,97,115,115,61,34,101,114,114,111,114,45,109,101,115,115,97,103,101,34,62,69,114,114,111,114,32,105,110,116,101,114,110,60,47,112,62,10,32,32,32,32,32,32,32,32,60,112,32,99,108,97,115,115,61,34,101,114,114,111,114,45,100,101,115,99,114,105,112,116,105,111,110,34,62,69,114,114,111,114,32,105,110,32,115,101,114,118,101,114,60,47,112,62,10,32,32,32,32,32,32,32,32,60,97,32,104,114,101,102,61,34,47,34,32,99,108,97,115,115,61,34,101,114,114,111,114,45,108,105,110,107,34,62,98,97,99,107,60,47,97,62,10,32,32,32,32,60,47,100,105,118,62,10,60,47,98,111,100,121,62,10,60,47,104,116,109,108,62,0};


#endif

#ifndef CWebStudio_dep_define
#define CWebStudio_dep_define
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#if !defined(CWEB_MOCK_CTEXT_ENGINE_DEFINE) && defined(CWEB_CTEXT_ENGINE_DECLARATED)
/* MIT License

Copyright (c) 2023 OUI

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */ 


#ifndef CTextEngine_fdefine
#define CTextEngine_fdefine
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CTextArray * newCTextArray(){
    CTextArray  *self = (CTextArray*) malloc(sizeof (CTextArray));
    self->size = 0;
    self->stacks = (CTextStack**) malloc(0);
    return self;
}

void CTextArray_append(CTextArray *self,CTextStack *element){
    self->stacks =  (CTextStack**) realloc(
            self->stacks,
            (self->size+1)* sizeof (CTextStack*)
            );

    self->stacks[self->size] = element;
    self->size+=1;
}



void CTextArray_append_string(CTextArray *self,const char *element){
    CTextStack *new_element = newCTextStack_string(element);
    CTextArray_append(self,new_element);
}

CTextStack * CTextArray_join(CTextArray *self,const char *separator){
    CTextStack  *result  = newCTextStack_string_empty();
    for(int i = 0; i < self->size; i++){
        if(i < self->size -1){
            CTextStack_format(result,"%t%s",self->stacks[i],separator);
        }
        else{
            CTextStack_format(result,"%t",self->stacks[i]);

        }

    }
    return result;
}

CTextArray *CTextArray_split(const char *element,const char *target){
    CTextArray *self = newCTextArray();
    CTextStack *text = newCTextStack_string(element);
    long target_size = (long)strlen(target);
    CTextStack  *acumulated = newCTextStack_string_empty();

    for(int i = 0; i <text->size; i++){
        CTextStack  *possible_division = CTextStack_substr(text,i,target_size + i);
        if(CTextStack_equal(possible_division,target)){
            CTextArray_append(self,acumulated);
            acumulated = newCTextStack_string_empty();
            CTextStack_free(possible_division);
            continue;
        }
        CTextStack_free(possible_division);

        CTextStack_format(acumulated,"%c",text->rendered_text[i]);
    }

    CTextArray_append(self,acumulated);
    CTextStack_free(text);
    return self;
}



void  CTextArray_free(CTextArray *self){
    for(int i = 0; i < self->size; i++){
            CTextStack_free(self->stacks[i]);
    }
    free(self->stacks);
    free(self);
}

CTextArray * CTextArray_map(CTextArray *self, CTextStack *(caller)(CTextStack* element)){
    CTextArray *new_array  = newCTextArray();
    for(int i = 0; i < self->size; i++){
        CTextStack *result = caller(self->stacks[i]);
        CTextArray_append(new_array,result);
    }
    return new_array;
}


CTextArray * CTextArray_filter(CTextArray *self, bool (caller)(CTextStack* element)){
    CTextArray *new_array  = newCTextArray();

    for(int i = 0; i < self->size; i++){
        if(caller(self->stacks[i])){

            CTextArray_append(new_array, CTextStack_clone(self->stacks[i]));
        }
    }

    return new_array;
}

void  CTextArray_foreach(CTextArray *self, void (*caller)(CTextStack* element)){
    for(int i = 0; i < self->size; i++){
        caller(self->stacks[i]);
    }
}

bool CTextArray_includes(CTextArray *self,const char *element){
    for(int i = 0 ; i < self->size;i++){
        if(CTextStack_equal(self->stacks[i],element)){
            return true;
        }
    }
    return false;
}


void CTextArray_represent(CTextArray *self){
    for(int i =0; i < self->size; i++){
        CTextStack_represent(self->stacks[i]);
    }
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CTextStackModule newCTextStackModule(){
    struct CTextStackModule self = {0};
    self.newStack = newCTextStack;
    self.newStack_string = newCTextStack_string;
    self.newStack_string_format = newCTextStack_string_format;
    self.newStack_string_empty = newCTextStack_string_empty;
    self.newStack_string_getting_ownership = newCTextStack_string_getting_ownership;
    self.text = CTextStack_text;
    self.segment_text = CTextStack_segment_text;
    self.format = CTextStack_format;
    self.segment = CTextStack_segment;
    self.segment_format = CTextStack_segment_format;
    self.open_format = CTextStack_open_format;
    self.only_open_format =CTextStack_only_open_format;
    self.auto_close_format = CTextStack_auto_close_format;
    self.open = ctext_open;
    self.close = ctext_close;
    self.free =  CTextStack_free;
    self.clone = CTextStack_clone;
    self.represent = CTextStack_represent;
    self.self_transform_in_string_and_self_clear = CTextStack_self_transform_in_string_and_self_clear;
    self.restart = CTextStack_restart;
    self.substr = CTextStack_substr;
    self.self_substr =CTextStack_self_substr;

    self.pop = CTextStack_pop;
    self.self_pop =CTextStack_self_pop;

    self.replace = CTextStack_replace;
    self.self_replace = CTextStack_self_replace;

    self.replace_long = CTextStack_replace_long;
    self.self_replace_long =CTextStack_self_replace_long;


    self.replace_double = CTextStack_replace_double;
    self.self_replace_double =CTextStack_self_replace_double;

    self.insert_at = CTextStack_insert_at;
    self.self_insert_at  = CTextStack_self_insert_at;


    self.index_of = CTextStack_index_of;
    self.index_of_char = CTextStack_index_of_char;

    self.lower = CTextStack_lower;
    self.self_lower = CTextStack_self_lower;

    self.upper = CTextStack_upper;
    self.self_upper = CTextStack_self_upper;

    self.captalize = CTextStack_captalize;
    self.self_captalize = CTextStack_self_captalize;

    self.starts_with = CTextStack_starts_with;
    self.ends_with = CTextStack_ends_with;

    self.equal = CTextStack_equal;
    self.reverse = CTextStack_reverse;
    self.self_reverse = CTextStack_self_reverse;


    self.typeof_element = CTextStack_typeof;
    self.is_a_num = CTextStack_is_a_num;
    self.typeof_in_str = CTextStack_typeof_in_str;
    self.parse_to_bool = CTextStack_parse_to_bool;
    self.parse_to_integer = CTextStack_parse_to_integer;
    self.parse_to_double = CTextStack_parse_to_double;

    self.trim = CTextStack_trim;
    self.self_trim = CTextStack_self_trim;


    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CTextArrayModule newCTextArrayModule(){
    CTextArrayModule module = {0};
    module.newArray = newCTextArray;
    module.append = CTextArray_append;
    module.append_string = CTextArray_append_string;
    module.join = CTextArray_join;
    module.map  = CTextArray_map;
    module.filter = CTextArray_filter;
    module.foreach = CTextArray_foreach;
    module.represent = CTextArray_represent;
    module.includes = CTextArray_includes;
    module.free = CTextArray_free;
    return module;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CTextNamespace newCTextNamespace(){
    CTextNamespace self  = {0};
    self.stack = newCTextStackModule();
    self.array = newCTextArrayModule();
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end







char * CTextStack_self_transform_in_string_and_self_clear(struct CTextStack *self){
    free(self->line_breaker);
    free(self->separator);
    char *result = self->rendered_text;
    free(self);
    return result;
}

void private_CTextStack_parse_ownership(struct CTextStack *self, struct CTextStack *new_stack){

    free(self->line_breaker);
    free(self->separator);
    free(self->rendered_text);

    self->rendered_text_alocation_size = new_stack->rendered_text_alocation_size;
    self->size = new_stack->size;
    self->ident_level = new_stack->ident_level;


    self->line_breaker = new_stack->line_breaker;
    self->separator = new_stack->separator;
    self->rendered_text = new_stack->rendered_text;
    free(new_stack);

}
void CTextStack_restart(struct CTextStack *self){
    free(self->rendered_text);
    self->rendered_text = (char*)malloc(2);
    strcpy(self->rendered_text,"\0");
    self->rendered_text_alocation_size = 2;
    self->size = 0;
    self->ident_level = 0;
}

void CTextStack_represent(struct CTextStack *self){
    printf("%s\n",self->rendered_text);
}


void CTextStack_free(struct CTextStack *self){
    free(self->line_breaker);
    free(self->separator);
    free(self->rendered_text);
    free(self);
}

 CTextStack * CTextStack_clone(struct CTextStack *self){
    CTextStack *new_stack = newCTextStack(self->line_breaker,self->separator);
    new_stack->ident_level = self->ident_level;
    CTextStack_text(new_stack,self->rendered_text);
    return new_stack;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



 CTextStack * CTextStack_substr(struct CTextStack *self, long starter, long end){

    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);
    new_element->ident_level = self->ident_level;
    long formated_starter = private_CText_transform_index(self->size, starter);
    long formated_end = private_CText_transform_index(self->size, end);

    if(formated_starter == formated_end){
        CTextStack_format(new_element,"%c",self->rendered_text[formated_starter]);
        return new_element;
    }

    for(long i =formated_starter; i < formated_end; i++){
        CTextStack_format(new_element,"%c",self->rendered_text[i]);
    }

    return new_element;

}

void CTextStack_self_substr(struct CTextStack *self, long starter, long end){
    CTextStack *new_stack = CTextStack_substr(self,starter,end);
    private_CTextStack_parse_ownership(self,new_stack);

}


 CTextStack *CTextStack_replace(struct CTextStack *self,const char *element, const char *element_to_replace){

    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);
    new_element->ident_level = self->ident_level;

    long element_size = (long)strlen(element);
    for(long i = 0; i < self->size;i++){
        CTextStack  *possible_ocurrence  = CTextStack_substr(self,i,i+element_size);

        if(strcmp(possible_ocurrence->rendered_text,element)== 0){
            CTextStack_text(new_element,element_to_replace);
            i+=element_size -1;
        }

        else{
            CTextStack_format(new_element,"%c",self->rendered_text[i]);
        }

        CTextStack_free(possible_ocurrence);

    }
    return new_element;
}

void CTextStack_self_replace(struct CTextStack *self,const char *element, const char *element_to_replace){
    CTextStack  *new_stack = CTextStack_replace(self,element,element_to_replace);
    private_CTextStack_parse_ownership(self,new_stack);
}


 CTextStack *CTextStack_replace_long(struct CTextStack *self,const char *element, long element_to_replace){
    char num_conversion[20] = {0};
    sprintf(num_conversion,"%ld",element_to_replace);
    return CTextStack_replace(self,element,num_conversion);
}


void CTextStack_self_replace_long(struct CTextStack *self,const char *element, long element_to_replace){
    CTextStack  *new_stack = CTextStack_replace_long(self,element,element_to_replace);
    private_CTextStack_parse_ownership(self,new_stack);
}


 CTextStack *CTextStack_replace_double(struct CTextStack *self,const char *element, double element_to_replace){
    CTextStack  *num_formated = newCTextStack_string_empty();
    CTextStack_format(num_formated,"%f",element_to_replace);
    CTextStack  *result = CTextStack_replace(self,element,num_formated->rendered_text);
    CTextStack_free(num_formated);
    return result;
}


void CTextStack_self_replace_double(struct CTextStack *self,const char *element, double element_to_replace){
    CTextStack  *new_stack = CTextStack_replace_double(self,element,element_to_replace);
    private_CTextStack_parse_ownership(self,new_stack);
}



long CTextStack_index_of(struct  CTextStack *self, const char *element){
    long element_size = (long)strlen(element);
    for(int i = 0; i < self->size; i++){
        CTextStack  *possible_element = CTextStack_substr(self,i,i+element_size);
        if(strcmp(possible_element->rendered_text,element) == 0){
            CTextStack_free(possible_element);
            return i;
        }
        CTextStack_free(possible_element);

    }
    return -1;
}


long CTextStack_index_of_char(struct  CTextStack *self, char element){
    for(int i = 0; i < self->size; i++) {
        if(self->rendered_text[i] == element){
            return i;
        }
    }
    return -1;
}
bool CTextStack_starts_with(struct  CTextStack *self, const char *element){
    long element_size = strlen(element);
    CTextStack  *separated = CTextStack_substr(self,0,element_size);
    if(strcmp(separated->rendered_text,element) == 0){
        CTextStack_free(separated);
        return true;
    }
    CTextStack_free(separated);
    return false;
}

bool CTextStack_ends_with(struct  CTextStack *self, const char *element){
    long element_size = strlen(element);
    CTextStack  *separated = CTextStack_substr(self,self->size -element_size,-1);

    if(strcmp(separated->rendered_text,element) == 0){
        CTextStack_free(separated);
        return true;
    }
    CTextStack_free(separated);
    return false;
}



struct CTextStack *CTextStack_lower(struct CTextStack *self){
    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);
    new_element->ident_level = self->ident_level;
    for(long i =0; i < self->size; i++){
        char current = self->rendered_text[i];
        CTextStack_format(new_element,"%c",tolower(current));
    }
    return new_element;
}

void CTextStack_self_lower(struct CTextStack *self){
    CTextStack *new_stack = CTextStack_lower(self);
    private_CTextStack_parse_ownership(self,new_stack);
}

struct CTextStack *CTextStack_upper(struct CTextStack *self){
    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);
    new_element->ident_level = self->ident_level;
    for(long i =0; i < self->size; i++){
        char current = self->rendered_text[i];
        CTextStack_format(new_element,"%c",toupper(current));
    }
    return new_element;
}

struct CTextStack *CTextStack_captalize(struct CTextStack *self){
    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);
    new_element->ident_level = self->ident_level;
    if(self->size  ==0){
        return  new_element;
    }

    CTextStack_format(new_element,"%c", toupper(self->rendered_text[0]));

    for(long i =1; i < self->size; i++){
        char  last = self->rendered_text[i-1];
        char current = self->rendered_text[i];


        if(last == ' '){
            CTextStack_format(new_element,"%c",toupper(current));
        }
        else{
            CTextStack_format(new_element,"%c", tolower(current));

        }

    }
    return new_element;
}

void CTextStack_self_captalize(struct CTextStack *self){
    CTextStack *new_stack = CTextStack_captalize(self);
    private_CTextStack_parse_ownership(self,new_stack);
}


void CTextStack_self_upper(struct CTextStack *self){
    CTextStack *new_stack = CTextStack_upper(self);
    private_CTextStack_parse_ownership(self,new_stack);
}


struct CTextStack *CTextStack_reverse(struct CTextStack *self){
    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);
    new_element->ident_level = self->ident_level;
    for(long i = (long)self->size; i >= 0 ; i--){
        CTextStack_format(new_element,"%c",self->rendered_text[i]);
    }
    return new_element;

}

void CTextStack_self_reverse(struct CTextStack *self){
    CTextStack *new_stack = CTextStack_reverse(self);
    private_CTextStack_parse_ownership(self,new_stack);
}



struct CTextStack *CTextStack_pop(struct CTextStack *self, long starter, long end){
    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);
    new_element->ident_level = self->ident_level;
    long formated_starter = private_CText_transform_index(self->size, starter);
    long formated_end = private_CText_transform_index(self->size, end);

    for(int i =0; i < self->size; i ++){
        if(i >= formated_starter && i <= formated_end){
            continue;
        }
        CTextStack_format(new_element,"%c",self->rendered_text[i]);
    }
    return new_element;
}


void  CTextStack_self_pop(struct CTextStack *self, long starter, long end){
    CTextStack  *new_stack = CTextStack_pop(self, starter, end);
    private_CTextStack_parse_ownership(self,new_stack);
}


struct CTextStack *CTextStack_insert_at(struct CTextStack *self,long point, const char *element){

    CTextStack *new_element = newCTextStack(self->line_breaker,self->separator);
    new_element->ident_level = self->ident_level;

    long converted_point = private_CText_transform_index(self->size, point);
    for(long i = 0; i < converted_point; i++){
        CTextStack_format(new_element,"%c",self->rendered_text[i]);
    }
    CTextStack_text(new_element,element);
    for(long i = converted_point; i < self->size; i++){
        CTextStack_format(new_element,"%c",self->rendered_text[i]);
    }
    return new_element;
}

void CTextStack_self_insert_at(struct CTextStack *self,long point, const char *element){
    CTextStack  *new_stack = CTextStack_insert_at(self, point,element);
    private_CTextStack_parse_ownership(self,new_stack);
}


struct CTextStack *CTextStack_trim(struct CTextStack *self){

    CTextStack  *invalid_elements = newCTextStack_string("\t\r\n ");
    long start_point = 0;
    for(int i = 0; i < self->size; i ++){
        char current_char =self->rendered_text[i];
        long invalid_point = CTextStack_index_of_char(invalid_elements, current_char);
        bool is_invalid = invalid_point != -1;
        if(!is_invalid){
            start_point = i;
            break;
        }
    }
    long end_point = -1;
    for(long i = (long)self->size -1; i >= 0; i--){

        char current_char =self->rendered_text[i];
        long invalid_point = CTextStack_index_of_char(invalid_elements, current_char);
        bool is_invalid = invalid_point != -1;
        if(!is_invalid){
            end_point = i+1;
            break;
        }
    }
    CTextStack_free(invalid_elements);
    return CTextStack_substr(self,start_point,end_point);

}


void CTextStack_self_trim(struct CTextStack *self){
    CTextStack  *new_stack = CTextStack_trim(self);
    private_CTextStack_parse_ownership(self,new_stack);
}


bool CTextStack_equal(  CTextStack *self,const char *element){
    return strcmp(self->rendered_text,element) == 0;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

 CTextStack * newCTextStack(const char *line_breaker, const char *separator){
    struct CTextStack *self = (struct CTextStack*)malloc(sizeof(struct CTextStack));
    *self = (CTextStack){0};
    self->rendered_text = (char*)malloc(2);
    strcpy(self->rendered_text,"\0");
    self->rendered_text_alocation_size = 2;

    self->line_breaker = strdup(line_breaker);
    self->separator = strdup(separator);


    return self;
}

 CTextStack *newCTextStack_string(const char *starter){
    CTextStack *self = newCTextStack("","");
    if(starter){
        CTextStack_format(self,"%s", starter);
    }
    return self;
}

 CTextStack *newCTextStack_string_format(const char *format, ...){
    CTextStack *self = newCTextStack("","");
    va_list  argptr;
    va_start(argptr, format);
    private_ctext_generate_formated_text(self,format,argptr);
     va_end(argptr);

    return self;
}

 CTextStack *newCTextStack_string_getting_ownership(const char *starter){
    CTextStack *self = newCTextStack("","");
    free(self->rendered_text);
    self->rendered_text = (char*)starter;
    self->size = strlen(starter);
    self->rendered_text_alocation_size = self->size;
    return self;
}
 CTextStack *newCTextStack_string_empty(){
    return  newCTextStack("","");
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

int CTextStack_typeof(struct CTextStack *self){
    if(self->size == 0){
        return CTEXT_STRING;
    }

    if(CTextStack_equal(self,"true") ||CTextStack_equal(self,"false") ){
        return CTEXT_BOOL;
    }

    double data;
    int result = sscanf(self->rendered_text,"%lf",&data);
    if(!result){
        return CTEXT_STRING;
    }
    if(CTextStack_index_of(self,".") == -1){
        return CTEXT_LONG;
    }
    return CTEXT_DOUBLE;


}
bool CTextStack_is_a_num(struct CTextStack *self){
    int type = CTextStack_typeof(self);
    if(type == CTEXT_DOUBLE || type == CTEXT_LONG){
        return true;
    }
    return false;
}


const char * CTextStack_typeof_in_str(struct CTextStack *self){
    int current_type = CTextStack_typeof(self);

    if(current_type == CTEXT_BOOL){
        return "bool";
    }

    else if(current_type == CTEXT_STRING){
        return "string";
    }

    else if(current_type == CTEXT_LONG){
        return "long";
    }

    else if(current_type == CTEXT_DOUBLE){
        return "double";
    }

    else{
        return "invalid";
    }
}

bool  CTextStack_parse_to_bool(struct CTextStack *self){
    if(CTextStack_equal(self,"true")){
        return true;
    }
    return false;
}

long  CTextStack_parse_to_integer(struct CTextStack *self){
    long value;
    int result = sscanf(self->rendered_text,"%ld",&value);
    if(!result){
        return -1;
    }
    return value;
}

double  CTextStack_parse_to_double(struct CTextStack *self){
    double value;
    int result = sscanf(self->rendered_text,"%lf",&value);
    if(!result){
        return -1;
    }
    return value;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

void private_ctext_text_double_size_if_reachs(struct CTextStack *self){

    while(self->size >= (self->rendered_text_alocation_size - 2)){
        self->rendered_text_alocation_size  =  (self->rendered_text_alocation_size  * 2)+2;
        self->rendered_text = (char*)(realloc(
            self->rendered_text,self->rendered_text_alocation_size
        ));
    }
}

void CTextStack_text(struct CTextStack *self, const char *text){

    if (!text || !text[0]) {
        // Tratar caso de ponteiro nulo ou string vazia
        return;
    }

    size_t text_size = strlen(text);

    self->size += text_size;
    private_ctext_text_double_size_if_reachs(self);

    memcpy(
            self->rendered_text + self->size - text_size,
        text,
        text_size
    );
    self->rendered_text[self->size] = '\0';
}



void CTextStack_segment_text(struct CTextStack *self, const char *text){
    CTextStack_segment(self);
    CTextStack_text(self,text);
}


void CTextStack_format(struct CTextStack *self, const char *format, ...){
    va_list  argptr;
    va_start(argptr, format);
    private_ctext_generate_formated_text(self,format,argptr);
    va_end(argptr);

}

void CTextStack_segment_format(struct CTextStack *self, const char *format, ...){
    CTextStack_segment(self);
    va_list  argptr;
    va_start(argptr, format);
    private_ctext_generate_formated_text(self,format,argptr);
    va_end(argptr);

}


void CTextStack_segment(struct CTextStack *self){

    CTextStack_text(self,self->line_breaker);

    for(int i=0;i<self->ident_level;i++){
        CTextStack_text(self,self->separator);

    }


}

void CTextStack_open_format(struct CTextStack *self, const char *tag, const char *format, ...){
    CTextStack_segment(self);
    CTextStack_format(self, "%c",'<');
    CTextStack_text(self,tag);


    if(format!=NULL){
        CTextStack_format(self, "%c",' ');

        va_list  argptr;
        va_start(argptr, format);
        private_ctext_generate_formated_text(self,format,argptr);
        va_end(argptr);

    }
    CTextStack_format(self, "%c",'>');


    self->ident_level += 1;
}



void CTextStack_only_open_format(struct CTextStack *self, const char *tag, const char *format, ...){
    CTextStack_segment(self);
    CTextStack_format(self, "%c",'<');

    CTextStack_text(self,tag);


    if(format!=NULL){
        CTextStack_format(self, "%c",' ');
        va_list  argptr;
        va_start(argptr, format);
        private_ctext_generate_formated_text(self,format,argptr);
        va_end(argptr);

    }
    CTextStack_format(self, "%c",'>');


}

void CTextStack_auto_close_format(struct CTextStack *self, const char *tag, const char *format, ...){
    CTextStack_segment(self);
    CTextStack_format(self, "%c",'<');

    CTextStack_text(self,tag);


    if(format!=NULL){
        CTextStack_format(self, "%c",' ');

        va_list  argptr;
        va_start(argptr, format);
        private_ctext_generate_formated_text(self,format,argptr);
        va_end(argptr);
    }
    CTextStack_text(self,"/>");

}

void ctext_open(struct CTextStack *self, const char *tag){
    if(tag ==  NULL){

        self->ident_level += 1;
        return;
    }
    CTextStack_open_format(self, tag, NULL);
}



void ctext_close(struct CTextStack *self, const char *tag){

    if(tag==NULL){
        self->ident_level -= 1;

        return;
    }
    self->ident_level -= 1;
    CTextStack_segment(self);


    CTextStack_text(self,"</");
    CTextStack_text(self,tag);
    CTextStack_format(self, "%c",'>');

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

void private_ctext_generate_formated_text(
        struct CTextStack *stack,const char *format,va_list argptr){
    long  text_size = strlen(format);

    int i;
    for(i =0;i < text_size -1 ;i++){

        char single_test[3] = {format[i],format[i+1],'\0'};
        char double_test[4] = {0};


        if(i < text_size -2){
            strcpy(double_test,single_test);
            double_test[2] = format[i+2];
            double_test[3] = '\0';

        }

        if(strcmp(single_test,"%d") == 0 || strcmp(single_test,"%i") == 0) {
            int value = va_arg(argptr,int);
            char result[20] ={0};
            sprintf(result,"%d", value);



            CTextStack_text(stack,result);

            i+=1;
            continue;
        }

        else if(strcmp(double_test,"%ld") == 0 ) {

            int value = va_arg(argptr,int);
            char result[20] ={0};
            sprintf(result,"%d", value);

            CTextStack_text(stack,result);

            i+=2;
            continue;
        }


        else if(strcmp(single_test,"%f") == 0 ) {
            char result_text[20]= {0};

            sprintf(result_text,"%lf", va_arg(argptr,double ));

            for(int t = 18; t > 0; t--){
                char current_char = result_text[t];
                if(current_char != '0' && current_char != '\0'){

                    if(current_char == '.'){
                        result_text[t+2]  = '\0';
                    }
                    else{
                        result_text[t+1]  = '\0';
                    }

                    break;
                }
            }
            CTextStack_text(stack,result_text);
            i+=1;
            continue;
        }

        else if(strcmp(double_test,"%lf") == 0 ) {
            char result_text[20]= {0};

            sprintf(result_text,"%lf", va_arg(argptr,double ));

            for(int t = 18; t > 0; t--){
                char current_char = result_text[t];
                if(current_char != '0' && current_char != '\0'){

                    if(current_char == '.'){
                        result_text[t+2]  = '\0';
                    }
                    else{
                        result_text[t+1]  = '\0';
                    }

                    break;
                }
            }
            CTextStack_text(stack,result_text);
            i+=2;
            continue;
        }
        else if(strcmp(single_test,"%c") == 0){
            char result = va_arg(argptr,int);
            char element[2] = {result,'\0'};
            CTextStack_text(stack,element);
            i+=1;
            continue;
        }


        else if(strcmp(single_test,"%b") == 0){
            bool value = va_arg(argptr,int);
            if(value){
                CTextStack_text(stack,"true");
            }else{
                CTextStack_text(stack,"false");
            }
            i+=1;
            continue;
        }

        else if(strcmp(double_test,"%sc") == 0){
            char *value = va_arg(argptr,char*);
            if(value){
                CTextStack_text(stack,value);
                free(value);
            }
            i+=2;
            continue;
        }

        else if(strcmp(single_test,"%s") == 0){
            const char *value = va_arg(argptr,const char*);
            if(value){
                CTextStack_text(stack,value);
            }

            i+=1;
            continue;
        }
        else if(strcmp(double_test,"%tc") == 0){
            struct CTextStack *new_stack = (struct  CTextStack*)va_arg(argptr,void *);
            if(new_stack){
                char *result = CTextStack_self_transform_in_string_and_self_clear(new_stack);
                CTextStack_text(stack,result);
                free(result);
            }
            i+=2;
            continue;
        }

        else if(strcmp(single_test,"%t") == 0){
            struct CTextStack *new_stack = (struct  CTextStack*)va_arg(argptr,void *);
            if(new_stack){
                CTextStack_text(stack,new_stack->rendered_text);
            }
            i+=1;
            continue;
        }

        char element[2] = {format[i],'\0'};
        CTextStack_text(stack,element);

        }



    if(text_size > 0 && text_size> i){
        char element[2] = {format[text_size-1],'\0'};
        CTextStack_text(stack,element);
    }

    va_end(argptr);
}


long private_CText_transform_index(long size , long value){
    long formated_value = value;

    if(formated_value >= size){
        formated_value = size;
    }

    if(formated_value  < 0){
        formated_value = size + (formated_value +1);
    }
    if(formated_value <0){
        formated_value = 0;
    }
    return formated_value;
}

#endif

#endif


#if !defined(CWEB_MOCK_UNIVERSAL_SOCKET_DEFINE) && defined(CWEB_UNIVERSAL_SOCKET_DECLARATED)
/* MIT License

Copyright (c) 2024 Samuel Henrique

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */ 


#ifndef UniversalSocket_def
#define UniversalSocket_def

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



extern ssize_t Universal_send (int fd, const void *buf, size_t n, int flags){
    return send(fd,(char*)buf,n,flags);
}

#if !defined(_DEFAULT_INET_PTON_AND_INET_NTOP_)

extern const char *Universal_inet_ntop(int af, const void *src, char *dst, Universal_socket_len size){
    if (af == AF_INET) {
        unsigned char *p = (unsigned char *)src;
        snprintf(dst, size, "%u.%u.%u.%u", p[0], p[1], p[2], p[3]);
        return dst;
    } else if (af == AF_INET6) {
        unsigned char *p = (unsigned char *)src;
        int i;
        int offset = 0;

        for (i = 0; i < 8; i++) {
            if (offset < size) {
                offset += snprintf(dst + offset, size - offset, "%x", (p[i * 2] << 8) | p[i * 2 + 1]);
            }
            if (i < 7 && offset < size) {
                dst[offset++] = ':';
            }
        }
        return dst;
    }

    return NULL;
}

extern int Universal_inet_pton(int af, const char *src, void *dst){
    if (af == AF_INET) {
        unsigned char *p = (unsigned char *)dst;
        int values[4];
        if (sscanf(src, "%d.%d.%d.%d", &values[0], &values[1], &values[2], &values[3]) != 4) {
            return 0;
        }
        
        for (int i = 0; i < 4; i++) {
            if (values[i] < 0 || values[i] > 255) {
                return 0;
            }
            p[i] = (unsigned char)values[i];
        }

        return 1;
    } 
    else if (af == AF_INET6) {
        unsigned char *p = (unsigned char *)dst;
        int values[8];
        int count = 0;
        const char *ptr = src;
        int i;
        
        while (*ptr) {
            if (sscanf(ptr, "%x", &values[count]) != 1) {
                return 0;
            }
            count++;
            while (*ptr && isxdigit(*ptr)) {
                ptr++;
            }
            if (*ptr == ':') {
                ptr++;
            }
            if (count > 8) {
                return 0;
            }
        }

        if (count != 8) {
            return 0;
        }

        for (i = 0; i < 8; i++) {
            p[i * 2] = (unsigned char)(values[i] >> 8);
            p[i * 2 + 1] = (unsigned char)(values[i] & 0xFF);
        }

        return 1;
    }

    return 0;
}

#else

extern const char *Universal_inet_ntop(int af, const void *src, char *dst, Universal_socket_len size){
    return inet_ntop(af, src, dst, size);
}

extern int Universal_inet_pton(int af, const char *src, void *dst){
    return inet_pton(af, src, dst);
}

#endif

extern uint32_t Universal_ntohl(uint32_t netlong){
    return ntohl(netlong);
}

uint16_t Universal_htons(uint16_t value) {
    return htons(value);
}

uint16_t Universal_ntohs(uint16_t value) {
    return ntohs(value);
}

extern in_addr_t Universal_inet_addr(const char *ip) {
  return inet_addr(ip);
}



//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


extern int Universal_bind (int fd, Universal_sockaddr_in  *addrin , Universal_socket_len len){
    return bind(fd,(const struct sockaddr *)addrin,len);
}
extern int Universal_accept (int fd, Universal_sockaddr_in *addrin, Universal_socket_len *adrr_len){
    return accept(fd,( struct sockaddr *)addrin, adrr_len);
}
extern int Universal_listen (int fd, int n){
   return  listen(fd,n);
}

extern int Universal_connect(int sockfd, const Universal_sockaddr *addr, socklen_t addrlen){
    return connect(sockfd, addr, addrlen);
}


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






const char* Universal_gai_strerror(int e_code){
    return gai_strerror(e_code);
}


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int Universal_socket (int domain, int type, int protocol){
    return socket(domain,type,protocol);
}

int Universal_ZeroMemory(void *ptr, size_t num){

    if (ptr == NULL || num <= 0) {
        return -1;
    }

    memset(ptr, 0, (unsigned long long)num);
    return 0;
}

int Universal_setsockopt(
    Universal_socket_int sockfd,
    int level,
    int optname,
    const void *optval,
    Universal_socket_len optlen
){
    return setsockopt(sockfd, level, optname, (const char *)optval, optlen);
}

int Universal_getsockopt(
    Universal_socket_int sockfd,
    int level,
    int optname,
    void *optval,
    Universal_socket_len *optlen
){
    return getsockopt(sockfd, level, optname, (char *)optval, optlen);
}

Universal_hostent *Universal_gethostbyname(const char *hostname){
    return gethostbyname(hostname);
}



//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#if defined(__linux__)

extern const char* Universal_inet_ntoa(Universal_in_addr addr) {
  static char buffer[INET_ADDRSTRLEN];
  return inet_ntop(UNI_AF_INET, &addr, buffer, INET_ADDRSTRLEN);
}

extern ssize_t Universal_recv (int fd, void *buf, size_t n, int flags){
    return recv(fd, buf, n,flags);
}

#endif




//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#if defined(__linux__)


extern char *Universal_GetLastError(){
  return strerror(errno);
}



#endif







//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#if defined(__linux__)

extern int Universal_start_all (){
    return 0;
}

extern int Universal_end (){
    return 0;
}

extern int Universal_close (int fd){
    return close(fd);
}

//#if defined(_GET_ADDR_INFO_DEFAULT_)
int Universal_getaddrinfo(const char *node, const char *service, const Universal_addrinfo *hints, Universal_addrinfo **res){
    return getaddrinfo(node, service, hints, res);
}


void Universal_freeaddrinfo(Universal_addrinfo *addrinfo_ptr){
    freeaddrinfo(addrinfo_ptr);
}
//#endif





#endif




//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#if defined(_WIN32)

extern const char* Universal_inet_ntoa(Universal_in_addr addr) {
  return inet_ntoa(addr);
}

ssize_t private_Universal_recv_all(int fd, void *buf, size_t n){
  int max = 0;
  int received;

  while (max < n) {
    unsigned char *ptr = (unsigned char*)buf + max;
    received = recv(fd,(char*)ptr, n - max, 0);
  
    if (received <= 0) { 
      return max;
    }

    max += received;
  }

  return max;
}

extern ssize_t Universal_recv (int fd, void *buf, size_t n, int flags){

  if(flags == UNI_MSG_WAITALL){
    return private_Universal_recv_all(fd, buf, n);
  }

  return recv(fd, (char*)buf, n, flags);
}

#endif




//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#if defined(_WIN32)


extern char *Universal_GetLastError(){
  
  static char errorBuffer[256];

  DWORD dwError = WSAGetLastError();
  if (dwError == 0) {
      return (char*)"Nenhum erro";
  }

  FormatMessage(
      FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
      NULL,
      dwError,
      0,
      errorBuffer,
      sizeof(errorBuffer),
      NULL
  );

  return errorBuffer;
}



#endif





//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




#if defined(_WIN32)

extern int Universal_start_all (){
    WSADATA wsa;
    int error = WSAStartup(MAKEWORD(2, 2), &wsa);
    return error;
}

extern int Universal_end (){
   return  WSACleanup();
}

extern int Universal_close (int fd){
    return closesocket(fd);
}

//#if defined(_GET_ADDR_INFO_DEFAULT_)
int Universal_getaddrinfo(const char *node, const char *service, const Universal_addrinfo *hints, Universal_addrinfo **res){


    Universal_hostent *he;

    he = Universal_gethostbyname(node);

    if(he == NULL){
        return 1;
    }

    *res = (Universal_addrinfo *)malloc(sizeof(Universal_addrinfo));
    if (*res == NULL) {
        return 1;
    }

    (*res)->ai_flags = 0;
    (*res)->ai_family = UNI_AF_INET;
    (*res)->ai_socktype = UNI_SOCK_STREAM;
    (*res)->ai_protocol = UNI_IPPROTO_TCP;
    (*res)->ai_addrlen = sizeof(Universal_sockaddr_in);


    Universal_sockaddr_in *sa_in = (Universal_sockaddr_in *)malloc(sizeof(Universal_sockaddr_in));
    if (sa_in == NULL) {
        free(*res);
        return 1;
    }

    Universal_in_addr **addr_list;
    sa_in->sin_family = UNI_AF_INET;
    addr_list = (Universal_in_addr **)he->h_addr_list;
    sa_in->sin_addr = *addr_list[0];

    (*res)->ai_addr = (Universal_sockaddr *)sa_in;
    (*res)->ai_canonname = strdup(he->h_name);
    (*res)->ai_next = NULL;

    return 0;
}


void Universal_freeaddrinfo(Universal_addrinfo *addrinfo_ptr){

    free(addrinfo_ptr->ai_addr);
    free(addrinfo_ptr->ai_canonname);
    free(addrinfo_ptr);
}
//#endif

#endif

#endif

#endif 


#if !defined(CWEB_MOCK_CJSON_DEFINE) && defined(CWEB_CJSON_DECLARATED)
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

/* cJSON */
/* JSON parser in C. */

/* disable warnings about old C89 functions in MSVC */
#if !defined(_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER)
#define _CRT_SECURE_NO_DEPRECATE
#endif

#ifdef __GNUC__
#pragma GCC visibility push(default)
#endif
#if defined(_MSC_VER)
#pragma warning (push)
/* disable warning about single line comments in system headers */
#pragma warning (disable : 4001)
#endif

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <float.h>

#ifdef ENABLE_LOCALES
#include <locale.h>
#endif

#if defined(_MSC_VER)
#pragma warning (pop)
#endif
#ifdef __GNUC__
#pragma GCC visibility pop
#endif



/* define our own boolean type */
#ifdef true
#undef true
#endif
#define true ((cJSON_bool)1)

#ifdef false
#undef false
#endif
#define false ((cJSON_bool)0)

/* define isnan and isinf for ANSI C, if in C99 or above, isnan and isinf has been defined in math.h */
#ifndef isinf
#define isinf(d) (isnan((d - d)) && !isnan(d))
#endif
#ifndef isnan
#define isnan(d) (d != d)
#endif

#ifndef NAN
#ifdef _WIN32
#define NAN sqrt(-1.0)
#else
#define NAN 0.0/0.0
#endif
#endif

typedef struct {
    const unsigned char *json;
    size_t position;
} error;
static error global_error = { NULL, 0 };

CJSON_PUBLIC(const char *) cJSON_GetErrorPtr(void)
{
    return (const char*) (global_error.json + global_error.position);
}

CJSON_PUBLIC(char *) cJSON_GetStringValue(const cJSON * const item)
{
    if (!cJSON_IsString(item))
    {
        return NULL;
    }

    return item->valuestring;
}

CJSON_PUBLIC(double) cJSON_GetNumberValue(const cJSON * const item)
{
    if (!cJSON_IsNumber(item))
    {
        return (double) NAN;
    }

    return item->valuedouble;
}

/* This is a safeguard to prevent copy-pasters from using incompatible C and header files */
#if (CJSON_VERSION_MAJOR != 1) || (CJSON_VERSION_MINOR != 7) || (CJSON_VERSION_PATCH != 18)
    #error cJSON.h and cJSON.c have different versions. Make sure that both have the same.
#endif

CJSON_PUBLIC(const char*) cJSON_Version(void)
{
    static char version[15];
    sprintf(version, "%i.%i.%i", CJSON_VERSION_MAJOR, CJSON_VERSION_MINOR, CJSON_VERSION_PATCH);

    return version;
}

/* Case insensitive string comparison, doesn't consider two NULL pointers equal though */
static int case_insensitive_strcmp(const unsigned char *string1, const unsigned char *string2)
{
    if ((string1 == NULL) || (string2 == NULL))
    {
        return 1;
    }

    if (string1 == string2)
    {
        return 0;
    }

    for(; tolower(*string1) == tolower(*string2); (void)string1++, string2++)
    {
        if (*string1 == '\0')
        {
            return 0;
        }
    }

    return tolower(*string1) - tolower(*string2);
}

typedef struct internal_hooks
{
    void *(CJSON_CDECL *allocate)(size_t size);
    void (CJSON_CDECL *deallocate)(void *pointer);
    void *(CJSON_CDECL *reallocate)(void *pointer, size_t size);
} internal_hooks;

#if defined(_MSC_VER)
/* work around MSVC error C2322: '...' address of dllimport '...' is not static */
static void * CJSON_CDECL internal_malloc(size_t size)
{
    return malloc(size);
}
static void CJSON_CDECL internal_free(void *pointer)
{
    free(pointer);
}
static void * CJSON_CDECL internal_realloc(void *pointer, size_t size)
{
    return realloc(pointer, size);
}
#else
#define internal_malloc malloc
#define internal_free free
#define internal_realloc realloc
#endif

/* strlen of character literals resolved at compile time */
#define static_strlen(string_literal) (sizeof(string_literal) - sizeof(""))

static internal_hooks global_hooks = { internal_malloc, internal_free, internal_realloc };

static unsigned char* cJSON_strdup(const unsigned char* string, const internal_hooks * const hooks)
{
    size_t length = 0;
    unsigned char *copy = NULL;

    if (string == NULL)
    {
        return NULL;
    }

    length = strlen((const char*)string) + sizeof("");
    copy = (unsigned char*)hooks->allocate(length);
    if (copy == NULL)
    {
        return NULL;
    }
    memcpy(copy, string, length);

    return copy;
}

CJSON_PUBLIC(void) cJSON_InitHooks(cJSON_Hooks* hooks)
{
    if (hooks == NULL)
    {
        /* Reset hooks */
        global_hooks.allocate = malloc;
        global_hooks.deallocate = free;
        global_hooks.reallocate = realloc;
        return;
    }

    global_hooks.allocate = malloc;
    if (hooks->malloc_fn != NULL)
    {
        global_hooks.allocate = hooks->malloc_fn;
    }

    global_hooks.deallocate = free;
    if (hooks->free_fn != NULL)
    {
        global_hooks.deallocate = hooks->free_fn;
    }

    /* use realloc only if both free and malloc are used */
    global_hooks.reallocate = NULL;
    if ((global_hooks.allocate == malloc) && (global_hooks.deallocate == free))
    {
        global_hooks.reallocate = realloc;
    }
}

/* Internal constructor. */
static cJSON *cJSON_New_Item(const internal_hooks * const hooks)
{
    cJSON* node = (cJSON*)hooks->allocate(sizeof(cJSON));
    if (node)
    {
        memset(node, '\0', sizeof(cJSON));
    }

    return node;
}

/* Delete a cJSON structure. */
CJSON_PUBLIC(void) cJSON_Delete(cJSON *item)
{
    cJSON *next = NULL;
    while (item != NULL)
    {
        next = item->next;
        if (!(item->type & cJSON_IsReference) && (item->child != NULL))
        {
            cJSON_Delete(item->child);
        }
        if (!(item->type & cJSON_IsReference) && (item->valuestring != NULL))
        {
            global_hooks.deallocate(item->valuestring);
            item->valuestring = NULL;
        }
        if (!(item->type & cJSON_StringIsConst) && (item->string != NULL))
        {
            global_hooks.deallocate(item->string);
            item->string = NULL;
        }
        global_hooks.deallocate(item);
        item = next;
    }
}

/* get the decimal point character of the current locale */
static unsigned char get_decimal_point(void)
{
#ifdef ENABLE_LOCALES
    struct lconv *lconv = localeconv();
    return (unsigned char) lconv->decimal_point[0];
#else
    return '.';
#endif
}

typedef struct
{
    const unsigned char *content;
    size_t length;
    size_t offset;
    size_t depth; /* How deeply nested (in arrays/objects) is the input at the current offset. */
    internal_hooks hooks;
} parse_buffer;

/* check if the given size is left to read in a given parse buffer (starting with 1) */
#define can_read(buffer, size) ((buffer != NULL) && (((buffer)->offset + size) <= (buffer)->length))
/* check if the buffer can be accessed at the given index (starting with 0) */
#define can_access_at_index(buffer, index) ((buffer != NULL) && (((buffer)->offset + index) < (buffer)->length))
#define cannot_access_at_index(buffer, index) (!can_access_at_index(buffer, index))
/* get a pointer to the buffer at the position */
#define buffer_at_offset(buffer) ((buffer)->content + (buffer)->offset)

/* Parse the input text to generate a number, and populate the result into item. */
static cJSON_bool parse_number(cJSON * const item, parse_buffer * const input_buffer)
{
    double number = 0;
    unsigned char *after_end = NULL;
    unsigned char number_c_string[64];
    unsigned char decimal_point = get_decimal_point();
    size_t i = 0;

    if ((input_buffer == NULL) || (input_buffer->content == NULL))
    {
        return false;
    }

    /* copy the number into a temporary buffer and replace '.' with the decimal point
     * of the current locale (for strtod)
     * This also takes care of '\0' not necessarily being available for marking the end of the input */
    for (i = 0; (i < (sizeof(number_c_string) - 1)) && can_access_at_index(input_buffer, i); i++)
    {
        switch (buffer_at_offset(input_buffer)[i])
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '+':
            case '-':
            case 'e':
            case 'E':
                number_c_string[i] = buffer_at_offset(input_buffer)[i];
                break;

            case '.':
                number_c_string[i] = decimal_point;
                break;

            default:
                goto loop_end;
        }
    }
loop_end:
    number_c_string[i] = '\0';

    number = strtod((const char*)number_c_string, (char**)&after_end);
    if (number_c_string == after_end)
    {
        return false; /* parse_error */
    }

    item->valuedouble = number;

    /* use saturation in case of overflow */
    if (number >= INT_MAX)
    {
        item->valueint = INT_MAX;
    }
    else if (number <= (double)INT_MIN)
    {
        item->valueint = INT_MIN;
    }
    else
    {
        item->valueint = (int)number;
    }

    item->type = cJSON_Number;

    input_buffer->offset += (size_t)(after_end - number_c_string);
    return true;
}

/* don't ask me, but the original cJSON_SetNumberValue returns an integer or double */
CJSON_PUBLIC(double) cJSON_SetNumberHelper(cJSON *object, double number)
{
    if (number >= INT_MAX)
    {
        object->valueint = INT_MAX;
    }
    else if (number <= (double)INT_MIN)
    {
        object->valueint = INT_MIN;
    }
    else
    {
        object->valueint = (int)number;
    }

    return object->valuedouble = number;
}

/* Note: when passing a NULL valuestring, cJSON_SetValuestring treats this as an error and return NULL */
CJSON_PUBLIC(char*) cJSON_SetValuestring(cJSON *object, const char *valuestring)
{
    char *copy = NULL;
    /* if object's type is not cJSON_String or is cJSON_IsReference, it should not set valuestring */
    if ((object == NULL) || !(object->type & cJSON_String) || (object->type & cJSON_IsReference))
    {
        return NULL;
    }
    /* return NULL if the object is corrupted or valuestring is NULL */
    if (object->valuestring == NULL || valuestring == NULL)
    {
        return NULL;
    }
    if (strlen(valuestring) <= strlen(object->valuestring))
    {
        strcpy(object->valuestring, valuestring);
        return object->valuestring;
    }
    copy = (char*) cJSON_strdup((const unsigned char*)valuestring, &global_hooks);
    if (copy == NULL)
    {
        return NULL;
    }
    if (object->valuestring != NULL)
    {
        cJSON_free(object->valuestring);
    }
    object->valuestring = copy;

    return copy;
}

typedef struct
{
    unsigned char *buffer;
    size_t length;
    size_t offset;
    size_t depth; /* current nesting depth (for formatted printing) */
    cJSON_bool noalloc;
    cJSON_bool format; /* is this print a formatted print */
    internal_hooks hooks;
} printbuffer;

/* realloc printbuffer if necessary to have at least "needed" bytes more */
static unsigned char* ensure(printbuffer * const p, size_t needed)
{
    unsigned char *newbuffer = NULL;
    size_t newsize = 0;

    if ((p == NULL) || (p->buffer == NULL))
    {
        return NULL;
    }

    if ((p->length > 0) && (p->offset >= p->length))
    {
        /* make sure that offset is valid */
        return NULL;
    }

    if (needed > INT_MAX)
    {
        /* sizes bigger than INT_MAX are currently not supported */
        return NULL;
    }

    needed += p->offset + 1;
    if (needed <= p->length)
    {
        return p->buffer + p->offset;
    }

    if (p->noalloc) {
        return NULL;
    }

    /* calculate new buffer size */
    if (needed > (INT_MAX / 2))
    {
        /* overflow of int, use INT_MAX if possible */
        if (needed <= INT_MAX)
        {
            newsize = INT_MAX;
        }
        else
        {
            return NULL;
        }
    }
    else
    {
        newsize = needed * 2;
    }

    if (p->hooks.reallocate != NULL)
    {
        /* reallocate with realloc if available */
        newbuffer = (unsigned char*)p->hooks.reallocate(p->buffer, newsize);
        if (newbuffer == NULL)
        {
            p->hooks.deallocate(p->buffer);
            p->length = 0;
            p->buffer = NULL;

            return NULL;
        }
    }
    else
    {
        /* otherwise reallocate manually */
        newbuffer = (unsigned char*)p->hooks.allocate(newsize);
        if (!newbuffer)
        {
            p->hooks.deallocate(p->buffer);
            p->length = 0;
            p->buffer = NULL;

            return NULL;
        }

        memcpy(newbuffer, p->buffer, p->offset + 1);
        p->hooks.deallocate(p->buffer);
    }
    p->length = newsize;
    p->buffer = newbuffer;

    return newbuffer + p->offset;
}

/* calculate the new length of the string in a printbuffer and update the offset */
static void update_offset(printbuffer * const buffer)
{
    const unsigned char *buffer_pointer = NULL;
    if ((buffer == NULL) || (buffer->buffer == NULL))
    {
        return;
    }
    buffer_pointer = buffer->buffer + buffer->offset;

    buffer->offset += strlen((const char*)buffer_pointer);
}

/* securely comparison of floating-point variables */
static cJSON_bool compare_double(double a, double b)
{
    double maxVal = fabs(a) > fabs(b) ? fabs(a) : fabs(b);
    return (fabs(a - b) <= maxVal * DBL_EPSILON);
}

/* Render the number nicely from the given item into a string. */
static cJSON_bool print_number(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    double d = item->valuedouble;
    int length = 0;
    size_t i = 0;
    unsigned char number_buffer[26] = {0}; /* temporary buffer to print the number into */
    unsigned char decimal_point = get_decimal_point();
    double test = 0.0;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* This checks for NaN and Infinity */
    if (isnan(d) || isinf(d))
    {
        length = sprintf((char*)number_buffer, "null");
    }
	else if(d == (double)item->valueint)
	{
		length = sprintf((char*)number_buffer, "%d", item->valueint);
	}
    else
    {
        /* Try 15 decimal places of precision to avoid nonsignificant nonzero digits */
        length = sprintf((char*)number_buffer, "%1.15g", d);

        /* Check whether the original double can be recovered */
        if ((sscanf((char*)number_buffer, "%lg", &test) != 1) || !compare_double((double)test, d))
        {
            /* If not, print with 17 decimal places of precision */
            length = sprintf((char*)number_buffer, "%1.17g", d);
        }
    }

    /* sprintf failed or buffer overrun occurred */
    if ((length < 0) || (length > (int)(sizeof(number_buffer) - 1)))
    {
        return false;
    }

    /* reserve appropriate space in the output */
    output_pointer = ensure(output_buffer, (size_t)length + sizeof(""));
    if (output_pointer == NULL)
    {
        return false;
    }

    /* copy the printed number to the output and replace locale
     * dependent decimal point with '.' */
    for (i = 0; i < ((size_t)length); i++)
    {
        if (number_buffer[i] == decimal_point)
        {
            output_pointer[i] = '.';
            continue;
        }

        output_pointer[i] = number_buffer[i];
    }
    output_pointer[i] = '\0';

    output_buffer->offset += (size_t)length;

    return true;
}

/* parse 4 digit hexadecimal number */
static unsigned parse_hex4(const unsigned char * const input)
{
    unsigned int h = 0;
    size_t i = 0;

    for (i = 0; i < 4; i++)
    {
        /* parse digit */
        if ((input[i] >= '0') && (input[i] <= '9'))
        {
            h += (unsigned int) input[i] - '0';
        }
        else if ((input[i] >= 'A') && (input[i] <= 'F'))
        {
            h += (unsigned int) 10 + input[i] - 'A';
        }
        else if ((input[i] >= 'a') && (input[i] <= 'f'))
        {
            h += (unsigned int) 10 + input[i] - 'a';
        }
        else /* invalid */
        {
            return 0;
        }

        if (i < 3)
        {
            /* shift left to make place for the next nibble */
            h = h << 4;
        }
    }

    return h;
}

/* converts a UTF-16 literal to UTF-8
 * A literal can be one or two sequences of the form \uXXXX */
static unsigned char utf16_literal_to_utf8(const unsigned char * const input_pointer, const unsigned char * const input_end, unsigned char **output_pointer)
{
    long unsigned int codepoint = 0;
    unsigned int first_code = 0;
    const unsigned char *first_sequence = input_pointer;
    unsigned char utf8_length = 0;
    unsigned char utf8_position = 0;
    unsigned char sequence_length = 0;
    unsigned char first_byte_mark = 0;

    if ((input_end - first_sequence) < 6)
    {
        /* input ends unexpectedly */
        goto fail;
    }

    /* get the first utf16 sequence */
    first_code = parse_hex4(first_sequence + 2);

    /* check that the code is valid */
    if (((first_code >= 0xDC00) && (first_code <= 0xDFFF)))
    {
        goto fail;
    }

    /* UTF16 surrogate pair */
    if ((first_code >= 0xD800) && (first_code <= 0xDBFF))
    {
        const unsigned char *second_sequence = first_sequence + 6;
        unsigned int second_code = 0;
        sequence_length = 12; /* \uXXXX\uXXXX */

        if ((input_end - second_sequence) < 6)
        {
            /* input ends unexpectedly */
            goto fail;
        }

        if ((second_sequence[0] != '\\') || (second_sequence[1] != 'u'))
        {
            /* missing second half of the surrogate pair */
            goto fail;
        }

        /* get the second utf16 sequence */
        second_code = parse_hex4(second_sequence + 2);
        /* check that the code is valid */
        if ((second_code < 0xDC00) || (second_code > 0xDFFF))
        {
            /* invalid second half of the surrogate pair */
            goto fail;
        }


        /* calculate the unicode codepoint from the surrogate pair */
        codepoint = 0x10000 + (((first_code & 0x3FF) << 10) | (second_code & 0x3FF));
    }
    else
    {
        sequence_length = 6; /* \uXXXX */
        codepoint = first_code;
    }

    /* encode as UTF-8
     * takes at maximum 4 bytes to encode:
     * 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx */
    if (codepoint < 0x80)
    {
        /* normal ascii, encoding 0xxxxxxx */
        utf8_length = 1;
    }
    else if (codepoint < 0x800)
    {
        /* two bytes, encoding 110xxxxx 10xxxxxx */
        utf8_length = 2;
        first_byte_mark = 0xC0; /* 11000000 */
    }
    else if (codepoint < 0x10000)
    {
        /* three bytes, encoding 1110xxxx 10xxxxxx 10xxxxxx */
        utf8_length = 3;
        first_byte_mark = 0xE0; /* 11100000 */
    }
    else if (codepoint <= 0x10FFFF)
    {
        /* four bytes, encoding 1110xxxx 10xxxxxx 10xxxxxx 10xxxxxx */
        utf8_length = 4;
        first_byte_mark = 0xF0; /* 11110000 */
    }
    else
    {
        /* invalid unicode codepoint */
        goto fail;
    }

    /* encode as utf8 */
    for (utf8_position = (unsigned char)(utf8_length - 1); utf8_position > 0; utf8_position--)
    {
        /* 10xxxxxx */
        (*output_pointer)[utf8_position] = (unsigned char)((codepoint | 0x80) & 0xBF);
        codepoint >>= 6;
    }
    /* encode first byte */
    if (utf8_length > 1)
    {
        (*output_pointer)[0] = (unsigned char)((codepoint | first_byte_mark) & 0xFF);
    }
    else
    {
        (*output_pointer)[0] = (unsigned char)(codepoint & 0x7F);
    }

    *output_pointer += utf8_length;

    return sequence_length;

fail:
    return 0;
}

/* Parse the input text into an unescaped cinput, and populate item. */
static cJSON_bool parse_string(cJSON * const item, parse_buffer * const input_buffer)
{
    const unsigned char *input_pointer = buffer_at_offset(input_buffer) + 1;
    const unsigned char *input_end = buffer_at_offset(input_buffer) + 1;
    unsigned char *output_pointer = NULL;
    unsigned char *output = NULL;

    /* not a string */
    if (buffer_at_offset(input_buffer)[0] != '\"')
    {
        goto fail;
    }

    {
        /* calculate approximate size of the output (overestimate) */
        size_t allocation_length = 0;
        size_t skipped_bytes = 0;
        while (((size_t)(input_end - input_buffer->content) < input_buffer->length) && (*input_end != '\"'))
        {
            /* is escape sequence */
            if (input_end[0] == '\\')
            {
                if ((size_t)(input_end + 1 - input_buffer->content) >= input_buffer->length)
                {
                    /* prevent buffer overflow when last input character is a backslash */
                    goto fail;
                }
                skipped_bytes++;
                input_end++;
            }
            input_end++;
        }
        if (((size_t)(input_end - input_buffer->content) >= input_buffer->length) || (*input_end != '\"'))
        {
            goto fail; /* string ended unexpectedly */
        }

        /* This is at most how much we need for the output */
        allocation_length = (size_t) (input_end - buffer_at_offset(input_buffer)) - skipped_bytes;
        output = (unsigned char*)input_buffer->hooks.allocate(allocation_length + sizeof(""));
        if (output == NULL)
        {
            goto fail; /* allocation failure */
        }
    }

    output_pointer = output;
    /* loop through the string literal */
    while (input_pointer < input_end)
    {
        if (*input_pointer != '\\')
        {
            *output_pointer++ = *input_pointer++;
        }
        /* escape sequence */
        else
        {
            unsigned char sequence_length = 2;
            if ((input_end - input_pointer) < 1)
            {
                goto fail;
            }

            switch (input_pointer[1])
            {
                case 'b':
                    *output_pointer++ = '\b';
                    break;
                case 'f':
                    *output_pointer++ = '\f';
                    break;
                case 'n':
                    *output_pointer++ = '\n';
                    break;
                case 'r':
                    *output_pointer++ = '\r';
                    break;
                case 't':
                    *output_pointer++ = '\t';
                    break;
                case '\"':
                case '\\':
                case '/':
                    *output_pointer++ = input_pointer[1];
                    break;

                /* UTF-16 literal */
                case 'u':
                    sequence_length = utf16_literal_to_utf8(input_pointer, input_end, &output_pointer);
                    if (sequence_length == 0)
                    {
                        /* failed to convert UTF16-literal to UTF-8 */
                        goto fail;
                    }
                    break;

                default:
                    goto fail;
            }
            input_pointer += sequence_length;
        }
    }

    /* zero terminate the output */
    *output_pointer = '\0';

    item->type = cJSON_String;
    item->valuestring = (char*)output;

    input_buffer->offset = (size_t) (input_end - input_buffer->content);
    input_buffer->offset++;

    return true;

fail:
    if (output != NULL)
    {
        input_buffer->hooks.deallocate(output);
        output = NULL;
    }

    if (input_pointer != NULL)
    {
        input_buffer->offset = (size_t)(input_pointer - input_buffer->content);
    }

    return false;
}

/* Render the cstring provided to an escaped version that can be printed. */
static cJSON_bool print_string_ptr(const unsigned char * const input, printbuffer * const output_buffer)
{
    const unsigned char *input_pointer = NULL;
    unsigned char *output = NULL;
    unsigned char *output_pointer = NULL;
    size_t output_length = 0;
    /* numbers of additional characters needed for escaping */
    size_t escape_characters = 0;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* empty string */
    if (input == NULL)
    {
        output = ensure(output_buffer, sizeof("\"\""));
        if (output == NULL)
        {
            return false;
        }
        strcpy((char*)output, "\"\"");

        return true;
    }

    /* set "flag" to 1 if something needs to be escaped */
    for (input_pointer = input; *input_pointer; input_pointer++)
    {
        switch (*input_pointer)
        {
            case '\"':
            case '\\':
            case '\b':
            case '\f':
            case '\n':
            case '\r':
            case '\t':
                /* one character escape sequence */
                escape_characters++;
                break;
            default:
                if (*input_pointer < 32)
                {
                    /* UTF-16 escape sequence uXXXX */
                    escape_characters += 5;
                }
                break;
        }
    }
    output_length = (size_t)(input_pointer - input) + escape_characters;

    output = ensure(output_buffer, output_length + sizeof("\"\""));
    if (output == NULL)
    {
        return false;
    }

    /* no characters have to be escaped */
    if (escape_characters == 0)
    {
        output[0] = '\"';
        memcpy(output + 1, input, output_length);
        output[output_length + 1] = '\"';
        output[output_length + 2] = '\0';

        return true;
    }

    output[0] = '\"';
    output_pointer = output + 1;
    /* copy the string */
    for (input_pointer = input; *input_pointer != '\0'; (void)input_pointer++, output_pointer++)
    {
        if ((*input_pointer > 31) && (*input_pointer != '\"') && (*input_pointer != '\\'))
        {
            /* normal character, copy */
            *output_pointer = *input_pointer;
        }
        else
        {
            /* character needs to be escaped */
            *output_pointer++ = '\\';
            switch (*input_pointer)
            {
                case '\\':
                    *output_pointer = '\\';
                    break;
                case '\"':
                    *output_pointer = '\"';
                    break;
                case '\b':
                    *output_pointer = 'b';
                    break;
                case '\f':
                    *output_pointer = 'f';
                    break;
                case '\n':
                    *output_pointer = 'n';
                    break;
                case '\r':
                    *output_pointer = 'r';
                    break;
                case '\t':
                    *output_pointer = 't';
                    break;
                default:
                    /* escape and print as unicode codepoint */
                    sprintf((char*)output_pointer, "u%04x", *input_pointer);
                    output_pointer += 4;
                    break;
            }
        }
    }
    output[output_length + 1] = '\"';
    output[output_length + 2] = '\0';

    return true;
}

/* Invoke print_string_ptr (which is useful) on an item. */
static cJSON_bool print_string(const cJSON * const item, printbuffer * const p)
{
    return print_string_ptr((unsigned char*)item->valuestring, p);
}

/* Predeclare these prototypes. */
static cJSON_bool parse_value(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_value(const cJSON * const item, printbuffer * const output_buffer);
static cJSON_bool parse_array(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_array(const cJSON * const item, printbuffer * const output_buffer);
static cJSON_bool parse_object(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_object(const cJSON * const item, printbuffer * const output_buffer);

/* Utility to jump whitespace and cr/lf */
static parse_buffer *buffer_skip_whitespace(parse_buffer * const buffer)
{
    if ((buffer == NULL) || (buffer->content == NULL))
    {
        return NULL;
    }

    if (cannot_access_at_index(buffer, 0))
    {
        return buffer;
    }

    while (can_access_at_index(buffer, 0) && (buffer_at_offset(buffer)[0] <= 32))
    {
       buffer->offset++;
    }

    if (buffer->offset == buffer->length)
    {
        buffer->offset--;
    }

    return buffer;
}

/* skip the UTF-8 BOM (byte order mark) if it is at the beginning of a buffer */
static parse_buffer *skip_utf8_bom(parse_buffer * const buffer)
{
    if ((buffer == NULL) || (buffer->content == NULL) || (buffer->offset != 0))
    {
        return NULL;
    }

    if (can_access_at_index(buffer, 4) && (strncmp((const char*)buffer_at_offset(buffer), "\xEF\xBB\xBF", 3) == 0))
    {
        buffer->offset += 3;
    }

    return buffer;
}

CJSON_PUBLIC(cJSON *) cJSON_ParseWithOpts(const char *value, const char **return_parse_end, cJSON_bool require_null_terminated)
{
    size_t buffer_length;

    if (NULL == value)
    {
        return NULL;
    }

    /* Adding null character size due to require_null_terminated. */
    buffer_length = strlen(value) + sizeof("");

    return cJSON_ParseWithLengthOpts(value, buffer_length, return_parse_end, require_null_terminated);
}

/* Parse an object - create a new root, and populate. */
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLengthOpts(const char *value, size_t buffer_length, const char **return_parse_end, cJSON_bool require_null_terminated)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    cJSON *item = NULL;

    /* reset error position */
    global_error.json = NULL;
    global_error.position = 0;

    if (value == NULL || 0 == buffer_length)
    {
        goto fail;
    }

    buffer.content = (const unsigned char*)value;
    buffer.length = buffer_length;
    buffer.offset = 0;
    buffer.hooks = global_hooks;

    item = cJSON_New_Item(&global_hooks);
    if (item == NULL) /* memory fail */
    {
        goto fail;
    }

    if (!parse_value(item, buffer_skip_whitespace(skip_utf8_bom(&buffer))))
    {
        /* parse failure. ep is set. */
        goto fail;
    }

    /* if we require null-terminated JSON without appended garbage, skip and then check for a null terminator */
    if (require_null_terminated)
    {
        buffer_skip_whitespace(&buffer);
        if ((buffer.offset >= buffer.length) || buffer_at_offset(&buffer)[0] != '\0')
        {
            goto fail;
        }
    }
    if (return_parse_end)
    {
        *return_parse_end = (const char*)buffer_at_offset(&buffer);
    }

    return item;

fail:
    if (item != NULL)
    {
        cJSON_Delete(item);
    }

    if (value != NULL)
    {
        error local_error;
        local_error.json = (const unsigned char*)value;
        local_error.position = 0;

        if (buffer.offset < buffer.length)
        {
            local_error.position = buffer.offset;
        }
        else if (buffer.length > 0)
        {
            local_error.position = buffer.length - 1;
        }

        if (return_parse_end != NULL)
        {
            *return_parse_end = (const char*)local_error.json + local_error.position;
        }

        global_error = local_error;
    }

    return NULL;
}

/* Default options for cJSON_Parse */
CJSON_PUBLIC(cJSON *) cJSON_Parse(const char *value)
{
    return cJSON_ParseWithOpts(value, 0, 0);
}

CJSON_PUBLIC(cJSON *) cJSON_ParseWithLength(const char *value, size_t buffer_length)
{
    return cJSON_ParseWithLengthOpts(value, buffer_length, 0, 0);
}

#define cjson_min(a, b) (((a) < (b)) ? (a) : (b))

static unsigned char *print(const cJSON * const item, cJSON_bool format, const internal_hooks * const hooks)
{
    static const size_t default_buffer_size = 256;
    printbuffer buffer[1];
    unsigned char *printed = NULL;

    memset(buffer, 0, sizeof(buffer));

    /* create buffer */
    buffer->buffer = (unsigned char*) hooks->allocate(default_buffer_size);
    buffer->length = default_buffer_size;
    buffer->format = format;
    buffer->hooks = *hooks;
    if (buffer->buffer == NULL)
    {
        goto fail;
    }

    /* print the value */
    if (!print_value(item, buffer))
    {
        goto fail;
    }
    update_offset(buffer);

    /* check if reallocate is available */
    if (hooks->reallocate != NULL)
    {
        printed = (unsigned char*) hooks->reallocate(buffer->buffer, buffer->offset + 1);
        if (printed == NULL) {
            goto fail;
        }
        buffer->buffer = NULL;
    }
    else /* otherwise copy the JSON over to a new buffer */
    {
        printed = (unsigned char*) hooks->allocate(buffer->offset + 1);
        if (printed == NULL)
        {
            goto fail;
        }
        memcpy(printed, buffer->buffer, cjson_min(buffer->length, buffer->offset + 1));
        printed[buffer->offset] = '\0'; /* just to be sure */

        /* free the buffer */
        hooks->deallocate(buffer->buffer);
        buffer->buffer = NULL;
    }

    return printed;

fail:
    if (buffer->buffer != NULL)
    {
        hooks->deallocate(buffer->buffer);
        buffer->buffer = NULL;
    }

    if (printed != NULL)
    {
        hooks->deallocate(printed);
        printed = NULL;
    }

    return NULL;
}

/* Render a cJSON item/entity/structure to text. */
CJSON_PUBLIC(char *) cJSON_Print(const cJSON *item)
{
    return (char*)print(item, true, &global_hooks);
}

CJSON_PUBLIC(char *) cJSON_PrintUnformatted(const cJSON *item)
{
    return (char*)print(item, false, &global_hooks);
}

CJSON_PUBLIC(char *) cJSON_PrintBuffered(const cJSON *item, int prebuffer, cJSON_bool fmt)
{
    printbuffer p = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };

    if (prebuffer < 0)
    {
        return NULL;
    }

    p.buffer = (unsigned char*)global_hooks.allocate((size_t)prebuffer);
    if (!p.buffer)
    {
        return NULL;
    }

    p.length = (size_t)prebuffer;
    p.offset = 0;
    p.noalloc = false;
    p.format = fmt;
    p.hooks = global_hooks;

    if (!print_value(item, &p))
    {
        global_hooks.deallocate(p.buffer);
        p.buffer = NULL;
        return NULL;
    }

    return (char*)p.buffer;
}

CJSON_PUBLIC(cJSON_bool) cJSON_PrintPreallocated(cJSON *item, char *buffer, const int length, const cJSON_bool format)
{
    printbuffer p = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };

    if ((length < 0) || (buffer == NULL))
    {
        return false;
    }

    p.buffer = (unsigned char*)buffer;
    p.length = (size_t)length;
    p.offset = 0;
    p.noalloc = true;
    p.format = format;
    p.hooks = global_hooks;

    return print_value(item, &p);
}

/* Parser core - when encountering text, process appropriately. */
static cJSON_bool parse_value(cJSON * const item, parse_buffer * const input_buffer)
{
    if ((input_buffer == NULL) || (input_buffer->content == NULL))
    {
        return false; /* no input */
    }

    /* parse the different types of values */
    /* null */
    if (can_read(input_buffer, 4) && (strncmp((const char*)buffer_at_offset(input_buffer), "null", 4) == 0))
    {
        item->type = cJSON_NULL;
        input_buffer->offset += 4;
        return true;
    }
    /* false */
    if (can_read(input_buffer, 5) && (strncmp((const char*)buffer_at_offset(input_buffer), "false", 5) == 0))
    {
        item->type = cJSON_False;
        input_buffer->offset += 5;
        return true;
    }
    /* true */
    if (can_read(input_buffer, 4) && (strncmp((const char*)buffer_at_offset(input_buffer), "true", 4) == 0))
    {
        item->type = cJSON_True;
        item->valueint = 1;
        input_buffer->offset += 4;
        return true;
    }
    /* string */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '\"'))
    {
        return parse_string(item, input_buffer);
    }
    /* number */
    if (can_access_at_index(input_buffer, 0) && ((buffer_at_offset(input_buffer)[0] == '-') || ((buffer_at_offset(input_buffer)[0] >= '0') && (buffer_at_offset(input_buffer)[0] <= '9'))))
    {
        return parse_number(item, input_buffer);
    }
    /* array */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '['))
    {
        return parse_array(item, input_buffer);
    }
    /* object */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '{'))
    {
        return parse_object(item, input_buffer);
    }

    return false;
}

/* Render a value to text. */
static cJSON_bool print_value(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output = NULL;

    if ((item == NULL) || (output_buffer == NULL))
    {
        return false;
    }

    switch ((item->type) & 0xFF)
    {
        case cJSON_NULL:
            output = ensure(output_buffer, 5);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "null");
            return true;

        case cJSON_False:
            output = ensure(output_buffer, 6);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "false");
            return true;

        case cJSON_True:
            output = ensure(output_buffer, 5);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "true");
            return true;

        case cJSON_Number:
            return print_number(item, output_buffer);

        case cJSON_Raw:
        {
            size_t raw_length = 0;
            if (item->valuestring == NULL)
            {
                return false;
            }

            raw_length = strlen(item->valuestring) + sizeof("");
            output = ensure(output_buffer, raw_length);
            if (output == NULL)
            {
                return false;
            }
            memcpy(output, item->valuestring, raw_length);
            return true;
        }

        case cJSON_String:
            return print_string(item, output_buffer);

        case cJSON_Array:
            return print_array(item, output_buffer);

        case cJSON_Object:
            return print_object(item, output_buffer);

        default:
            return false;
    }
}

/* Build an array from input text. */
static cJSON_bool parse_array(cJSON * const item, parse_buffer * const input_buffer)
{
    cJSON *head = NULL; /* head of the linked list */
    cJSON *current_item = NULL;

    if (input_buffer->depth >= CJSON_NESTING_LIMIT)
    {
        return false; /* to deeply nested */
    }
    input_buffer->depth++;

    if (buffer_at_offset(input_buffer)[0] != '[')
    {
        /* not an array */
        goto fail;
    }

    input_buffer->offset++;
    buffer_skip_whitespace(input_buffer);
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ']'))
    {
        /* empty array */
        goto success;
    }

    /* check if we skipped to the end of the buffer */
    if (cannot_access_at_index(input_buffer, 0))
    {
        input_buffer->offset--;
        goto fail;
    }

    /* step back to character in front of the first element */
    input_buffer->offset--;
    /* loop through the comma separated array elements */
    do
    {
        /* allocate next item */
        cJSON *new_item = cJSON_New_Item(&(input_buffer->hooks));
        if (new_item == NULL)
        {
            goto fail; /* allocation failure */
        }

        /* attach next item to list */
        if (head == NULL)
        {
            /* start the linked list */
            current_item = head = new_item;
        }
        else
        {
            /* add to the end and advance */
            current_item->next = new_item;
            new_item->prev = current_item;
            current_item = new_item;
        }

        /* parse next value */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_value(current_item, input_buffer))
        {
            goto fail; /* failed to parse value */
        }
        buffer_skip_whitespace(input_buffer);
    }
    while (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ','));

    if (cannot_access_at_index(input_buffer, 0) || buffer_at_offset(input_buffer)[0] != ']')
    {
        goto fail; /* expected end of array */
    }

success:
    input_buffer->depth--;

    if (head != NULL) {
        head->prev = current_item;
    }

    item->type = cJSON_Array;
    item->child = head;

    input_buffer->offset++;

    return true;

fail:
    if (head != NULL)
    {
        cJSON_Delete(head);
    }

    return false;
}

/* Render an array to text */
static cJSON_bool print_array(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    size_t length = 0;
    cJSON *current_element = item->child;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* Compose the output array. */
    /* opening square bracket */
    output_pointer = ensure(output_buffer, 1);
    if (output_pointer == NULL)
    {
        return false;
    }

    *output_pointer = '[';
    output_buffer->offset++;
    output_buffer->depth++;

    while (current_element != NULL)
    {
        if (!print_value(current_element, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);
        if (current_element->next)
        {
            length = (size_t) (output_buffer->format ? 2 : 1);
            output_pointer = ensure(output_buffer, length + 1);
            if (output_pointer == NULL)
            {
                return false;
            }
            *output_pointer++ = ',';
            if(output_buffer->format)
            {
                *output_pointer++ = ' ';
            }
            *output_pointer = '\0';
            output_buffer->offset += length;
        }
        current_element = current_element->next;
    }

    output_pointer = ensure(output_buffer, 2);
    if (output_pointer == NULL)
    {
        return false;
    }
    *output_pointer++ = ']';
    *output_pointer = '\0';
    output_buffer->depth--;

    return true;
}

/* Build an object from the text. */
static cJSON_bool parse_object(cJSON * const item, parse_buffer * const input_buffer)
{
    cJSON *head = NULL; /* linked list head */
    cJSON *current_item = NULL;

    if (input_buffer->depth >= CJSON_NESTING_LIMIT)
    {
        return false; /* to deeply nested */
    }
    input_buffer->depth++;

    if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != '{'))
    {
        goto fail; /* not an object */
    }

    input_buffer->offset++;
    buffer_skip_whitespace(input_buffer);
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '}'))
    {
        goto success; /* empty object */
    }

    /* check if we skipped to the end of the buffer */
    if (cannot_access_at_index(input_buffer, 0))
    {
        input_buffer->offset--;
        goto fail;
    }

    /* step back to character in front of the first element */
    input_buffer->offset--;
    /* loop through the comma separated array elements */
    do
    {
        /* allocate next item */
        cJSON *new_item = cJSON_New_Item(&(input_buffer->hooks));
        if (new_item == NULL)
        {
            goto fail; /* allocation failure */
        }

        /* attach next item to list */
        if (head == NULL)
        {
            /* start the linked list */
            current_item = head = new_item;
        }
        else
        {
            /* add to the end and advance */
            current_item->next = new_item;
            new_item->prev = current_item;
            current_item = new_item;
        }

        if (cannot_access_at_index(input_buffer, 1))
        {
            goto fail; /* nothing comes after the comma */
        }

        /* parse the name of the child */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_string(current_item, input_buffer))
        {
            goto fail; /* failed to parse name */
        }
        buffer_skip_whitespace(input_buffer);

        /* swap valuestring and string, because we parsed the name */
        current_item->string = current_item->valuestring;
        current_item->valuestring = NULL;

        if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != ':'))
        {
            goto fail; /* invalid object */
        }

        /* parse the value */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_value(current_item, input_buffer))
        {
            goto fail; /* failed to parse value */
        }
        buffer_skip_whitespace(input_buffer);
    }
    while (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ','));

    if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != '}'))
    {
        goto fail; /* expected end of object */
    }

success:
    input_buffer->depth--;

    if (head != NULL) {
        head->prev = current_item;
    }

    item->type = cJSON_Object;
    item->child = head;

    input_buffer->offset++;
    return true;

fail:
    if (head != NULL)
    {
        cJSON_Delete(head);
    }

    return false;
}

/* Render an object to text. */
static cJSON_bool print_object(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    size_t length = 0;
    cJSON *current_item = item->child;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* Compose the output: */
    length = (size_t) (output_buffer->format ? 2 : 1); /* fmt: {\n */
    output_pointer = ensure(output_buffer, length + 1);
    if (output_pointer == NULL)
    {
        return false;
    }

    *output_pointer++ = '{';
    output_buffer->depth++;
    if (output_buffer->format)
    {
        *output_pointer++ = '\n';
    }
    output_buffer->offset += length;

    while (current_item)
    {
        if (output_buffer->format)
        {
            size_t i;
            output_pointer = ensure(output_buffer, output_buffer->depth);
            if (output_pointer == NULL)
            {
                return false;
            }
            for (i = 0; i < output_buffer->depth; i++)
            {
                *output_pointer++ = '\t';
            }
            output_buffer->offset += output_buffer->depth;
        }

        /* print key */
        if (!print_string_ptr((unsigned char*)current_item->string, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);

        length = (size_t) (output_buffer->format ? 2 : 1);
        output_pointer = ensure(output_buffer, length);
        if (output_pointer == NULL)
        {
            return false;
        }
        *output_pointer++ = ':';
        if (output_buffer->format)
        {
            *output_pointer++ = '\t';
        }
        output_buffer->offset += length;

        /* print value */
        if (!print_value(current_item, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);

        /* print comma if not last */
        length = ((size_t)(output_buffer->format ? 1 : 0) + (size_t)(current_item->next ? 1 : 0));
        output_pointer = ensure(output_buffer, length + 1);
        if (output_pointer == NULL)
        {
            return false;
        }
        if (current_item->next)
        {
            *output_pointer++ = ',';
        }

        if (output_buffer->format)
        {
            *output_pointer++ = '\n';
        }
        *output_pointer = '\0';
        output_buffer->offset += length;

        current_item = current_item->next;
    }

    output_pointer = ensure(output_buffer, output_buffer->format ? (output_buffer->depth + 1) : 2);
    if (output_pointer == NULL)
    {
        return false;
    }
    if (output_buffer->format)
    {
        size_t i;
        for (i = 0; i < (output_buffer->depth - 1); i++)
        {
            *output_pointer++ = '\t';
        }
    }
    *output_pointer++ = '}';
    *output_pointer = '\0';
    output_buffer->depth--;

    return true;
}

/* Get Array size/item / object item. */
CJSON_PUBLIC(int) cJSON_GetArraySize(const cJSON *array)
{
    cJSON *child = NULL;
    size_t size = 0;

    if (array == NULL)
    {
        return 0;
    }

    child = array->child;

    while(child != NULL)
    {
        size++;
        child = child->next;
    }

    /* FIXME: Can overflow here. Cannot be fixed without breaking the API */

    return (int)size;
}

static cJSON* get_array_item(const cJSON *array, size_t index)
{
    cJSON *current_child = NULL;

    if (array == NULL)
    {
        return NULL;
    }

    current_child = array->child;
    while ((current_child != NULL) && (index > 0))
    {
        index--;
        current_child = current_child->next;
    }

    return current_child;
}

CJSON_PUBLIC(cJSON *) cJSON_GetArrayItem(const cJSON *array, int index)
{
    if (index < 0)
    {
        return NULL;
    }

    return get_array_item(array, (size_t)index);
}

static cJSON *get_object_item(const cJSON * const object, const char * const name, const cJSON_bool case_sensitive)
{
    cJSON *current_element = NULL;

    if ((object == NULL) || (name == NULL))
    {
        return NULL;
    }

    current_element = object->child;
    if (case_sensitive)
    {
        while ((current_element != NULL) && (current_element->string != NULL) && (strcmp(name, current_element->string) != 0))
        {
            current_element = current_element->next;
        }
    }
    else
    {
        while ((current_element != NULL) && (case_insensitive_strcmp((const unsigned char*)name, (const unsigned char*)(current_element->string)) != 0))
        {
            current_element = current_element->next;
        }
    }

    if ((current_element == NULL) || (current_element->string == NULL)) {
        return NULL;
    }

    return current_element;
}

CJSON_PUBLIC(cJSON *) cJSON_GetObjectItem(const cJSON * const object, const char * const string)
{
    return get_object_item(object, string, false);
}

CJSON_PUBLIC(cJSON *) cJSON_GetObjectItemCaseSensitive(const cJSON * const object, const char * const string)
{
    return get_object_item(object, string, true);
}

CJSON_PUBLIC(cJSON_bool) cJSON_HasObjectItem(const cJSON *object, const char *string)
{
    return cJSON_GetObjectItem(object, string) ? 1 : 0;
}

/* Utility for array list handling. */
static void suffix_object(cJSON *prev, cJSON *item)
{
    prev->next = item;
    item->prev = prev;
}

/* Utility for handling references. */
static cJSON *create_reference(const cJSON *item, const internal_hooks * const hooks)
{
    cJSON *reference = NULL;
    if (item == NULL)
    {
        return NULL;
    }

    reference = cJSON_New_Item(hooks);
    if (reference == NULL)
    {
        return NULL;
    }

    memcpy(reference, item, sizeof(cJSON));
    reference->string = NULL;
    reference->type |= cJSON_IsReference;
    reference->next = reference->prev = NULL;
    return reference;
}

static cJSON_bool add_item_to_array(cJSON *array, cJSON *item)
{
    cJSON *child = NULL;

    if ((item == NULL) || (array == NULL) || (array == item))
    {
        return false;
    }

    child = array->child;
    /*
     * To find the last item in array quickly, we use prev in array
     */
    if (child == NULL)
    {
        /* list is empty, start new one */
        array->child = item;
        item->prev = item;
        item->next = NULL;
    }
    else
    {
        /* append to the end */
        if (child->prev)
        {
            suffix_object(child->prev, item);
            array->child->prev = item;
        }
    }

    return true;
}

/* Add item to array/object. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToArray(cJSON *array, cJSON *item)
{
    return add_item_to_array(array, item);
}

#if defined(__clang__) || (defined(__GNUC__)  && ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ > 5))))
    #pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
/* helper function to cast away const */
static void* cast_away_const(const void* string)
{
    return (void*)string;
}
#if defined(__clang__) || (defined(__GNUC__)  && ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ > 5))))
    #pragma GCC diagnostic pop
#endif


static cJSON_bool add_item_to_object(cJSON * const object, const char * const string, cJSON * const item, const internal_hooks * const hooks, const cJSON_bool constant_key)
{
    char *new_key = NULL;
    int new_type = cJSON_Invalid;

    if ((object == NULL) || (string == NULL) || (item == NULL) || (object == item))
    {
        return false;
    }

    if (constant_key)
    {
        new_key = (char*)cast_away_const(string);
        new_type = item->type | cJSON_StringIsConst;
    }
    else
    {
        new_key = (char*)cJSON_strdup((const unsigned char*)string, hooks);
        if (new_key == NULL)
        {
            return false;
        }

        new_type = item->type & ~cJSON_StringIsConst;
    }

    if (!(item->type & cJSON_StringIsConst) && (item->string != NULL))
    {
        hooks->deallocate(item->string);
    }

    item->string = new_key;
    item->type = new_type;

    return add_item_to_array(object, item);
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObject(cJSON *object, const char *string, cJSON *item)
{
    return add_item_to_object(object, string, item, &global_hooks, false);
}

/* Add an item to an object with constant string as key */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObjectCS(cJSON *object, const char *string, cJSON *item)
{
    return add_item_to_object(object, string, item, &global_hooks, true);
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToArray(cJSON *array, cJSON *item)
{
    if (array == NULL)
    {
        return false;
    }

    return add_item_to_array(array, create_reference(item, &global_hooks));
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToObject(cJSON *object, const char *string, cJSON *item)
{
    if ((object == NULL) || (string == NULL))
    {
        return false;
    }

    return add_item_to_object(object, string, create_reference(item, &global_hooks), &global_hooks, false);
}

CJSON_PUBLIC(cJSON*) cJSON_AddNullToObject(cJSON * const object, const char * const name)
{
    cJSON *null = cJSON_CreateNull();
    if (add_item_to_object(object, name, null, &global_hooks, false))
    {
        return null;
    }

    cJSON_Delete(null);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddTrueToObject(cJSON * const object, const char * const name)
{
    cJSON *true_item = cJSON_CreateTrue();
    if (add_item_to_object(object, name, true_item, &global_hooks, false))
    {
        return true_item;
    }

    cJSON_Delete(true_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddFalseToObject(cJSON * const object, const char * const name)
{
    cJSON *false_item = cJSON_CreateFalse();
    if (add_item_to_object(object, name, false_item, &global_hooks, false))
    {
        return false_item;
    }

    cJSON_Delete(false_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddBoolToObject(cJSON * const object, const char * const name, const cJSON_bool boolean)
{
    cJSON *bool_item = cJSON_CreateBool(boolean);
    if (add_item_to_object(object, name, bool_item, &global_hooks, false))
    {
        return bool_item;
    }

    cJSON_Delete(bool_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddNumberToObject(cJSON * const object, const char * const name, const double number)
{
    cJSON *number_item = cJSON_CreateNumber(number);
    if (add_item_to_object(object, name, number_item, &global_hooks, false))
    {
        return number_item;
    }

    cJSON_Delete(number_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddStringToObject(cJSON * const object, const char * const name, const char * const string)
{
    cJSON *string_item = cJSON_CreateString(string);
    if (add_item_to_object(object, name, string_item, &global_hooks, false))
    {
        return string_item;
    }

    cJSON_Delete(string_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddRawToObject(cJSON * const object, const char * const name, const char * const raw)
{
    cJSON *raw_item = cJSON_CreateRaw(raw);
    if (add_item_to_object(object, name, raw_item, &global_hooks, false))
    {
        return raw_item;
    }

    cJSON_Delete(raw_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddObjectToObject(cJSON * const object, const char * const name)
{
    cJSON *object_item = cJSON_CreateObject();
    if (add_item_to_object(object, name, object_item, &global_hooks, false))
    {
        return object_item;
    }

    cJSON_Delete(object_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddArrayToObject(cJSON * const object, const char * const name)
{
    cJSON *array = cJSON_CreateArray();
    if (add_item_to_object(object, name, array, &global_hooks, false))
    {
        return array;
    }

    cJSON_Delete(array);
    return NULL;
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemViaPointer(cJSON *parent, cJSON * const item)
{
    if ((parent == NULL) || (item == NULL))
    {
        return NULL;
    }

    if (item != parent->child)
    {
        /* not the first element */
        item->prev->next = item->next;
    }
    if (item->next != NULL)
    {
        /* not the last element */
        item->next->prev = item->prev;
    }

    if (item == parent->child)
    {
        /* first element */
        parent->child = item->next;
    }
    else if (item->next == NULL)
    {
        /* last element */
        parent->child->prev = item->prev;
    }

    /* make sure the detached item doesn't point anywhere anymore */
    item->prev = NULL;
    item->next = NULL;

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromArray(cJSON *array, int which)
{
    if (which < 0)
    {
        return NULL;
    }

    return cJSON_DetachItemViaPointer(array, get_array_item(array, (size_t)which));
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromArray(cJSON *array, int which)
{
    cJSON_Delete(cJSON_DetachItemFromArray(array, which));
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObject(cJSON *object, const char *string)
{
    cJSON *to_detach = cJSON_GetObjectItem(object, string);

    return cJSON_DetachItemViaPointer(object, to_detach);
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObjectCaseSensitive(cJSON *object, const char *string)
{
    cJSON *to_detach = cJSON_GetObjectItemCaseSensitive(object, string);

    return cJSON_DetachItemViaPointer(object, to_detach);
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromObject(cJSON *object, const char *string)
{
    cJSON_Delete(cJSON_DetachItemFromObject(object, string));
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromObjectCaseSensitive(cJSON *object, const char *string)
{
    cJSON_Delete(cJSON_DetachItemFromObjectCaseSensitive(object, string));
}

/* Replace array/object items with new ones. */
CJSON_PUBLIC(cJSON_bool) cJSON_InsertItemInArray(cJSON *array, int which, cJSON *newitem)
{
    cJSON *after_inserted = NULL;

    if (which < 0 || newitem == NULL)
    {
        return false;
    }

    after_inserted = get_array_item(array, (size_t)which);
    if (after_inserted == NULL)
    {
        return add_item_to_array(array, newitem);
    }

    if (after_inserted != array->child && after_inserted->prev == NULL) {
        /* return false if after_inserted is a corrupted array item */
        return false;
    }

    newitem->next = after_inserted;
    newitem->prev = after_inserted->prev;
    after_inserted->prev = newitem;
    if (after_inserted == array->child)
    {
        array->child = newitem;
    }
    else
    {
        newitem->prev->next = newitem;
    }
    return true;
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemViaPointer(cJSON * const parent, cJSON * const item, cJSON * replacement)
{
    if ((parent == NULL) || (parent->child == NULL) || (replacement == NULL) || (item == NULL))
    {
        return false;
    }

    if (replacement == item)
    {
        return true;
    }

    replacement->next = item->next;
    replacement->prev = item->prev;

    if (replacement->next != NULL)
    {
        replacement->next->prev = replacement;
    }
    if (parent->child == item)
    {
        if (parent->child->prev == parent->child)
        {
            replacement->prev = replacement;
        }
        parent->child = replacement;
    }
    else
    {   /*
         * To find the last item in array quickly, we use prev in array.
         * We can't modify the last item's next pointer where this item was the parent's child
         */
        if (replacement->prev != NULL)
        {
            replacement->prev->next = replacement;
        }
        if (replacement->next == NULL)
        {
            parent->child->prev = replacement;
        }
    }

    item->next = NULL;
    item->prev = NULL;
    cJSON_Delete(item);

    return true;
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInArray(cJSON *array, int which, cJSON *newitem)
{
    if (which < 0)
    {
        return false;
    }

    return cJSON_ReplaceItemViaPointer(array, get_array_item(array, (size_t)which), newitem);
}

static cJSON_bool replace_item_in_object(cJSON *object, const char *string, cJSON *replacement, cJSON_bool case_sensitive)
{
    if ((replacement == NULL) || (string == NULL))
    {
        return false;
    }

    /* replace the name in the replacement */
    if (!(replacement->type & cJSON_StringIsConst) && (replacement->string != NULL))
    {
        cJSON_free(replacement->string);
    }
    replacement->string = (char*)cJSON_strdup((const unsigned char*)string, &global_hooks);
    if (replacement->string == NULL)
    {
        return false;
    }

    replacement->type &= ~cJSON_StringIsConst;

    return cJSON_ReplaceItemViaPointer(object, get_object_item(object, string, case_sensitive), replacement);
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObject(cJSON *object, const char *string, cJSON *newitem)
{
    return replace_item_in_object(object, string, newitem, false);
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObjectCaseSensitive(cJSON *object, const char *string, cJSON *newitem)
{
    return replace_item_in_object(object, string, newitem, true);
}

/* Create basic types: */
CJSON_PUBLIC(cJSON *) cJSON_CreateNull(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_NULL;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateTrue(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_True;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateFalse(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_False;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateBool(cJSON_bool boolean)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = boolean ? cJSON_True : cJSON_False;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateNumber(double num)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_Number;
        item->valuedouble = num;

        /* use saturation in case of overflow */
        if (num >= INT_MAX)
        {
            item->valueint = INT_MAX;
        }
        else if (num <= (double)INT_MIN)
        {
            item->valueint = INT_MIN;
        }
        else
        {
            item->valueint = (int)num;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateString(const char *string)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_String;
        item->valuestring = (char*)cJSON_strdup((const unsigned char*)string, &global_hooks);
        if(!item->valuestring)
        {
            cJSON_Delete(item);
            return NULL;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateStringReference(const char *string)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL)
    {
        item->type = cJSON_String | cJSON_IsReference;
        item->valuestring = (char*)cast_away_const(string);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateObjectReference(const cJSON *child)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL) {
        item->type = cJSON_Object | cJSON_IsReference;
        item->child = (cJSON*)cast_away_const(child);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateArrayReference(const cJSON *child) {
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL) {
        item->type = cJSON_Array | cJSON_IsReference;
        item->child = (cJSON*)cast_away_const(child);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateRaw(const char *raw)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_Raw;
        item->valuestring = (char*)cJSON_strdup((const unsigned char*)raw, &global_hooks);
        if(!item->valuestring)
        {
            cJSON_Delete(item);
            return NULL;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateArray(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type=cJSON_Array;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateObject(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item)
    {
        item->type = cJSON_Object;
    }

    return item;
}

/* Create Arrays: */
CJSON_PUBLIC(cJSON *) cJSON_CreateIntArray(const int *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber(numbers[i]);
        if (!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateFloatArray(const float *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber((double)numbers[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateDoubleArray(const double *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber(numbers[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateStringArray(const char *const *strings, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (strings == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for (i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateString(strings[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p,n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

/* Duplication */
CJSON_PUBLIC(cJSON *) cJSON_Duplicate(const cJSON *item, cJSON_bool recurse)
{
    cJSON *newitem = NULL;
    cJSON *child = NULL;
    cJSON *next = NULL;
    cJSON *newchild = NULL;

    /* Bail on bad ptr */
    if (!item)
    {
        goto fail;
    }
    /* Create new item */
    newitem = cJSON_New_Item(&global_hooks);
    if (!newitem)
    {
        goto fail;
    }
    /* Copy over all vars */
    newitem->type = item->type & (~cJSON_IsReference);
    newitem->valueint = item->valueint;
    newitem->valuedouble = item->valuedouble;
    if (item->valuestring)
    {
        newitem->valuestring = (char*)cJSON_strdup((unsigned char*)item->valuestring, &global_hooks);
        if (!newitem->valuestring)
        {
            goto fail;
        }
    }
    if (item->string)
    {
        newitem->string = (item->type&cJSON_StringIsConst) ? item->string : (char*)cJSON_strdup((unsigned char*)item->string, &global_hooks);
        if (!newitem->string)
        {
            goto fail;
        }
    }
    /* If non-recursive, then we're done! */
    if (!recurse)
    {
        return newitem;
    }
    /* Walk the ->next chain for the child. */
    child = item->child;
    while (child != NULL)
    {
        newchild = cJSON_Duplicate(child, true); /* Duplicate (with recurse) each item in the ->next chain */
        if (!newchild)
        {
            goto fail;
        }
        if (next != NULL)
        {
            /* If newitem->child already set, then crosswire ->prev and ->next and move on */
            next->next = newchild;
            newchild->prev = next;
            next = newchild;
        }
        else
        {
            /* Set newitem->child and move to it */
            newitem->child = newchild;
            next = newchild;
        }
        child = child->next;
    }
    if (newitem && newitem->child)
    {
        newitem->child->prev = newchild;
    }

    return newitem;

fail:
    if (newitem != NULL)
    {
        cJSON_Delete(newitem);
    }

    return NULL;
}

static void skip_oneline_comment(char **input)
{
    *input += static_strlen("//");

    for (; (*input)[0] != '\0'; ++(*input))
    {
        if ((*input)[0] == '\n') {
            *input += static_strlen("\n");
            return;
        }
    }
}

static void skip_multiline_comment(char **input)
{
    *input += static_strlen("/*");

    for (; (*input)[0] != '\0'; ++(*input))
    {
        if (((*input)[0] == '*') && ((*input)[1] == '/'))
        {
            *input += static_strlen("*/");
            return;
        }
    }
}

static void minify_string(char **input, char **output) {
    (*output)[0] = (*input)[0];
    *input += static_strlen("\"");
    *output += static_strlen("\"");


    for (; (*input)[0] != '\0'; (void)++(*input), ++(*output)) {
        (*output)[0] = (*input)[0];

        if ((*input)[0] == '\"') {
            (*output)[0] = '\"';
            *input += static_strlen("\"");
            *output += static_strlen("\"");
            return;
        } else if (((*input)[0] == '\\') && ((*input)[1] == '\"')) {
            (*output)[1] = (*input)[1];
            *input += static_strlen("\"");
            *output += static_strlen("\"");
        }
    }
}

CJSON_PUBLIC(void) cJSON_Minify(char *json)
{
    char *into = json;

    if (json == NULL)
    {
        return;
    }

    while (json[0] != '\0')
    {
        switch (json[0])
        {
            case ' ':
            case '\t':
            case '\r':
            case '\n':
                json++;
                break;

            case '/':
                if (json[1] == '/')
                {
                    skip_oneline_comment(&json);
                }
                else if (json[1] == '*')
                {
                    skip_multiline_comment(&json);
                } else {
                    json++;
                }
                break;

            case '\"':
                minify_string(&json, (char**)&into);
                break;

            default:
                into[0] = json[0];
                json++;
                into++;
        }
    }

    /* and null-terminate. */
    *into = '\0';
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsInvalid(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Invalid;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsFalse(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_False;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsTrue(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xff) == cJSON_True;
}


CJSON_PUBLIC(cJSON_bool) cJSON_IsBool(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & (cJSON_True | cJSON_False)) != 0;
}
CJSON_PUBLIC(cJSON_bool) cJSON_IsNull(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_NULL;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsNumber(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Number;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsString(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_String;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsArray(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Array;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsObject(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Object;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsRaw(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Raw;
}

CJSON_PUBLIC(cJSON_bool) cJSON_Compare(const cJSON * const a, const cJSON * const b, const cJSON_bool case_sensitive)
{
    if ((a == NULL) || (b == NULL) || ((a->type & 0xFF) != (b->type & 0xFF)))
    {
        return false;
    }

    /* check if type is valid */
    switch (a->type & 0xFF)
    {
        case cJSON_False:
        case cJSON_True:
        case cJSON_NULL:
        case cJSON_Number:
        case cJSON_String:
        case cJSON_Raw:
        case cJSON_Array:
        case cJSON_Object:
            break;

        default:
            return false;
    }

    /* identical objects are equal */
    if (a == b)
    {
        return true;
    }

    switch (a->type & 0xFF)
    {
        /* in these cases and equal type is enough */
        case cJSON_False:
        case cJSON_True:
        case cJSON_NULL:
            return true;

        case cJSON_Number:
            if (compare_double(a->valuedouble, b->valuedouble))
            {
                return true;
            }
            return false;

        case cJSON_String:
        case cJSON_Raw:
            if ((a->valuestring == NULL) || (b->valuestring == NULL))
            {
                return false;
            }
            if (strcmp(a->valuestring, b->valuestring) == 0)
            {
                return true;
            }

            return false;

        case cJSON_Array:
        {
            cJSON *a_element = a->child;
            cJSON *b_element = b->child;

            for (; (a_element != NULL) && (b_element != NULL);)
            {
                if (!cJSON_Compare(a_element, b_element, case_sensitive))
                {
                    return false;
                }

                a_element = a_element->next;
                b_element = b_element->next;
            }

            /* one of the arrays is longer than the other */
            if (a_element != b_element) {
                return false;
            }

            return true;
        }

        case cJSON_Object:
        {
            cJSON *a_element = NULL;
            cJSON *b_element = NULL;
            cJSON_ArrayForEach(a_element, a)
            {
                /* TODO This has O(n^2) runtime, which is horrible! */
                b_element = get_object_item(b, a_element->string, case_sensitive);
                if (b_element == NULL)
                {
                    return false;
                }

                if (!cJSON_Compare(a_element, b_element, case_sensitive))
                {
                    return false;
                }
            }

            /* doing this twice, once on a and b to prevent true comparison if a subset of b
             * TODO: Do this the proper way, this is just a fix for now */
            cJSON_ArrayForEach(b_element, b)
            {
                a_element = get_object_item(a, b_element->string, case_sensitive);
                if (a_element == NULL)
                {
                    return false;
                }

                if (!cJSON_Compare(b_element, a_element, case_sensitive))
                {
                    return false;
                }
            }

            return true;
        }

        default:
            return false;
    }
}

CJSON_PUBLIC(void *) cJSON_malloc(size_t size)
{
    return global_hooks.allocate(size);
}

CJSON_PUBLIC(void) cJSON_free(void *object)
{
    global_hooks.deallocate(object);
    object = NULL;
}

#endif

#if !defined(CWEB_MOCK_UNIVERSAL_GARBAGE_DEFINE) && defined(CWEB_UNIVERSAL_GARBAGE_DECLARATED)
/* MIT License

Copyright (c) 2023 OUI

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */ 


#ifndef UniversalGarbage_fdefine
#define UniversalGarbage_fdefine
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


UniversalGarbage * private_new_MainUniversalGarbage(){
    UniversalGarbage *self = UniversalGarbage_create_empty_struct(self,UniversalGarbage)
    self->elements = (privateUniversalGarbageElement**)malloc(0);
    self->is_the_root = false;
    return self;
}

UniversalGarbage * newUniversalGarbage(){
    UniversalGarbage *self = UniversalGarbage_create_empty_struct(self,UniversalGarbage)
    self->is_the_root = true;
    self->elements = (privateUniversalGarbageElement**)malloc(0);
    self->return_values =private_new_MainUniversalGarbage();

    return self;
}




bool  rawUniversalGarbage_reallocate(UniversalGarbage *self, void **pointer){

    if(self->is_the_root){

        if(rawUniversalGarbage_reallocate(self->return_values,pointer)){
            return true;
        }
    }


    for(int i = 0; i < self->elements_size; i++){

        privateUniversalGarbageElement *current = self->elements[i];
        bool reallocate = current->pointer == pointer;

        if(reallocate){
            current->pointed_value = *pointer;
            return true;
        }
    }
    return false;
}

bool rawUniversalGarbage_resset(UniversalGarbage *self, void **pointer){

    if(self->is_the_root){
        if(rawUniversalGarbage_resset(self->return_values,pointer)){
            return true;
        }
    }


    for(int i = 0; i < self->elements_size; i++){
        privateUniversalGarbageElement *current = self->elements[i];
        bool resset = current->pointer == pointer;
        if(resset){
            private_UniversalGarbageSimpleElement_free_pointed_value(current);
            current->pointed_value = *pointer;
            return true;
        }
    }
    return  false;

}
bool  rawUniversalGarbage_remove(UniversalGarbage *self, void **pointer){
    if(self->is_the_root){
        if(rawUniversalGarbage_remove(self->return_values,pointer)){
            *pointer = NULL;
            return true;
        }
    }

    for(int i = 0; i < self->elements_size; i++){
        privateUniversalGarbageElement *current = self->elements[i];
        if(current->pointer == pointer){
            private_UniversalGarbageSimpleElement_free(current);
            self->elements_size-=1;
            bool its_not_the_last = i < self->elements_size;
            if(its_not_the_last){
                self->elements[i] = self->elements[self->elements_size];

            }
            *pointer = NULL;
            return  true;
        }
    }
    return  false;
}
bool  rawUniversalGarbage_disconnect(UniversalGarbage *self, void **pointer){
    if(self->is_the_root){
        if(rawUniversalGarbage_disconnect(self->return_values,pointer)){
            return true;
        }
    }

    for(int i = 0; i < self->elements_size; i++){
        privateUniversalGarbageElement *current = self->elements[i];
        if(current->pointer == pointer){
            free(current);
            self->elements_size-=1;
            bool its_not_the_last = i < self->elements_size;
            if(its_not_the_last){
                privateUniversalGarbageElement *last_element =  self->elements[self->elements_size];
                self->elements[i] = last_element;
            }
            return true;
        }
    }
    return  false;



}
bool  rawUniversalGarbage_add(UniversalGarbage *self,  void (*dealocator_callback)(void *element), void **pointer){

    if(!pointer){
        return false;
    }

    if(*pointer){
        for(int i = 0; i < self->elements_size; i++){
            privateUniversalGarbageElement *current = self->elements[i];
            if(current->pointed_value == *pointer){
                return false;
            }
        }
    }


    self->elements = (privateUniversalGarbageElement**)realloc(
            self->elements,
            (self->elements_size + 1) * sizeof(privateUniversalGarbageElement*)
    );



    self->elements[self->elements_size] = private_newUniversalGarbageSimpleElement(dealocator_callback, pointer);
    self->elements_size+=1;
    return  true;
}




void  private_UniversalGarbage_free_all_sub_elements(UniversalGarbage *self){
    for(int i = 0; i < self->elements_size; i++){
        private_UniversalGarbageSimpleElement_free(self->elements[i]);
    }
    free(self->elements);
}

void UniversalGarbage_free_including_return(UniversalGarbage *self){
    private_UniversalGarbage_free_all_sub_elements(self);
    if(self->is_the_root){
        UniversalGarbage_free(self->return_values);
    }
    free(self);
}

void UniversalGarbage_free(UniversalGarbage *self){
    private_UniversalGarbage_free_all_sub_elements(self);

    if(self->is_the_root){

        UniversalGarbage *return_garbage = self->return_values;
        for(int i = 0; i < return_garbage->elements_size; i++){
            free(return_garbage->elements[i]);
        }

        free(return_garbage->elements);
        free(return_garbage);
    }


    free(self);
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



privateUniversalGarbageElement * private_newUniversalGarbageSimpleElement(void (*dealocator_callback)(void *element), void **pointer){

    privateUniversalGarbageElement * self = UniversalGarbage_create_empty_struct(
        self,
        privateUniversalGarbageElement
    );
    self->pointer = pointer;
    self->deallocator_callback = dealocator_callback;
    self->pointed_value = *pointer;
    return  self;
}
void private_UniversalGarbageSimpleElement_free_pointed_value(privateUniversalGarbageElement *self){
    if(self->pointed_value){
        self->deallocator_callback(self->pointed_value);
        self->pointed_value = NULL;
    }
}

void private_UniversalGarbageSimpleElement_free(privateUniversalGarbageElement *self){
    private_UniversalGarbageSimpleElement_free_pointed_value(self);
    free(self);
}
#endif

#endif
#endif

#ifndef CWebStudio_fdefine
#define CWebStudio_fdefine
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


void  private_cweb_generate_cors_response(struct CwebHttpResponse *response) {

    CwebHttpResponse_add_header(response,"Access-Control-Allow-Origin","*");
    CwebHttpResponse_add_header(response,"Access-Control-Allow-Method","*");

}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
CwebDict *newCwebDict(){
    CwebDict *self = (CwebDict *)malloc(sizeof(struct CwebDict));
    self->keys_vals = (CwebKeyVal**)malloc(1);
    self->size = 0;
    return self;
}

char *CwebDict_get_by_normalized_key(CwebDict *self, const char *key, const char *chars_to_remove){

    for(int i = 0;i < self->size;i++){
        char *current_key = self->keys_vals[i]->key;
        char *normalized_key = cweb_normalize_string(current_key, chars_to_remove);

        if(strcmp(normalized_key, key) == 0){
            free(normalized_key);
            return self->keys_vals[i]->value;
        }

        free(normalized_key);

    }
    return NULL;

}
void CwebDict_set(CwebDict *self, const char *key, const char *value){
    CwebKeyVal *key_val = newCwebKeyVal(key, value);
    self->keys_vals = (CwebKeyVal**)realloc(self->keys_vals, (self->size+1)*sizeof(CwebKeyVal*));
    self->keys_vals[self->size] = key_val;
    self->size++;
}

char * CwebDict_get(CwebDict *self, const  char *key){
    for(int i = 0; i < self->size; i++){
        if(strcmp(self->keys_vals[i]->key, key) == 0){
            return self->keys_vals[i]->value;
        }
    }
    return NULL;
}

void CwebDict_represent(CwebDict *dict){
    for(int i = 0; i < dict->size; i++){
        CwebKeyVal_represent(dict->keys_vals[i]);
    }
}

void CwebDict_free(CwebDict *self){
    
    for(int i = 0; i < self->size; i++){
        CwebKeyVal *key_val = self->keys_vals[i];
         CwebKeyVal_free(key_val);
    }
    free(self->keys_vals);
    free(self);
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



unsigned char *cweb_load_any_content(const char * path,int *size,bool *is_binary){
    FILE *file = fopen(path,"rb");
    if(file == NULL){
        return NULL;
    }
    fseek(file,0,SEEK_END);
    *size = ftell(file);
    fseek(file,0,SEEK_SET);
    unsigned char *content = (unsigned char*)malloc(*size +1);
    fread(content,1,*size,file);

    *is_binary = false;
    for(int i = 0;i < *size;i++){
        if(content[i] == 0){
            *is_binary = true;
            break;
        }
    }
    if(!*is_binary){
        content[*size] = '\0';
    }

    fclose(file);
    return content;
}


char *cweb_load_string_file_content(const char * path){
    FILE *file = fopen(path,"r");
    if(file == NULL){
        return NULL;
    }
    fseek(file,0,SEEK_END);
    int size = ftell(file);
    fseek(file,0,SEEK_SET);
    char *content = (char*)malloc(size +1);
    fread(content,1,size,file);
    content[size] = '\0';
    fclose(file);
    return content;
}


unsigned char *cweb_load_binary_content(const char * path,int *size){
    FILE *file = fopen(path,"rb");
    if(file == NULL){
        return NULL;
    }
    fseek(file,0,SEEK_END);
    *size = ftell(file);
    fseek(file,0,SEEK_SET);
    unsigned char *content = (unsigned char*)malloc(*size);
    fread(content,1,*size,file);
    fclose(file);
    return content;
}





const char *cweb_generate_content_type(const char *file_name){
        int file_name_size = strlen(file_name);

        if(file_name_size < 2){
            return  "text/plain";
        }

        //iterate in negative
        char *extension;
          for(int i = file_name_size -2; i >= 0;  i--){

           //makes extension to point to i

            extension = (char*)&file_name[i+1];
            //if found a dot, break
            if(file_name[i] =='.'){
                break;
            }
        }
        if(!extension){
            return  "text/plain";
        }

        if(strcmp(extension, "html") == 0){
           return "text/html";
        }
        if(strcmp(extension,"mp4") == 0){
            return "video/mp4";
        }
        if(strcmp(extension,"WebM") == 0){
            return "video/webm";
        }
        if(strcmp(extension,"Ogg") == 0){
            return  "video/ogg";
        }
        if(strcmp(extension,"mp3") == 0){
            return  "audio/mpeg";
        }

        if(strcmp(extension,"pdf") == 0){
            return "application/pdf";
        }

        else if(strcmp(extension, "css") == 0){
            return "text/css";
        }

        else if(strcmp(extension, "js") == 0){
            return  "text/javascript";
        }
        else if(strcmp(extension, "png") == 0){
            return "image/png";
        }
        else if(strcmp(extension, "ico") == 0){
            return "image/x-icon";
        }

        else if(strcmp(extension, "jpg") == 0){
            return  "image/jpeg";
        }
        else if(strcmp(extension, "jpeg") == 0){
            return "image/jpeg";
        }
        else{
            return  "text/plain";
        }

}


char *private_cweb_convert_url_encoded_text(const char *text){

    int text_size = strlen(text);
    char *new_text = (char*)malloc(text_size + 1);
    int new_text_size = 0;

    for(int i = 0; i < text_size; i++){
        if(text[i] == '%'){
            char hex[3];
            hex[0] = text[i+1];
            hex[1] = text[i+2];
            hex[2] = '\0';
            new_text[new_text_size] = (char)strtol(hex, NULL, 16);
            new_text_size++;
            i += 2;
        }
        else{
            new_text[new_text_size] = text[i];
            new_text_size++;
        }
    }
    new_text[new_text_size] = '\0';
    return new_text;
}
/*
bool private_cweb_is_string_from_point(const char *content, long content_size, const char *test_string, long test_string_size, long point){

    long  end_point = point + test_string_size;

    if(content_size < end_point){
        return  false;
    }

    for(long i = 0; i < test_string_size; i++){
        char current_char = test_string[i];
        char test_char = content[i+point];
        if(current_char != test_char){
            return  false;
        }
    }
    return true;
}
 */

 char * private_CWeb_format_vaarg(const char *expresion, va_list args){

     va_list args_copy;
     va_copy(args_copy, args);
     long required_size = vsnprintf(NULL, 0,expresion,args_copy);
     va_end(args_copy);
     char *buffer = (char*)malloc(sizeof(char) * required_size + 2);
     vsnprintf(buffer,sizeof (char) * required_size+1,expresion,args);
     return buffer;
 }

 char * private_CWeb_format(const char *expresion, ...){
     va_list  args;
     va_start(args,expresion);
     char *result = private_CWeb_format_vaarg(expresion,args);
     va_end(args);
     return  result;
 }

 char *private_cweb_convert_to_hexa(const char *data){
     CTextStack *hexa_format = newCTextStack_string_empty();
     int content_size = strlen(data);
     for(int i = 0; i < content_size; i++){
         char buffer[10] = {0};
         sprintf(buffer,"\\x%x",data[i]);
         CTextStack_format(hexa_format,"%s",buffer);
     };
     return CTextStack_self_transform_in_string_and_self_clear(hexa_format);
 }


 CTextStack  *private_cweb_create_assci_code(const char *msg){
     CTextStack *data = newCTextStack_string("[");
     long size = strlen(msg);
     for(int i =0; i < size;i++){
         CTextStack_format(data, "%d,", msg[i]);
     }
     CTextStack_text(data,"]");
     return data;
 }
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


void privateCWebHyDrationBridge_add_response(CWebHyDrationBridge *self,const char *name,cJSON *data){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }

    CWebHyDration *hydraation = (CWebHyDration*)self->hydration;
    cJSON *current_response = cJSON_CreateObject();
    cJSON_AddStringToObject(current_response,CWEB_HYDRATON_JSON_NAME,name);
    cJSON_AddItemToObject(current_response,CWEB_HYDRATON_JSON_DATA,data);
    cJSON_AddItemToArray(hydraation->response,current_response);
}

void CWebHyDrationBridge_set_session_storage_data(

    CWebHyDrationBridge *self,const char*key, const char *value,...){
        if(CWebHyDrationBridge_has_errors(self)){
            return ;
        }
        cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args,value);
    char *value_formmat = private_CWeb_format_vaarg(value,args);
    va_end(args);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_KEY, key);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_VALUE,value_formmat);
    free(value_formmat);
    privateCWebHyDrationBridge_add_response(self,"set_session_storage",obj);
}

void CWebHyDrationBridge_remove_session_storage_data(CWebHyDrationBridge *self,const char*key){
    cJSON *obj = cJSON_CreateObject();
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_KEY, key);
    privateCWebHyDrationBridge_add_response(self,"remove_session_storage_data",obj);
}


void CWebHyDrationBridge_alert(CWebHyDrationBridge *self,const char *menssage,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args,menssage);
    char *msg_format = private_CWeb_format_vaarg(menssage,args);
    va_end(args);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_MSG, msg_format);
    free(msg_format);
    privateCWebHyDrationBridge_add_response(self,"alert",obj);

}

void CWebHydrationBridge_creatCookie_with_time(CWebHyDrationBridge *self, const char *key, long time, const char *value, ...){

    if(CWebHyDrationBridge_has_errors(self)){
        return;
    }
    cJSON *obj = cJSON_CreateObject();

    va_list args;
    va_start(args, value);
    char *value_formated = private_CWeb_format_vaarg(value, args);
    va_end(args);
    cJSON_AddStringToObject(obj, "name", key);
    cJSON_AddStringToObject(obj, "value", value_formated);
    cJSON_AddNumberToObject(obj, "days", time);
    free(value_formated);
    privateCWebHyDrationBridge_add_response(self, "add_cookie_with_time", obj);
}

void CWebHydrationBridge_creatCookie(CWebHyDrationBridge *self, const char *key, const char *value, ...){

    if(CWebHyDrationBridge_has_errors(self)){
        return;
    }
    cJSON *obj = cJSON_CreateObject();

    va_list args;
    va_start(args, value);
    char *value_formated = private_CWeb_format_vaarg(value, args);
    va_end(args);
    cJSON_AddStringToObject(obj, "name", key);
    cJSON_AddStringToObject(obj, "value", value_formated);
    free(value_formated);
    privateCWebHyDrationBridge_add_response(self, "add_cookie", obj);
}

void CWebHyDrationBridge_deletCookie(CWebHyDrationBridge *self, const char *key){
    if(CWebHyDrationBridge_has_errors(self)){
        return;
    }
    cJSON *obj = cJSON_CreateObject();

    cJSON_AddStringToObject(obj, "name", key);
    privateCWebHyDrationBridge_add_response(self, "delet_cookie", obj);
}

void CWebHyDrationBridge_execute_script(CWebHyDrationBridge *self,const char *code,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args,code);
    char *code_format = private_CWeb_format_vaarg(code,args);
    va_end(args);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_CODE, code_format);
    free(code_format);
    privateCWebHyDrationBridge_add_response(self,"execute_script",obj);
}

void CWebHyDrationBridge_replace_element_by_query_selector(
    CWebHyDrationBridge *self,
    const char *query_selector,
    const char *code,
    ...
){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args,code);
    char *html_format = private_CWeb_format_vaarg(code,args);
    va_end(args);

    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, query_selector);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_HTML, html_format);
    free(html_format);
    privateCWebHyDrationBridge_add_response(self,"replace_element_by_query_selector",obj);
}


void CWebHyDrationBridge_append_by_query_selector(
    CWebHyDrationBridge *self,
    const char *query_selector,
    const char *code,
    ...
){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args,code);
    char *html_format = private_CWeb_format_vaarg(code,args);
    va_end(args);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, query_selector);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_HTML, html_format);
    free(html_format);
    privateCWebHyDrationBridge_add_response(self,"append_by_query_selector",obj);
}



void CWebHyDrationBridge_destroy_by_query_selector(
    CWebHyDrationBridge *self,
    const char * query_selecor
){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, query_selecor);
    privateCWebHyDrationBridge_add_response(self,"destroy_by_query_selector",obj);
}


void CWebHyDrationBridge_hide_element_by_query_selector(
CWebHyDrationBridge *self,
const char *query_selecor){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, query_selecor);
    privateCWebHyDrationBridge_add_response(self,"hide_element_by_query_selector",obj);
}

void CWebHyDrationBridge_unhide_element_by_query_selector(
    CWebHyDrationBridge *self,
    const char *query_selector
){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, query_selector);
    privateCWebHyDrationBridge_add_response(self,"unhide_element_by_id",obj);
}




void CWebHyDrationBridge_replace_element_by_id(CWebHyDrationBridge *self,const char *id, const char *code,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args,code);
    char *html_format = private_CWeb_format_vaarg(code,args);
    va_end(args);
    char *formatted_query_selecor = private_CWeb_format("[id='%s']",id);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, formatted_query_selecor);
    free(formatted_query_selecor);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_HTML, html_format);
    free(html_format);
    privateCWebHyDrationBridge_add_response(self,"replace_element_by_query_selector",obj);
}

void CWebHyDrationBridge_append_by_id(CWebHyDrationBridge *self,const char *id, const char *code,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args,code);
    char *html_format = private_CWeb_format_vaarg(code,args);
    va_end(args);
    char *formatted_query_selecor = private_CWeb_format("[id='%s']",id);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, formatted_query_selecor);
    free(formatted_query_selecor);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_HTML, html_format);
    free(html_format);
    privateCWebHyDrationBridge_add_response(self,"append_by_query_selector",obj);
}


void CWebHyDrationBridge_hide_element_by_id(CWebHyDrationBridge *self,const char *id){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();

    char *formatted_query_selecor = private_CWeb_format("[id='%s']",id);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, formatted_query_selecor);
    free(formatted_query_selecor);

    privateCWebHyDrationBridge_add_response(self,"hide_element_by_query_selector",obj);
}

void CWebHyDrationBridge_unhide_element_by_id(CWebHyDrationBridge *self,const char *id){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();

    char *formatted_query_selecor = private_CWeb_format("[id='%s']",id);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, formatted_query_selecor);
    free(formatted_query_selecor);

    privateCWebHyDrationBridge_add_response(self,"unhide_element_by_query_selector",obj);
}


void CWebHyDrationBridge_destroy_by_id(CWebHyDrationBridge *self,const char * id){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();

    char *formatted_query_selecor = private_CWeb_format("[id='%s']",id);
    cJSON_AddStringToObject(obj,CWEB_HYDRATON_JSON_QUERY_SELECTOR, formatted_query_selecor);
    free(formatted_query_selecor);

    privateCWebHyDrationBridge_add_response(self,"destroy_by_query_selector",obj);
}

void CWebHydration_redirect(CWebHyDrationBridge *self, const char *url){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    cJSON_AddStringToObject(obj, CWEB_HYDRATION_JSON_URL, url);
    privateCWebHyDrationBridge_add_response(self,"redirect",obj);
}

void CWebHyDration_console_log(CWebHyDrationBridge *self, const char *menssage, ...){

    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args, menssage);
    char *menssage_formated = private_CWeb_format_vaarg(menssage, args);
    va_end(args);

    cJSON_AddStringToObject(obj, "message", menssage_formated);
    privateCWebHyDrationBridge_add_response(self, "log", obj);
}
void CWebHyDration_console_warn(CWebHyDrationBridge *self, const char *menssage, ...){

    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args, menssage);
    char *menssage_formated = private_CWeb_format_vaarg(menssage, args);
    va_end(args);

    cJSON_AddStringToObject(obj, "message", menssage_formated);
    privateCWebHyDrationBridge_add_response(self, "warn", obj);
    free(menssage_formated);
}
void CWebHyDration_console_error(CWebHyDrationBridge *self, const char *menssage, ...){

    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args, menssage);
    char *menssage_formated = private_CWeb_format_vaarg(menssage, args);
    va_end(args);

    cJSON_AddStringToObject(obj, "message", menssage_formated);
    privateCWebHyDrationBridge_add_response(self, "error", obj);
    free(menssage_formated);
}
void CWebHyDration_console_clear(CWebHyDrationBridge *self){

    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    privateCWebHyDrationBridge_add_response(self, "clear", obj);
}

void CWebHyDrationBridge_remove_class_by_id(CWebHyDrationBridge *self, const char *id, const char *class_name, ...){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args, class_name);
    char *menssage_formated = private_CWeb_format_vaarg(class_name, args);
    va_end(args);

    cJSON_AddStringToObject(obj, "class_name", menssage_formated);
    cJSON_AddStringToObject(obj, "id", id);
    privateCWebHyDrationBridge_add_response(self, "remove_class_by_id", obj);
    free(menssage_formated);
}

void CWebHyDrationBridge_add_class_by_id(CWebHyDrationBridge *self, const char *id, const char *class_name, ...){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args, class_name);
    char *menssage_formated = private_CWeb_format_vaarg(class_name, args);
    va_end(args);

    cJSON_AddStringToObject(obj, "class_name", menssage_formated);
    cJSON_AddStringToObject(obj, "id", id);
    privateCWebHyDrationBridge_add_response(self, "add_class_by_id", obj);
    free(menssage_formated);
}

void CWebHyDrationBridge_remove_class_by_query_selector(CWebHyDrationBridge *self, const char *element, const char *class_name, ...){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args, class_name);
    char *menssage_formated = private_CWeb_format_vaarg(class_name, args);
    va_end(args);

    cJSON_AddStringToObject(obj, "class_name", menssage_formated);
    cJSON_AddStringToObject(obj, "query_selector", element);
    privateCWebHyDrationBridge_add_response(self, "remove_class_by_id", obj);
    free(menssage_formated);
}

void CWebHyDrationBridge_add_class_by_query_selector(CWebHyDrationBridge *self, const char *element, const char *class_name, ...){
    if(CWebHyDrationBridge_has_errors(self)){
        return ;
    }
    cJSON *obj = cJSON_CreateObject();
    va_list  args;
    va_start(args, class_name);
    char *menssage_formated = private_CWeb_format_vaarg(class_name, args);
    va_end(args);

    cJSON_AddStringToObject(obj, "class_name", menssage_formated);
    cJSON_AddStringToObject(obj, "query_selector", element);
    privateCWebHyDrationBridge_add_response(self, "add_class_by_id", obj);
    free(menssage_formated);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int   CWebHyDrationBridge_get_args_size(CWebHyDrationBridge *self){
    if(CWebHyDrationBridge_has_errors(self)){
        return 0;
    }
    CWebHyDration *hydration = (CWebHyDration*)self->hydration;
    return cJSON_GetArraySize(hydration->args);
}


bool private_cweb_hydration_type_verifier(CWebHyDrationBridge *self,int index,cJSON_bool (*callback_verifier)( cJSON *item)){
    if(CWebHyDrationBridge_has_errors(self)){
        return false;
    }
    CWebHyDration *hydration = (CWebHyDration*)self->hydration;
    cJSON *item = cJSON_GetArrayItem(hydration->args, index);
    if(item == NULL){
        return false;
    }
    return (bool)callback_verifier(item);
}

bool   CWebHyDrationBridge_is_arg_number(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return false;
    }
    return private_cweb_hydration_type_verifier(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsNumber);
}

bool   CWebHyDrationBridge_is_arg_null(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return false;
    }
    return private_cweb_hydration_type_verifier(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsNull);
}

bool   CWebHyDrationBridge_is_arg_bool(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return false;
    }
    return private_cweb_hydration_type_verifier(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsBool);
}
bool   CWebHyDrationBridge_is_arg_string(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return false;
    }
    return private_cweb_hydration_type_verifier(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsString);
}


cJSON *privateCWebHyDration_get_arg_index(
    CWebHyDrationBridge *self,
    int index,
    cJSON_bool (*callback_verifier)( cJSON *  item),
    const char *expected_type
){

    if(CWebHyDrationBridge_has_errors(self)){
        return NULL;
    }
    CWebHyDration *hydration = (CWebHyDration*)self->hydration;

    cJSON *item = cJSON_GetArrayItem(hydration->args,index);

    if(item == NULL){
        privateCWebHydration_raise_error(
            hydration,
            self,
            CWEB_HYDRATION_INDEX_ARGS_NOT_PROVIDED,
            CWEB_HYDRATION_INDEX_ARGS_NOT_PROVIDED_MSG,
            index);
        return NULL;
    }
    if(!callback_verifier){
        return  item;
    }

    if(!callback_verifier(item)){
        privateCWebHydration_raise_error(
            hydration,
            self,
            CWEB_HYDRATION_INDEX_ARGS_WRONG_TYPE,
            CWEB_HYDRATION_INDEX_ARGS_WRONG_TYPE_MSG,
            index,
            expected_type
        );
        return NULL;
    }
    return item;
}

double  CWebHyDrationBridge_get_double_arg(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return -1;
    }
    cJSON *item = privateCWebHyDration_get_arg_index(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsNumber,CWEB_HYDRATION_NUMBER);
    if(item == NULL){
        return -1;
    }

    return cJSON_GetNumberValue(item);
}

long  CWebHyDrationBridge_get_long_arg(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return -1;
    }
    cJSON *item = privateCWebHyDration_get_arg_index(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsNumber,CWEB_HYDRATION_NUMBER);
    if(item == NULL){
        return -1;
    }

    return (long)cJSON_GetNumberValue(item);
}



bool  CWebHyDrationBridge_get_bool_arg(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return false;
    }
    cJSON *item = privateCWebHyDration_get_arg_index(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsNumber,CWEB_HYDRATION_BOOL);
        if(item == NULL){
            return -1;
        }

    return (bool)item->valueint;
}

char* CWebHyDrationBridge_get_str_arg(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return NULL;
    }
    cJSON *item = privateCWebHyDration_get_arg_index(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsString,CWEB_HYDRATION_STRING);
        if(item == NULL){
            return NULL;
        }

    return cJSON_GetStringValue(item);
}
cJSON * CWebHyDrationBridge_get_cJSON_arg(CWebHyDrationBridge *self,int index){
    if(CWebHyDrationBridge_has_errors(self)){
        return NULL;
    }
    return  privateCWebHyDration_get_arg_index(self,index,NULL,NULL);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




CWebHyDrationBridge * CWebHyDrationBridge_get_brother_bridge(CWebHyDrationBridge *self,const char *name){
    CWebHyDration *hydration = (CWebHyDration *)self->hydration;
    return CWebHyDration_get_child_bridge(hydration,name);
}

CWebHyDrationBridge *private_newCWebHyDrationBridge(
    const char *name,
    void (*callback)(CWebHyDrationBridge *),CWebHyDration *hydration
) {
    CWebHyDrationBridge *self = (CWebHyDrationBridge*)malloc(sizeof(CWebHyDrationBridge));
    *self = (CWebHyDrationBridge){0};

    self->name = strdup(name);
    self->callback = callback;
    self->hydration = (void*)hydration;
    self->requirements_code =newCwebStringArray();
    return  self;
}



CTextStack * CWebHyDrationBridge_create_stack(CWebHyDrationBridge *self){
    return CWebHyDration_create_stack((CWebHyDration*)self->hydration);
}

CTextStack * CWebHyDrationBridge_create_empty_stack(CWebHyDrationBridge *self){
    return CWebHyDration_create_empty_stack((CWebHyDration*)self->hydration);
}

CWebHyDrationSearchRequirements * CWebHyDrationBridge_newSearchRequirements(
    CWebHyDrationBridge *self, const char *name,...)
{
    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);

    CWebHyDrationSearchRequirements *created_search =
    private_newCWebHyDrationSearchRequirements_getting_name_ownership(
        self,
        formmated_name
    );

    CWebHyDration *hydration =(CWebHyDration*)self->hydration;
    UniversalGarbage *garbage = hydration->request->garbage;

   UniversalGarbage_add(
       garbage,
        private_CWebHyDrationSearchRequirements_free,
        created_search
    );
    return created_search;
}



CTextStack*  private_CWebHyDrationBridge_create_script(CWebHyDrationBridge *self) {

    CTextStack *function = newCTextStack_string_empty();

    CTextStack_format(
        function,
        "cweb_bridges['%s'] = async function (...args){ \n",
        self->name
    );

    CTextStack_format(function,"\tlet content = {}\n");

    for(int i= 0; i < self->requirements_code->size;i++) {
        CTextStack_format(
            function,
            "%s\n",
            self->requirements_code->strings[i]
        );
    }

    CTextStack_format(
        function,
        "\tawait private_cweb_send_to_server('%s',args,content)\n",
        self->name
    );
    CTextStack_format(function,"};\n");

    return function;
}
bool CWebHyDrationBridge_has_errors(CWebHyDrationBridge *self){
    if(self == NULL){
        return  true;
    }
    CWebHyDration *hydration = (CWebHyDration*)self->hydration;
    if(hydration->error_code == 0){
        return false;
    }
    return true;
}



void private_CWebHyDrationBridge_free(CWebHyDrationBridge *self) {
free(self->name);
    CwebStringArray_free(self->requirements_code);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


char *privateCWebHyDrationBridge_call_by_vaargss(CWebHyDrationBridge *self,const char *func_args,va_list  args){
    if(CWebHyDrationBridge_has_errors(self)){
        return NULL;
    }

    CTextStack *callback= CWebHyDrationBridge_create_empty_stack(self);
    UniversalGarbage *garbage = newUniversalGarbage();

    CTextStack *name_assci = private_cweb_create_assci_code(self->name);
    UniversalGarbage_add(garbage, CTextStack_free, name_assci);


    if(func_args == NULL) {
            CTextStack_format(
                callback,
                "private_cweb_call_bridge_with_assic(%t,[]);",
                name_assci);
            UniversalGarbage_free(garbage);
            return callback->rendered_text;
    }

    char *formmated_func_args = private_CWeb_format_vaarg(func_args,args);
    UniversalGarbage_add_simple(garbage, formmated_func_args);
    CTextStack * args_assci = private_cweb_create_assci_code(formmated_func_args);
    UniversalGarbage_add(garbage, CTextStack_free, args_assci);


    CTextStack_format(
        callback,
        "private_cweb_call_bridge_with_assic(%t,%t);",
        name_assci,
        args_assci
    );

    UniversalGarbage_free(garbage);

    return callback->rendered_text;
}

char *CWebHyDrationBridge_call(CWebHyDrationBridge *self,const char *func_args,...){

    va_list  args;
    va_start(args,func_args);
    char *result =privateCWebHyDrationBridge_call_by_vaargss(self,func_args,args);
    va_end(args);
    return result;

}
char *privateCWebHyDrationBridge_call_trigger_by_vaarg(
    CWebHyDrationBridge *self,
    const char *trigger,
    const char *func_args,
    va_list  args
){

    char *result =privateCWebHyDrationBridge_call_by_vaargss(self,func_args,args);

    if(!result){
        return NULL;
    }

    CTextStack * complete = CWebHyDrationBridge_create_empty_stack(self);
    CTextStack_format(complete, "%s = '%s'", trigger,result);
    return complete->rendered_text;
}



char *CWebHyDrationBridge_call_trigger(
    CWebHyDrationBridge *self,
    const char *trigger,
    const char *func_args,
    ...
){
    va_list  args;
    va_start(args,func_args);
    char *result =privateCWebHyDrationBridge_call_trigger_by_vaarg(self,trigger,func_args,args);
    va_end(args);
    return result;
}


char *CWebHyDrationBridge_onclick(CWebHyDrationBridge *self,const char *func_args,...){
    va_list  args;
    va_start(args,func_args);
    char *result =privateCWebHyDrationBridge_call_trigger_by_vaarg(self,"onclick",func_args,args);
    va_end(args);
    return result;
}


char *CWebHyDrationBridge_onfoccusout(CWebHyDrationBridge *self,const char *func_args,...){
    va_list  args;
    va_start(args,func_args);
    char *result =privateCWebHyDrationBridge_call_trigger_by_vaarg(self,"onfocusout",func_args,args);
    va_end(args);
    return result;

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

void CWebHyDrationBridge_add_elements_by_id_setting_search_as_same_name(
    CWebHyDrationBridge *self, const char *id
){
    CWebHyDrationSearchRequirements * search =
    CWebHyDrationBridge_newSearchRequirements(self,id);
    CWebHyDrationSearchRequirements_add_elements_by_id(search, id);

}


void CWebHyDrationBridge_add_elements_by_id_setting_search_as_same_name_not_auto_converting(
    CWebHyDrationBridge *self, const char *id
){
    CWebHyDrationSearchRequirements * search =
    CWebHyDrationBridge_newSearchRequirements(self,id);
    CWebHyDrationSearchRequirements_add_elements_by_id_not_auto_converting(search, id);
}

void CWebHyDrationBridge_add_elements_by_class_name_setting_search_as_same_name(
    CWebHyDrationBridge *self, const char *class_name
){
    CWebHyDrationSearchRequirements * search =
    CWebHyDrationBridge_newSearchRequirements(self,class_name);
    CWebHyDrationSearchRequirements_add_elements_by_class_name(search, class_name);

}


void CWebHyDrationBridge_add_elements_by_class_name_setting_search_as_same_name_not_auto_converting(
    CWebHyDrationBridge *self, const char *class_name
){
    CWebHyDrationSearchRequirements * search =
    CWebHyDrationBridge_newSearchRequirements(self,class_name);
    CWebHyDrationSearchRequirements_add_elements_by_class_name_not_auto_converting(search, class_name);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



int  CWebHyDrationBridge_get_total_avaialible_searchs(CWebHyDrationBridge *self){
    if(CWebHyDrationBridge_has_errors(self)){
        return 0;
    }
    CWebHyDration *hydration = (CWebHyDration*)self->hydration;
    return cJSON_GetArraySize(hydration->content);
}


CWebHyDrationSearchResult * CWebHyDrationBridge_get_search_by_index(CWebHyDrationBridge *self,int index){

    if(CWebHyDrationBridge_has_errors(self)){
        return NULL;
    }
    CWebHyDration *hydration = (CWebHyDration*)self->hydration;
    cJSON *search =  cJSON_GetArrayItem(hydration->content, index);
    if(search == NULL){
        privateCWebHydration_raise_error(
            hydration,
            self,
            CWEB_HYDRATION_CONTENT_SEARCH_NOT_EXIST,
            CWEB_HYDRATION_CONTENT_SEARCH_NOT_EXIST_MSG,
            index
        );
        return NULL;
    }
    CWebHyDrationSearchResult *result = private_newCWebHyDrationSearchResult(self, search);
    UniversalGarbage *garbage = hydration->request->garbage;

    UniversalGarbage_add(garbage,privateCWebHyDrationSearchResult_free,result);
    return result;
}

CWebHyDrationSearchResult * CWebHyDrationBridge_get_search_by_name(CWebHyDrationBridge *self,const char *name,...){

    if(CWebHyDrationBridge_has_errors(self)){
        return NULL;
    }
    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);

    CWebHyDration *hydration = (CWebHyDration*)self->hydration;
    cJSON *search = cJSON_GetObjectItem(hydration->content,formmated_name);
    if(search == NULL){
        privateCWebHydration_raise_error(
            hydration,
            self,
            CWEB_HYDRATION_CONTENT_KEY_NOT_PROVIDED,
            CWEB_HYDRATION_CONTENT_KEY_NOT_PROVIDED_MSG,
            formmated_name
        );
        free(formmated_name);
        return NULL;
    }
    free(formmated_name);

    CWebHyDrationSearchResult *result = private_newCWebHyDrationSearchResult(self, search);
    UniversalGarbage *garbage = hydration->request->garbage;
    UniversalGarbage_add(garbage,privateCWebHyDrationSearchResult_free,result);
    return result;
}

bool CWebHyDrationBridge_search_exist(CWebHyDrationBridge *self,const char *name,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return false;
    }
    va_list  args;
        va_start(args,name);
        char *formmated_name = private_CWeb_format_vaarg(name,args);
        va_end(args);

        CWebHyDration *hydration = (CWebHyDration*)self->hydration;
        cJSON *search = cJSON_GetObjectItem(hydration->content,formmated_name);
        free(formmated_name);
        return search != NULL;
}

double CWebHyDrationBridge_get_double_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return -1;
    }
    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);
    CWebHyDrationSearchResult *search = CWebHyDrationBridge_get_search_by_name(self,"%s",formmated_name);
    free(formmated_name);
    if(search == NULL){
        return  -1;
    }
    return CWebHyDrationSearchResult_get_double(search,0);
}

long CWebHyDrationBridge_get_long_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return -1;
    }
    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);
    CWebHyDrationSearchResult *search = CWebHyDrationBridge_get_search_by_name(self,"%s",formmated_name);
    free(formmated_name);
    if(search == NULL){
        return  -1;
    }
    return CWebHyDrationSearchResult_get_long(search,0);
}


bool CWebHyDrationBridge_get_bool_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return false;
    }
    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);
    CWebHyDrationSearchResult *search = CWebHyDrationBridge_get_search_by_name(self,"%s",formmated_name);
    free(formmated_name);
    if(search == NULL){
        return  false;
    }
    return CWebHyDrationSearchResult_get_bool(search,0);
}


char* CWebHyDrationBridge_get_string_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return NULL;
    }
    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);
    CWebHyDrationSearchResult *search = CWebHyDrationBridge_get_search_by_name(self,"%s",formmated_name);
    free(formmated_name);
    if(search == NULL){
        return  NULL;
    }
    return CWebHyDrationSearchResult_get_string(search,0);
}

cJSON* CWebHyDrationBridge_get_cJSON_from_first_element_of_search(CWebHyDrationBridge *self,const char *name,...){
    if(CWebHyDrationBridge_has_errors(self)){
        return NULL;
    }
    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);
    CWebHyDrationSearchResult *search = CWebHyDrationBridge_get_search_by_name(self,"%s",formmated_name);
    free(formmated_name);
    if(search == NULL){
        return  NULL;
    }
    return CWebHyDrationSearchResult_get_cJSON(search,0);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

privateCWebHyDrationBridgeArray * private_new_privateCWebHyDrationBridgeArray() {
    privateCWebHyDrationBridgeArray *self = (privateCWebHyDrationBridgeArray*)malloc(sizeof(privateCWebHyDrationBridgeArray));
    *self = (privateCWebHyDrationBridgeArray){0};
    self->elments = (CWebHyDrationBridge**)malloc(0);
    return  self;
}

void privateCWebHyDrationBridgeArray_append(privateCWebHyDrationBridgeArray *self,CWebHyDrationBridge *element) {
    self->elments = (CWebHyDrationBridge**)realloc(self->elments, (self->size +1 )* sizeof(CWebHyDrationBridge*));
    self->elments[self->size] = element;
    self->size+=1;
}

void privateCWebHyDrationBridgeArray_free(privateCWebHyDrationBridgeArray *self) {
    for(int i = 0; i  < self->size;i++) {
        private_CWebHyDrationBridge_free(self->elments[i]);
    }
    free(self->elments);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CWebHyDration *newCWebHyDration(CwebHttpRequest *request) {

    if(request->hydratation){
        return (CWebHyDration*)request->hydratation;
    }

    CWebHyDration *self = (CWebHyDration*)malloc(sizeof(CWebHyDration));
    *self = (CWebHyDration){0};
    self->all_bridges = private_new_privateCWebHyDrationBridgeArray();
    self->request =  request;
    self->response = cJSON_CreateArray();
    self->max_content_size = CWEB_HYDRATION_DEFAULT_BODY_SIZE;
    request->hydratation = (void *)self;

    return self;
}

CWebHyDrationBridge * CWebHyDration_get_child_bridge(CWebHyDration *self,const char *name){
    for(int i = 0; i < self->all_bridges->size;i++){
        CWebHyDrationBridge *current =  self->all_bridges->elments[i];
        if(strcmp(current->name,name) == 0){
            return  current;
        }
    }

    return CWebHyDration_create_bridge(self,name,NULL);
}


CTextStack  * CWebHyDration_create_stack(CWebHyDration *self){
    return CwebHttpRequest_create_stack(self->request);
}

CTextStack  * CWebHyDration_create_empty_stack(CWebHyDration *self){
    return CwebHttpRequest_create_empty_stack(self->request);

}


CWebHyDrationBridge * CWebHyDration_create_bridge(CWebHyDration *self,const char *name,void (*callback)(CWebHyDrationBridge *)){
    CWebHyDrationBridge *created = private_newCWebHyDrationBridge(name,callback,self);
    privateCWebHyDrationBridgeArray_append(self->all_bridges,created);
    return created;
}

bool CWebHyDration_is_the_trigger(CWebHyDration *self){
    if(strcmp(self->request->route,CWEB_HYDRATION_CALBACK_HANDLER_ROUTE) == 0){
        return true;
    }
    return false;
}

void privateCWebHydration_raise_error(CWebHyDration *self,CWebHyDrationBridge *bridge, int error_code, const char *format,...){
    va_list  args;
    va_start(args,format);
    self->error_msg = private_CWeb_format_vaarg(format,args);
    va_end(args);
    self->error_code = error_code;
    if(bridge){
        self->error_bridge_name = bridge->name;
    }
}


CwebHttpResponse *CWebHydration_generate_response(CWebHyDration *self){
    if(!CWebHyDration_is_the_trigger(self)){
        return NULL;
    }
    cJSON *body = CWebHttpRequest_read_cJSON(self->request, self->max_content_size);


    if(body ==NULL){
        privateCWebHydration_raise_error(
            self,
            NULL,
            CWEB_HYDRATION_NOT_BODY_JSON_PROVIDED,
            CWEB_HYDRATION_NOT_BODY_JSON_PROVIDED_MSG
        );
        return private_CWebHydration_formmat_error_response(self);
    }

    if(!cJSON_IsObject(body)){
        privateCWebHydration_raise_error(
            self,
            NULL,
            CWEB_HYDRATION_NOT_BODY_IS_NOT_OBJECT,
            CWEB_HYDRATION_NOT_BODY_IS_NOT_OBJECT_MSG
        );
        return private_CWebHydration_formmat_error_response(self);
    }

    cJSON *name = cJSON_GetObjectItem(body, CWEB_HYDRATON_JSON_NAME);


    if(name == NULL){
        privateCWebHydration_raise_error(
            self,
            NULL,
            CWEB_HYDRATION_NAME_NOT_PROVIDED,
            CWEB_HYDRATION_NAME_NOT_PROVIDED_MSG
        );
        return private_CWebHydration_formmat_error_response(self);
    }


    if(!cJSON_IsString(name)){
            privateCWebHydration_raise_error(
                self,
                NULL,
                CWEB_HYDRATION_NAME_NOT_STRING,
                CWEB_HYDRATION_NAME_NOT_STRING_MSG
            );
            return private_CWebHydration_formmat_error_response(self);
    }

    cJSON *args = cJSON_GetObjectItem(body, CWEB_HYDRATON_JSON_ARGS);
    if(args == NULL){
        privateCWebHydration_raise_error(
            self,
            NULL,
            CWEB_HYDRATION_ARGS_NOT_PROVIDED,
            CWEB_HYDRATION_ARGS_NOT_PROVIDED_MSG
        );
        return private_CWebHydration_formmat_error_response(self);
    }

    if(!cJSON_IsArray(args)){
        privateCWebHydration_raise_error(
            self,
            NULL,
            CWEB_HYDRATION_ARGS_NOT_ARRAY,
            CWEB_HYDRATION_ARGS_NOT_ARRAY_MSG
        );
        return private_CWebHydration_formmat_error_response(self);
    }

    cJSON *content = cJSON_GetObjectItem(body, CWEB_HYDRATON_JSON_CONTENT);

    if(content == NULL){
        privateCWebHydration_raise_error(
            self,
            NULL,
            CWEB_HYDRATION_CONTENT_NOT_PROVIDED,
            CWEB_HYDRATION_CONTENT_NOT_PROVIDED_MSG
        );
        return private_CWebHydration_formmat_error_response(self);
    }
    if(!cJSON_IsObject(content)){
        privateCWebHydration_raise_error(
            self,
            NULL,
            CWEB_HYDRATION_CONTENT_NOT_OBJECT,
            CWEB_HYDRATION_CONTENT_NOT_OBJECT_MSG
        );
        return private_CWebHydration_formmat_error_response(self);
    }

    int size =cJSON_GetArraySize(content);
    for(int i = 0; i < size;i++){
        cJSON *current_search  = cJSON_GetArrayItem(content, i);
        if(!cJSON_IsArray(current_search)){
            privateCWebHydration_raise_error(
                self,
                NULL,
                CWEB_HYDRATION_CONTENT_SEARCH_NOT_ARRAY,
                CWEB_HYDRATION_CONTENT_SEARCH_NOT_ARRAY_MSG,
                current_search->string
            );
            return private_CWebHydration_formmat_error_response(self);
        }
    }


    char *name_str = cJSON_GetStringValue(name);
    CWebHyDrationBridge *target_bridge = NULL;
    for(int i = 0; i < self->all_bridges->size;i++){
        CWebHyDrationBridge *current = self->all_bridges->elments[i];
        if(strcmp(current->name,name_str)==0){
                target_bridge = current;
                break;
        }
    }
    if(target_bridge == NULL){
        privateCWebHydration_raise_error(
            self,
            NULL,
            CWEB_BRIDGE_NOT_FOUND,
            CWEB_BRIDGE_NOT_FOUND_MSG,
            name_str
        );
        return private_CWebHydration_formmat_error_response(self);
    }

    self->args =args;
    self->content = content;
    target_bridge->callback(target_bridge);
    if(self->error_code){
        return private_CWebHydration_formmat_error_response(self);

    }
    CwebHttpResponse *final_response = cweb_send_cJSON_cleaning_memory(self->response, 200);
    self->response = NULL;
    return final_response;

}
CwebHttpResponse *private_CWebHydration_formmat_error_response(CWebHyDration *self){
    cJSON * response = cJSON_CreateObject();
    cJSON_AddStringToObject(response, CWEB_HYDRATION_JSON_ERROR_MENSSAGE,self->error_msg);
    cJSON_AddNumberToObject(response, CWEB_HYDRATION_JSON_ERROR_CODE_KEY,self->error_code);
    return cweb_send_cJSON_cleaning_memory(response, 404);
}


char *CWebHyDration_create_script(CWebHyDration *self) {

    if(self->script_text) {
        CTextStack_free(self->script_text);
    }

    self->script_text = newCTextStack_string_empty();

    CTextStack_format(self->script_text,"%s", private_cweb_hydration_js_content);

    for(int i =0; i < self->all_bridges->size;i++) {
        CWebHyDrationBridge *current = self->all_bridges->elments[i];
        CTextStack* created_code =private_CWebHyDrationBridge_create_script(current);
        CTextStack_format(self->script_text,"%tc",created_code);
    }
    return self->script_text->rendered_text;

}

void private_CWebHyDration_free(CWebHyDration *self) {
    if(self->script_text) {
        CTextStack_free(self->script_text);
    }
    if(self->error_msg){
        free(self->error_msg);
    }
    if(self->response){
        cJSON_Delete(self->response);
    }


    privateCWebHyDrationBridgeArray_free(self->all_bridges);
    free(self);
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CWebHyDrationSearchRequirements * private_newCWebHyDrationSearchRequirements_getting_name_ownership(
    CWebHyDrationBridge *bridge, char *name
){
    CWebHyDrationSearchRequirements *self = (CWebHyDrationSearchRequirements*)malloc(sizeof(CWebHyDrationSearchRequirements));
    self->bridge =bridge;
    self->name =name;
    return self;
}


void private_CWebHyDrationSearchRequirements_free(CWebHyDrationSearchRequirements *self){
        free(self->name);
        free(self);
}


void CWebHyDrationSearchRequirements_add_function(CWebHyDrationSearchRequirements *self,const char *function,...){
    va_list  args;
    va_start(args,function);
    char *func_value = private_CWeb_format_vaarg(function,args);
    va_end(args);


    CTextStack *callback = newCTextStack_string_format(
        "private_cweb_handle_required_data(%s,args,content,'%s');",
        func_value,
        self->name
    );

    free(func_value);
    char *callback_str = CTextStack_self_transform_in_string_and_self_clear(callback);
    CwebStringArray_add_getting_ownership(self->bridge->requirements_code, callback_str);
}

void private_CWebHyDrationSearchRequirements_add_elements_by_query_selector(
    CWebHyDrationSearchRequirements *self,
    const char *query_selector,bool auto_convert
){
    const char *auto_convert_str = "false";
    if(auto_convert){
        auto_convert_str = "true";
    }
    CWebHyDrationSearchRequirements_add_function(self,
        "function (args){\
            return private_cweb_get_elements({\
            query_selector:`%s`,\
            auto_convert:%s\
            })\
        }",
        query_selector,
        auto_convert_str
    );

}



void CWebHyDrationSearchRequirements_add_elements_by_query_selector(
    CWebHyDrationSearchRequirements *self,
    const char *query_selector,
    ...
){

    va_list  args;
    va_start(args,query_selector);
    char *formmated_query_selector = private_CWeb_format_vaarg(query_selector,args);
    va_end(args);

    private_CWebHyDrationSearchRequirements_add_elements_by_query_selector(
        self,
        formmated_query_selector,
        true
    );
    free(formmated_query_selector);
}





void CWebHyDrationSearchRequirements_add_elements_by_query_selector_not_auto_converting(
    CWebHyDrationSearchRequirements *self,const char *query_selector,...){

    va_list  args;
    va_start(args,query_selector);
    char *formmated_query_selector = private_CWeb_format_vaarg(query_selector,args);
    va_end(args);

    private_CWebHyDrationSearchRequirements_add_elements_by_query_selector(
        self,
        formmated_query_selector,
        false
    );
    free(formmated_query_selector);
}





void CWebHyDrationSearchRequirements_add_elements_by_attribute(
    CWebHyDrationSearchRequirements *self,
   const char *attribute,
   const char*attribute_value,
   ...
){

    va_list  args;
    va_start(args,attribute_value);
    char *formmated_attribute = private_CWeb_format_vaarg(attribute_value,args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_elements_by_query_selector(
        self,
        "[%s='%s']",
        attribute,
        attribute_value
    );
    free(formmated_attribute);
}

void CWebHyDrationSearchRequirements_add_elements_by_attribute_not_auto_converting(
    CWebHyDrationSearchRequirements *self,
    const char *attribute,
    const char*attribute_value,
    ...
){

    va_list  args;
    va_start(args,attribute_value);
    char *formmated_attribute = private_CWeb_format_vaarg(attribute_value,args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_elements_by_query_selector_not_auto_converting(
        self,
        "[%s='%s']",
        attribute,
        attribute_value
    );
    free(formmated_attribute);
}



void CWebHyDrationSearchRequirements_add_elements_by_class_name(
    CWebHyDrationSearchRequirements *self,
    const char*class_value,
    ...
){

    va_list  args;
    va_start(args,class_value);
    char *formmatted_class = private_CWeb_format_vaarg(class_value,args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_elements_by_query_selector(
        self,
        "[class='%s']",
        formmatted_class
    );
    free(formmatted_class);
}

void CWebHyDrationSearchRequirements_add_elements_by_class_name_not_auto_converting(
    CWebHyDrationSearchRequirements *self,
    const char*class_value,...
){
    va_list  args;
    va_start(args,class_value);
    char *formmatted_class = private_CWeb_format_vaarg(class_value,args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_elements_by_query_selector_not_auto_converting(
        self,
        "[class='%s']",
        formmatted_class
    );
    free(formmatted_class);
}


void CWebHyDrationSearchRequirements_add_elements_by_id(
    CWebHyDrationSearchRequirements *self,
    const char*id_values,
    ...
){

    va_list  args;
    va_start(args,id_values);
    char *formmated_id = private_CWeb_format_vaarg(id_values,args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_elements_by_query_selector(
        self,
        "[id='%s']",
        formmated_id
    );
    free(formmated_id);
}

void CWebHyDrationSearchRequirements_add_elements_by_id_not_auto_converting(
    CWebHyDrationSearchRequirements *self,
    const char*id_values,
    ...
){

    va_list  args;
    va_start(args,id_values);
    char *formmated_id = private_CWeb_format_vaarg(id_values,args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_elements_by_query_selector_not_auto_converting(
        self,
        "[id='%s']",
        formmated_id
    );
    free(formmated_id);
}

void CWebHyDrationSearchRequirements_add_session_storage_item_not_converting(
    CWebHyDrationSearchRequirements *self,
    const char *name,
    ...
){

    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_function(self,
        "function (args){\
            return private_cweb_get_session_storage_item({\
            name:`%s`,\
            auto_convert:false\
            })\
        }",
        formmated_name
    );
    free(formmated_name);
}


void CWebHyDrationSearchRequirements_add_session_storage_item(
    CWebHyDrationSearchRequirements *self,
    const char *name,
    ...
){

    va_list  args;
    va_start(args,name);
    char *formmated_name = private_CWeb_format_vaarg(name,args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_function(self,
        "function (args){\
            return private_cweb_get_session_storage_item({\
            name:`%s`,\
            auto_convert:true\
            })\
        }",
        formmated_name
    );
    free(formmated_name);
}

void CWebHyDrationSearchRequirements_add_cookie_item(CWebHyDrationSearchRequirements *self, const char *name){

    CWebHyDrationSearchRequirements_add_function(self,
        "function(args){\
            return private_cweb_get_value_cookie_by_key(\"%s\")\
        }",
        name
    );
}

void CWebHyDrationSearchRequirements_add_confirm(CWebHyDrationSearchRequirements *self, const char *message, ...){

    va_list  args;
    va_start(args, message);
    char *formmated_name = private_CWeb_format_vaarg(message, args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_function(self,
        "function(args){\
            return confirm('%s');\
        }",
        formmated_name);

    free(formmated_name);
}

void CWebHyDrationSearchRequirements_add_prompt(CWebHyDrationSearchRequirements *self, const char *message, ...){

    va_list  args;
    va_start(args, message);
    char *formmated_name = private_CWeb_format_vaarg(message, args);
    va_end(args);

    CWebHyDrationSearchRequirements_add_function(self,
        "function(args){\
            return prompt('%s');\
        }",
        formmated_name);
    free(formmated_name);
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CWebHyDrationSearchResult * private_newCWebHyDrationSearchResult(CWebHyDrationBridge *bridge,cJSON *search){

    CWebHyDrationSearchResult *self = (CWebHyDrationSearchResult*)malloc(sizeof(CWebHyDrationSearchResult));
    self->bridge = bridge;
    self->search = search;
    self->name = search->string;
    return  self;
}

void privateCWebHyDrationSearchResult_free(CWebHyDrationSearchResult *self){
    free(self);
}

int  CWebHyDrationSearchResult_get_total_itens(CWebHyDrationSearchResult *self){
    if(CWebHyDrationBridge_has_errors(self->bridge)){
        return -1;
    }

    return cJSON_GetArraySize(self->search);
}

bool  privateCWebHyDrationSearchResult_has_erorrs(CWebHyDrationSearchResult *self){
    if(self == NULL){
        return true;
    }
    if(CWebHyDrationBridge_has_errors(self->bridge)){
        return true;
    }
    return false;
}

bool  CWebHyDrationSearchResult_search_item_exist(CWebHyDrationSearchResult *self,int index){

    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return false;
    }

    cJSON *item = cJSON_GetArrayItem(self->search, index);
   return item != NULL;
}



bool  CWebHyDrationSearchResult_is_search_item_number(CWebHyDrationSearchResult *self,int index){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return false;
    }


    cJSON *item = cJSON_GetArrayItem(self->search, index);
    if(item == NULL){
        return false;
    }
   return cJSON_IsNumber(item);
}

bool  CWebHyDrationSearchResult_is_search_item_bool(CWebHyDrationSearchResult *self,int index){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return false;
    }

    cJSON *item = cJSON_GetArrayItem(self->search, index);
    if(item == NULL){
        return false;
    }
   return cJSON_IsBool(item);
}




bool  CWebHyDrationSearchResult_is_search_item_string(CWebHyDrationSearchResult *self,int index){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return false;
    }


    cJSON *item = cJSON_GetArrayItem(self->search, index);
    if(item == NULL){
        return false;
    }
   return cJSON_IsString(item);
}


cJSON * private_CWebHyDrationSearchResult_get_cJSON_item_verifying_type(

    CWebHyDrationSearchResult *self,
    int index,
    cJSON_bool  (*callback_verifier)( cJSON *  item),
    const char *expected_type
){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return NULL;
    }


    cJSON *item  = cJSON_GetArrayItem(self->search,index);
    CWebHyDrationBridge *bridge = (CWebHyDrationBridge*)self->bridge;
    CWebHyDration *hydration = (CWebHyDration*)bridge->hydration;
    if(item == NULL){
        privateCWebHydration_raise_error(
            hydration,
            bridge,
            CWEB_HYDRATION_SEARCH_ITEM_NOT_EXIST,
            CWEB_HYDRATION_SEARCH_ITEM_NOT_EXIST_MSG,
            self->name,
            index
        );
        return NULL;
    }

    if(!callback_verifier(item)){
        privateCWebHydration_raise_error(
            hydration,
            bridge,
            CWEB_HYDRATION_SEARCH_ITEM_WRONG_TYPE,
            CWEB_HYDRATION_SEARCH_ITEM_WRONG_TYPE_MSG,
            self->name,
            index,
            expected_type
        );
        return NULL;
    }

    return item;
}

double CWebHyDrationSearchResult_get_double(CWebHyDrationSearchResult *self,int  index){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return -1;
    }


    cJSON *item = private_CWebHyDrationSearchResult_get_cJSON_item_verifying_type(self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsNumber,CWEB_HYDRATION_NUMBER);
    if(item == NULL){
        return -1;
    }
    return cJSON_GetNumberValue(item);
}

long CWebHyDrationSearchResult_get_long(CWebHyDrationSearchResult *self,int  index){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return -1;
    }

    cJSON *item = private_CWebHyDrationSearchResult_get_cJSON_item_verifying_type(
        self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsNumber,CWEB_HYDRATION_NUMBER);
    if(item == NULL){
        return -1;
    }
    return (long)cJSON_GetNumberValue(item);
}

bool CWebHyDrationSearchResult_get_bool(CWebHyDrationSearchResult *self,int  index){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return false;
    }


    cJSON *item = private_CWebHyDrationSearchResult_get_cJSON_item_verifying_type(
        self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsBool,CWEB_HYDRATION_BOOL);
    if(item == NULL){
        return -1;
    }
    return (bool)item->valueint;
}


char*  CWebHyDrationSearchResult_get_string(CWebHyDrationSearchResult *self,int  index){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return NULL;
    }


    cJSON *item = private_CWebHyDrationSearchResult_get_cJSON_item_verifying_type(
        self,index,(cJSON_bool  (*)( cJSON *  item))cJSON_IsString,CWEB_HYDRATION_STRING);
    if(item == NULL){
        return NULL;
    }
    return cJSON_GetStringValue(item);
}

cJSON *  CWebHyDrationSearchResult_get_cJSON(CWebHyDrationSearchResult *self,int  index){
    if(privateCWebHyDrationSearchResult_has_erorrs(self)){
        return NULL;
    }


    cJSON *item = private_CWebHyDrationSearchResult_get_cJSON_item_verifying_type(
        self,index,NULL,NULL

    );
    return item;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
CwebKeyVal* newCwebKeyVal(const char *key, const  char *value){
     CwebKeyVal *self = (struct CwebKeyVal*)malloc(sizeof(struct CwebKeyVal));
    self->key = (char*)malloc(strlen(key)+1);
    strcpy(self->key,key);
    self->value = (char*)malloc(strlen(value)+1);
    strcpy(self->value,value);
    return self;
}

void CwebKeyVal_represent( CwebKeyVal *self){
    printf("%s : %s\n",self->key,self->value);
}

void CwebKeyVal_free( CwebKeyVal *self){
    free(self->key);
    free(self->value);
    free(self);
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebDictModule newCwebDictModule(){
    CwebDictModule self = {0};
    self.newDict = newCwebDict;
    self.set = CwebDict_set;
    self.get = CwebDict_get;
    self.get_by_normalized_key = CwebDict_get_by_normalized_key;
    self.free = CwebDict_free;
    self.represent = CwebDict_represent;

    self.keyval = newCwebKeyValModule();
    return  self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CwebKeyValModule newCwebKeyValModule(){
    CwebKeyValModule self = {0};
    self.represent = CwebKeyVal_represent;
    self.free = CwebKeyVal_free;

    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CWebHydrationActionsNamespace newCWebHydrationActionsNamespace(){
    CWebHydrationActionsNamespace self ={0};


    self.replace_element_by_query_selector = CWebHyDrationBridge_replace_element_by_query_selector;
    self.append_by_query_selector = CWebHyDrationBridge_append_by_query_selector;
    self.destroy_by_query_selector =  CWebHyDrationBridge_destroy_by_query_selector;
    self.remove_session_storage_data =  CWebHyDrationBridge_remove_session_storage_data;
    self.hide_element_by_query_selector = CWebHyDrationBridge_hide_element_by_query_selector;
    self.unhide_element_by_query_selector=  CWebHyDrationBridge_unhide_element_by_query_selector;
    self.hide_element_by_id = CWebHyDrationBridge_hide_element_by_id;
    self.unhide_element_by_id= CWebHyDrationBridge_unhide_element_by_id;
    self.append_by_id = CWebHyDrationBridge_append_by_id;
    self.set_session_storage_data = CWebHyDrationBridge_set_session_storage_data;
    self.alert = CWebHyDrationBridge_alert;
    self.execute_script = CWebHyDrationBridge_execute_script;
    self.replace_element_by_id = CWebHyDrationBridge_replace_element_by_id;
    self.destroy_by_id = CWebHyDrationBridge_destroy_by_id;
    self.redirect = CWebHydration_redirect;
    self.add_cookie_with_time = CWebHydrationBridge_creatCookie_with_time;
    self.add_cookie = CWebHydrationBridge_creatCookie;
    self.delet_cookie = CWebHyDrationBridge_deletCookie;
    self.console_log = CWebHyDration_console_log;
    self.console_warn = CWebHyDration_console_warn;
    self.console_clear = CWebHyDration_console_clear;
    self.console_error = CWebHyDration_console_error;
    self.add_class_by_id = CWebHyDrationBridge_add_class_by_id;
    self.remove_class_by_id = CWebHyDrationBridge_remove_class_by_id;
    self.remove_class_by_query_selector = CWebHyDrationBridge_remove_class_by_query_selector;

    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CWebHydrationArgsNamespace newCWebHydrationArgsNamespace(){
    CWebHydrationArgsNamespace self = {0};
    self.get_args_size  = CWebHyDrationBridge_get_args_size;
    self.is_arg_number = CWebHyDrationBridge_is_arg_number;
    self.is_arg_bool = CWebHyDrationBridge_is_arg_bool;
    self.is_arg_string  = CWebHyDrationBridge_is_arg_string;
    self.is_arg_null = CWebHyDrationBridge_is_arg_null;
    self.get_double_arg = CWebHyDrationBridge_get_double_arg;
    self.get_long_arg = CWebHyDrationBridge_get_long_arg;
    self.get_bool_arg = CWebHyDrationBridge_get_bool_arg;
    self.get_str_arg = CWebHyDrationBridge_get_str_arg;
    self.get_cJSON_arg  = CWebHyDrationBridge_get_cJSON_arg;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CWebHydrationBridgeNamespace newCWebHydrationBridgetNamespace(){
    CWebHydrationBridgeNamespace self = {0};
    self.call = CWebHyDrationBridge_call;
    self.call_trigger = CWebHyDrationBridge_call_trigger;
    self.onclick =CWebHyDrationBridge_onclick;
    self.onfoccusout =CWebHyDrationBridge_onfoccusout;
    self.has_errors = CWebHyDrationBridge_has_errors;
    self.create_bridge = CWebHyDration_create_bridge;
    self.get_child_bridge = CWebHyDration_get_child_bridge;
    self.get_brother_bridge =CWebHyDrationBridge_get_brother_bridge;

    self.create_stack = CWebHyDrationBridge_create_stack;
    self.create_empty_stack = CWebHyDrationBridge_create_empty_stack;

    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CWebHydrationNamespace newCWebHydrationNamespace() {
    CWebHydrationNamespace self = {0};
    self.newCWebHyDration = newCWebHyDration;
    self.is_the_trigger = CWebHyDration_is_the_trigger;
    self.create_script = CWebHyDration_create_script;
    self.create_stack = CWebHyDration_create_stack;
    self.create_empty_stack = CWebHyDration_create_empty_stack;
    self.generate_response = CWebHydration_generate_response;

    self.bridge = newCWebHydrationBridgetNamespace();
    self.actions =newCWebHydrationActionsNamespace();
    self.search_requirements =newCWebHydrationSearchRequirementsNamespace();
    self.search_result = newCWebHydrationSearchResultNamespace();
    self.args = newCWebHydrationArgsNamespace();
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CWebHydrationSearchRequirementsNamespace newCWebHydrationSearchRequirementsNamespace(){
    CWebHydrationSearchRequirementsNamespace self = {0};


    self.newSearchRequirements = CWebHyDrationBridge_newSearchRequirements;
    self.add_function = CWebHyDrationSearchRequirements_add_function;
    self.add_elements_by_query_selector = CWebHyDrationSearchRequirements_add_elements_by_query_selector;
    self.add_elements_by_query_selector_not_auto_converting = CWebHyDrationSearchRequirements_add_elements_by_query_selector_not_auto_converting;
    self.add_elements_by_attribute = CWebHyDrationSearchRequirements_add_elements_by_attribute;
    self.add_elements_by_attribute_not_auto_converting = CWebHyDrationSearchRequirements_add_elements_by_attribute_not_auto_converting;
    self.add_elements_by_class_name = CWebHyDrationSearchRequirements_add_elements_by_class_name;
    self.add_elements_by_class_name_not_auto_converting =CWebHyDrationSearchRequirements_add_elements_by_class_name_not_auto_converting;
    self.add_elements_by_id = CWebHyDrationSearchRequirements_add_elements_by_id;
    self.add_elements_by_id_not_auto_converting = CWebHyDrationSearchRequirements_add_elements_by_id_not_auto_converting;
    self.add_session_storage_item_not_converting = CWebHyDrationSearchRequirements_add_elements_by_id_not_auto_converting;
    self.add_session_storage_item = CWebHyDrationSearchRequirements_add_session_storage_item;
    self.add_value_cookie_by_key = CWebHyDrationSearchRequirements_add_cookie_item;
    self.add_confirm = CWebHyDrationSearchRequirements_add_confirm;
    self.add_prompt = CWebHyDrationSearchRequirements_add_prompt;

    self.add_elements_by_id_setting_search_as_same_name =
        CWebHyDrationBridge_add_elements_by_id_setting_search_as_same_name;

    self.add_elements_by_id_setting_search_as_same_name_not_auto_converting =
        CWebHyDrationBridge_add_elements_by_id_setting_search_as_same_name_not_auto_converting;

    self.add_elements_by_class_name_setting_search_as_same_name =
        CWebHyDrationBridge_add_elements_by_class_name_setting_search_as_same_name;

    self.add_elements_by_class_name_setting_search_as_same_name_not_auto_converting =
        CWebHyDrationBridge_add_elements_by_class_name_setting_search_as_same_name_not_auto_converting;


    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CWebHydrationSearchResultNamespace newCWebHydrationSearchResultNamespace(){
    CWebHydrationSearchResultNamespace self = {0};
    self.get_total_avaialible_searchs = CWebHyDrationBridge_get_total_avaialible_searchs;
    self.get_search_by_index = CWebHyDrationBridge_get_search_by_index;
    self.get_search_by_name =  CWebHyDrationBridge_get_search_by_name;
    self.search_exist = CWebHyDrationBridge_search_exist;
    self.get_double_from_first_element_of_search = CWebHyDrationBridge_get_double_from_first_element_of_search;
    self.get_long_from_first_element_of_search = CWebHyDrationBridge_get_long_from_first_element_of_search;
    self.get_bool_from_first_element_of_search = CWebHyDrationBridge_get_bool_from_first_element_of_search;
    self.get_string_from_first_element_of_search = CWebHyDrationBridge_get_string_from_first_element_of_search;
    self.get_cJSON_from_first_element_of_search = CWebHyDrationBridge_get_cJSON_from_first_element_of_search;
    self.get_total_itens = CWebHyDrationSearchResult_get_total_itens;
    self.search_item_exist = CWebHyDrationSearchResult_search_item_exist;
    self.is_search_item_number = CWebHyDrationSearchResult_is_search_item_number;
    self.is_search_item_bool =  CWebHyDrationSearchResult_is_search_item_bool;
    self.is_search_item_string = CWebHyDrationSearchResult_is_search_item_string;
    self.get_double = CWebHyDrationSearchResult_get_double;
    self.get_long = CWebHyDrationSearchResult_get_long;
    self.get_bool = CWebHyDrationSearchResult_get_bool;
    self.get_string = CWebHyDrationSearchResult_get_string;
    self.get_cJSON = CWebHyDrationSearchResult_get_cJSON;

    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebNamespace newCwebNamespace(){
    CwebNamespace self = {0};
    self.dict = newCwebDictModule();
    self.request = newCwebRequestModule();
    self.response = newCwebHttpResponseModule();
    self.server = newCwebServerModule();
    self.string_array = newCwebStringArrayModule();
    self.hydration = newCWebHydrationNamespace();
    return self;
}


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CwebHttpRequestModule newCwebRequestModule(){
    CwebHttpRequestModule self = {0};
    self.newCwebHttpRequest = newCwebHttpRequest;
    self.read_content = CwebHttpRequest_read_content;
    self.read_cJSON = CWebHttpRequest_read_cJSON;
    self.set_url = CwebHttpRequest_set_url;
    self.set_route = CwebHttpRequest_set_route;
    self.set_method = CwebHttpRequest_set_method;
    self.add_header =CwebHttpRequest_add_header;
    self.add_param = CwebHttpRequest_add_param;
    self.set_content_string = CwebHttpRequest_set_content_string;
    self.parse_http_request = CwebHttpRequest_parse_http_request;


    self.get_header = CwebHttpRequest_get_header;
    self.get_header_by_normalized_key = CwebHttpRequest_get_header_by_normalized_key;
    self.get_param = CwebHttpRequest_get_param;
    self.represent = CwebHttpRequest_represent;
    self.create_stack = CwebHttpRequest_create_empty_stack;
    self.create_empty_stack =CwebHttpRequest_create_stack;


    self.free =CwebHttpRequest_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



CwebHttpResponseModule newCwebHttpResponseModule(){
    CwebHttpResponseModule self = {0};

    self.newHttpResponse  = newCwebHttpResponse;
    self.send_any = cweb_send_any;
    self.send_json_string = cweb_send_json_string;
    self.send_cJSON = cweb_send_cJSON;
    self.send_cJSON_cleaning_memory = cweb_send_cJSON_cleaning_memory;
    self.send_var_html_cleaning_memory = cweb_send_json_string_cleaning_memory;
    self.send_text = cweb_send_text;
    self.send_text_cleaning_memory = cweb_send_text_cleaning_memory;
    self.send_rendered_CTextStack = cweb_send_rendered_CTextStack;
    self.send_var_html = cweb_send_var_html;
    self.send_var_html_cleaning_memory = cweb_send_var_html_cleaning_memory;
    self.send_file = cweb_send_file;

    self.set_content = CwebHttpResponse_set_content;
    self.add_header = CwebHttpResponse_add_header;
    self.generate_response = CwebHttpResponse_generate_response;
    self.free = CwebHttpResponse_free;
    return self;

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebServerModule newCwebServerModule(){
    CwebServerModule self = {0};
    self.newServer = newCwebSever;
    self.start = CwebServer_start;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CwebStringArrayModule newCwebStringArrayModule(){
    CwebStringArrayModule self ={0};
    self.newStringArray = newCwebStringArray;
    self.set = CwebStringArray_set;
    self.add = CwebStringArray_add;
    self.merge = CwebStringArray_merge;
    self.represent = CwebStringArray_represent;
    self.find = CwebStringArray_find;
    self.free = CwebStringArray_free;
    return  self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


 CwebHttpRequest *newCwebHttpRequest(int socket){
     CwebHttpRequest *self = ( CwebHttpRequest*)malloc(sizeof( CwebHttpRequest));
    *self = (CwebHttpRequest){0};
    self->socket = socket;
    self->params = newCwebDict();
    self->headers = newCwebDict();
    self->garbage = newUniversalGarbage();
    return self;
}



unsigned char * CwebHttpRequest_read_content( CwebHttpRequest *self, long max_content_size) {

    if (self->content != NULL) {
        return self->content;
    }


    if (self->content_length == 0) {
        cweb_print("no content lenght provided\n");
        self->content_error = UNDEFINED_CONTENT;
        return NULL;
    }

    if (self->content_length > max_content_size) {
        cweb_print("content size is too big\n");
        self->content_error = MAX_CONTENT_SIZE;
        return NULL;
    }


    struct timeval timer;
    timer.tv_sec = 5;  // tempo em segundos
    timer.tv_usec = 0;  //

    Universal_setsockopt(self->socket, SOL_SOCKET, SO_RCVTIMEO, &timer, sizeof(timer));

    self->content = (unsigned char*) malloc(self->content_length + 2);

    int total_bytes_received = 0;
    int bytes_remaining = self->content_length;

    while (bytes_remaining > 0) {
        int bytes_received = recv(self->socket, self->content + total_bytes_received, bytes_remaining, 0);
        if (bytes_received <= 0) {
            self->content_error =READ_ERROR;
            return NULL;
        }

        total_bytes_received += bytes_received;
        bytes_remaining -= bytes_received;
    }

    self->content[total_bytes_received] = '\0';

    //extracting url encoded data
    char *content_type = CwebHttpRequest_get_header_by_normalized_key(self, "contenttype", "- ");

    if (content_type != NULL) {
        if (strcmp(content_type, "application/x-www-form-urlencoded") == 0) {
            char *decoded = private_cweb_convert_url_encoded_text((char*) self->content);
            private_CwebHttpRequest_interpret_query_params(self, decoded);
            free(decoded);
        }
    }

    return self->content;
}


cJSON * CWebHttpRequest_read_cJSON(CwebHttpRequest *self, long max_content_size){
    unsigned  char *content =CwebHttpRequest_read_content(self,max_content_size);
    if(!content){
        return NULL;
    }

    self->json = cJSON_Parse((char*)self->content);
    if(!self->json){
        self->content_error= INVALID_JSON;
        return NULL;
    }
    return self->json;
}



char * CwebHttpRequest_get_header( CwebHttpRequest *self, const char *key){
    return CwebDict_get(self->headers,key);
}

char * CwebHttpRequest_get_param_by_sanitized_key( CwebHttpRequest *self, const char *key, const char *chars_to_remove){
    return CwebDict_get_by_normalized_key(self->params,key,chars_to_remove);
}

char * CwebHttpRequest_get_param( CwebHttpRequest *self, const char *key){
    return CwebDict_get(self->params,key);
}
char * CwebHttpRequest_get_header_by_normalized_key( CwebHttpRequest *self, const char *key, const char *chars_to_remove){
    return CwebDict_get_by_normalized_key(self->headers,key,chars_to_remove);
}



void CwebHttpRequest_set_route( CwebHttpRequest *self, const char *route){
    self->route = (char*) malloc(strlen(route) +2);
    strcpy(self->route,route);
}

void CwebHttpRequest_add_header( CwebHttpRequest *self, const char *key, const char *value){
    CwebDict_set(self->headers,key,value);
}
void CwebHttpRequest_add_param( CwebHttpRequest *self, const char *key, const char *value){
    CwebDict_set(self->params,key,value);
}

void CwebHttpRequest_set_method( CwebHttpRequest *self, const char *method){
    self->method = (char*) malloc(strlen(method)+2);
    strcpy(self->method,method);
}


void CwebHttpRequest_set_content_string( CwebHttpRequest *self, const char *content){
    self->content_length = strlen(content);
    self->content = (unsigned char*) malloc(strlen(content) +2);
    for(int i =0;i<strlen(content);i++){
        self->content[i] = content[i];
    }
}


void CwebHttpRequest_represent( CwebHttpRequest *self){

    printf("url: %s\n", self->url);
    printf("route: %s\n", self->route);
    printf("method: %s\n", self->method);
    printf("client-ip: %s\n",self->client_ip);
    printf("params:-----------------------------\n");
    CwebDict_represent(self->params);
    printf("headers:----------------------------\n");
    CwebDict_represent(self->headers);
    if(self->content){
        printf("content: %s\n", self->content);
    }

}
CTextStack *CwebHttpRequest_create_empty_stack(CwebHttpRequest *self){
    CTextStack *created = newCTextStack(CTEXT_LINE_BREAKER, CTEXT_SEPARATOR);
    UniversalGarbage_add(self->garbage, CTextStack_free, created);
    return created;
}

CTextStack *CwebHttpRequest_create_stack(CwebHttpRequest *self){
    CTextStack *created = newCTextStack_string_empty();
    UniversalGarbage_add(self->garbage, CTextStack_free, created);
    return created;
}


void CwebHttpRequest_free( CwebHttpRequest *self){



    if(self->url){
        free(self->url);
    }
    if(self->route){
        free(self->route);
    }
    if(self->content){
        free(self->content);
    }
    if(self->client_ip){
        free(self->client_ip);
    }
    if(self->json){
        cJSON_Delete(self->json);
    }

    if(self->method){
        free(self->method);
    }

    if(self->hydratation){
        private_CWebHyDration_free((CWebHyDration *)self->hydratation);
    }
    UniversalGarbage_free(self->garbage);

    CwebDict_free(self->params);

    CwebDict_free(self->headers);
    free(self);

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


void private_CwebHttpRequest_interpret_query_params(struct CwebHttpRequest *self, const char *query_params){
    if(!query_params){
        return;
    }
    int paramns_size = strlen(query_params);
    char key[5000] = {0};
    char value[5000] = {0};
    bool key_found = false;

    for(int i =0; i<paramns_size; i++){



        if(query_params[i] == '='&& key_found == false){
            key_found = true;
            continue;
        }

        if(query_params[i] == '&'){
            key_found = false;
            char *sanitized_key = private_cweb_convert_url_encoded_text(key);
            char *sanitized_value = private_cweb_convert_url_encoded_text(value);

            CwebDict_set(self->params, sanitized_key, sanitized_value);
            free(sanitized_key);
            free(sanitized_value);

            memset(key, 0, 5000);
            memset(value, 0, 5000);
            continue;
        }

        if(key_found){
            value[strlen(value)] = query_params[i];
        }

        else{
            key[strlen(key)] = query_params[i];
        }
    }
    if(key_found){

        char *sanitized_key = private_cweb_convert_url_encoded_text(key);
        char *sanitized_value = private_cweb_convert_url_encoded_text(value);
        CwebDict_set(self->params, sanitized_key, sanitized_value);
        free(sanitized_key);
        free(sanitized_value);

    }

}

void CwebHttpRequest_set_url(struct CwebHttpRequest *self, const char *url){
    int size_url = strlen(url);
    self->url = (char*) malloc(size_url+2);
    strcpy(self->url,url);

    char route[5000] = {0};
    char params[5000] = {0};

    bool route_end = false;
    int route_end_position =0;
    int i = 0;
    for(;i < size_url;i++){
        char current_char = url[i];

        if(current_char == '?'){
            route_end = true;
            route_end_position = i+1;
            route[i] = '\0';
            continue;
        }

        if(route_end == false){
            route[i] = current_char;
        }
        if(route_end == true){
            params[i-route_end_position] = current_char;
        }
    }


    self->route = (char*)malloc(strlen(route)+1);
    strcpy(self->route, route);

    if(route_end_position){
        params[i-route_end_position] = '\0';
        private_CwebHttpRequest_interpret_query_params(self, params);
    }


}

int private_CwebHttpRequest_interpret_first_line(struct CwebHttpRequest *self, char *first_line){

    #define CWEB_METHOD_MAX_SIZE 300
    #define CWEB_URL_MAX_SIZE 5000
    char method[CWEB_METHOD_MAX_SIZE] = {0};
    char url[CWEB_URL_MAX_SIZE] = {0};


    int line_len = strlen(first_line);
    int method_end = 0;
    //getting the method

    for (int i = 0; i < line_len; i++){

        if(i >= CWEB_METHOD_MAX_SIZE){
            return INVALID_HTTP;
        }

        char current_char = first_line[i];
        if(current_char == ' '){
            method_end = i;
            method[i] = '\0';
            break;
        }
        method[i] = current_char;

    }

    if(!method_end){
        return INVALID_HTTP;
    }

    CwebHttpRequest_set_method(self,method);


    //getting the url
    int url_start_position = 0;
    bool url_found = false;

    for (int i = method_end; i < line_len; i++){


        if((i - url_start_position) >= CWEB_URL_MAX_SIZE){
            return INVALID_HTTP;
        }

        char current_char = first_line[i];

        if(current_char == ' ' && url_found == true){
            break;
        }

        if(current_char != ' ' && url_found == false){
           url_found = true;
           url_start_position = i;
        }


        if(url_found){
            url[i - url_start_position] = current_char;
        }

    }

    if(!url_found){
        return INVALID_HTTP;
    }
    CwebHttpRequest_set_url(self,url);

    return 0;

}


int private_CwebHttpRequest_interpret_headders(struct CwebHttpRequest *self, struct CwebStringArray *line_headers){

    for(int i = 1;i< line_headers->size;i++){
        char *current_line = line_headers->strings[i];
        int line_size = strlen(current_line);
        char key[1100] = {0};
        char value[11000] = {0};
        bool key_found = false;
        int value_start_point = 0;

        for(int j = 0; j<line_size;j++){

            if(key_found == false && j >= 1000){
                return MAX_HEADER_SIZE_CODE;
            }


            if(key_found == true && j > 10000){
                return MAX_HEADER_SIZE_CODE;
            }



            if(current_line[j] == ':' && key_found == false){

                key_found = true;
                j+=1;
                value_start_point = j;
                continue;

            }


            if(key_found == false){
                key[j] = current_line[j];
            }


            if(key_found == true){
                int size_point = j - value_start_point -1;
               value[size_point] = current_line[j];
            }

        }

        if(key_found){
            CwebHttpRequest_add_header(self, key, value);
        }
        else{
            return INVALID_HTTP;
        }
    }
    return 0;

}


bool private_cweb_is_valid_utf8(const unsigned char *data, size_t length) {
    size_t i = 0;
    while (i < length) {
        if (data[i] <= 127) {
            // ASCII (1 byte): 0xxxxxxx
            i++;
        } else if ((data[i] & 224) == 192) {
            // 2 bytes: 110xxxxx 10xxxxxx
            if (i + 1 >= length || (data[i + 1] & 192) != 128) return false;
            i += 2;
        } else if ((data[i] & 240) == 224) {
            // 3 bytes: 1110xxxx 10xxxxxx 10xxxxxx
            if (i + 2 >= length || (data[i + 1] & 192) != 128 || (data[i + 2] & 192) != 128) return false;
            i += 3;
        } else if ((data[i] & 248) == 240) {
            // 4 bytes: 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
            if (i + 3 >= length || (data[i + 1] & 192) != 128 || (data[i + 2] & 192) != 128 || (data[i + 3] & 192) != 128) return false;
            i += 4;
        } else {
            return false; // Byte inicial inválido
        }
    }
    return true;
}

int  CwebHttpRequest_parse_http_request(struct CwebHttpRequest *self){
        //splite lines by "\r\n"


    unsigned char raw_entries[MAX_HEADER_LEN] ={0};

    int i = 0;
    while (true) {

        if (i >= MAX_HEADER_LEN -10) {
            return MAX_HEADER_SIZE_CODE;
        }
        int flag = 0;
        #if defined(__linux__)
            flag = UNI_MSG_WAITALL;
        #endif
        ssize_t res = Universal_recv(self->socket, &raw_entries[i], sizeof(unsigned char), flag);
        //ssize_t res = read(self->socket, &raw_entries[i],1);
        //printf("v:%d|char:%c\n",raw_entries[i],raw_entries[i]);
        if (res <= 0) {
            return READ_ERROR;
        }


        //line break is \r\n\r\n
        if (i >= 3 &&
            raw_entries[i - 3] == '\r' &&
            raw_entries[i - 2] == '\n' &&
            raw_entries[i - 1] == '\r' &&
                raw_entries[i] == '\n'
           ){

            break;
        }
        i++;

    }



    if(i <= 4){return READ_ERROR;}
   // printf("%s\n",raw_entries);

    bool its_valid_utf8 = private_cweb_is_valid_utf8(raw_entries, i);

    unsigned char last_string[MAX_LINE_LEN]= {0};
    struct CwebStringArray *lines = newCwebStringArray();
    int line_index = 0;

    for(int l =0 ; l < i-1;l++){

        if(line_index >= MAX_LINE_LEN){
            CwebStringArray_free(lines);
            return MAX_HEADER_SIZE_CODE;
        }

        if(raw_entries[l] == '\r' && raw_entries[l+1] == '\n'){
            CwebStringArray_add(lines, (const char*)last_string);
            memset(last_string, 0, 10000);
            line_index = 0;
            l++;
            continue;
        }
        if(!its_valid_utf8){
            // if raw_entries its higher than 127 (max char), it means its uniocde
            // 64 its the dif we have to subtract to apply the conversion
            if (raw_entries[l] > 127 ){
                last_string[line_index+1] = (unsigned char)(raw_entries[l] - 64) ;
                last_string[line_index] = 195;
                line_index+=2;
                continue;
            }
        }

        last_string[line_index] = raw_entries[l];
        line_index++;

    }

    if(lines->size == 0){
        CwebStringArray_free(lines);
        return READ_ERROR;
    }



    int line_error = private_CwebHttpRequest_interpret_first_line(self, lines->strings[0]);

    if(line_error){

        CwebStringArray_free(lines);
        return line_error;
    }

    int headers_error = private_CwebHttpRequest_interpret_headders(self, lines);
    CwebStringArray_free(lines);


    if(headers_error){
        return headers_error;
    }
    //const char *content_lenght_str = self->get_header(self, "Content-Length");
    const char *content_lenght_str = CwebHttpRequest_get_header_by_normalized_key(
            self, "contentlength", "- "
    );

    if(content_lenght_str != NULL){

            for(int i = 0; i<strlen(content_lenght_str);i++){
            if(content_lenght_str[i] < '0' || content_lenght_str[i] > '9'){
                return INVALID_HTTP;
            }
        }

        self->content_length = atoi(content_lenght_str);

    }

    return 0;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CwebHttpResponse *newCwebHttpResponse(){
     CwebHttpResponse *self = ( CwebHttpResponse *)malloc(
        sizeof(CwebHttpResponse)
    );
    self->status_code = 200;
    self->headers = newCwebDict();
    self->content_length = 0;
    self->exist_content = false;
    self->content = NULL;
    //self->add_header(self, "connection", "close");

    return self;
}

char *CwebHttpResponse_generate_response(struct CwebHttpResponse*self){

    char *response_string = (char*)malloc(20000);
    sprintf(response_string, "HTTP/1.1 %d OK\r\n", self->status_code);
    CwebDict *headers = self->headers;
    char content_length_str[1000] = {0};
    sprintf(content_length_str, "Content-Length: %d\r\n",self->content_length);
    strcat(response_string, content_length_str);

    for(int i = 0; i < headers->size; i++){
        CwebKeyVal *key_val = headers->keys_vals[i];
        char *key = key_val->key;
        char *value = key_val->value;
        char header[1000] = {0};
        sprintf(header, "%s: %s\r\n", key, value);
        strcat(response_string, header);
    }
    if(self->headers->size == 0){
        strcat(response_string, "\r\n");
    }
    strcat(response_string, "\r\n");

    return response_string;
}

void CwebHttpResponse_free(struct CwebHttpResponse *self){
    CwebDict_free(self->headers);
    free(self->content);
    free(self);
}

void CwebHttpResponse_set_content(struct CwebHttpResponse *self, unsigned char *content, int content_length){
    self->content = (unsigned char*)malloc(content_length+2);
    memcpy(self->content, content, content_length);
    self->exist_content = true;
    self->content_length = content_length;
}

void CwebHttpResponse_add_header(struct CwebHttpResponse *self, const char *key, const  char *value){
    CwebDict_set(self->headers, key, value);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



 CwebHttpResponse* cweb_send_any(const char *content_type,size_t content_length,unsigned char *content,int status_code){
    CwebHttpResponse *response = newCwebHttpResponse();
    CwebHttpResponse_add_header(response, "Content-Type", content_type);
    CwebHttpResponse_set_content(response, content, content_length);
    response->status_code = status_code;
    return response;
}

CwebHttpResponse * cweb_send_json_string(const char *content,int status_code){
   return cweb_send_any(   "application/json", strlen(content),(unsigned char*)content,status_code);
}


CwebHttpResponse * cweb_send_json_string_cleaning_memory(char *content,int status_code){
    CwebHttpResponse  *response = cweb_send_json_string(content,status_code);
    free(content);
    return response;
}

CwebHttpResponse * cweb_send_cJSON(cJSON *content,int status_code){
    char *rendered = cJSON_Print(content);
    CwebHttpResponse  *response =cweb_send_any(
            "application/json",
            strlen(rendered),
            (unsigned char*)rendered,
            status_code
            );
    free(rendered);
    return response;
}



CwebHttpResponse * cweb_send_cJSON_cleaning_memory(cJSON *content,int status_code){
    CwebHttpResponse  *response = cweb_send_cJSON(content,status_code);
    cJSON_Delete(content);
    return response;
}


CwebHttpResponse* cweb_send_any_cleaning_memory(const char *content_type,size_t content_length,unsigned char *content,int status_code){
     CwebHttpResponse *response = cweb_send_any(content_type,content_length,content,status_code);
    free(content);
    return response;
}


CwebHttpResponse* cweb_send_rendered_CTextStack(struct CTextStack *stack,int status_code){
    return cweb_send_var_html(stack->rendered_text,status_code);
}


CwebHttpResponse* cweb_send_text(const char *content,int status_code){
    return cweb_send_any("text/plain", strlen(content), (unsigned char*)content, status_code);
}


CwebHttpResponse* cweb_send_text_cleaning_memory(char *content,int status_code){
    CwebHttpResponse*  response = cweb_send_any("text/plain", strlen(content), (unsigned char*)content, status_code);
    free(content);
    return response;
}


CwebHttpResponse* cweb_send_var_html(const char *content,int status_code){
    return cweb_send_any("text/html", strlen(content), (unsigned char*)content, status_code);
}


 CwebHttpResponse* cweb_send_var_html_cleaning_memory(char *content,int status_code){
     CwebHttpResponse*  response = cweb_send_any("text/html", strlen(content), (unsigned char*)content, status_code);
    free(content);
    return response;
}



CwebHttpResponse* cweb_send_file(const char *file_path,const char *content_type,int status_code){

    int size = 0;
    unsigned char *content;
    content = cweb_load_binary_content(file_path, &size);

    #ifndef CWEB_NO_STATIC
        if(content == NULL){
            char *not_found_html_page = cweb_load_string_file_content("static/404.html");
            if(not_found_html_page != NULL){
                return cweb_send_var_html_cleaning_memory(not_found_html_page,404);
            }
        }
    #endif

    cweb_print("Writen size: %i\n",size);
    if(content == NULL){
        char mensage[100];
        sprintf(mensage, "File not found: %s", file_path);
        CwebHttpResponse* response =  cweb_send_text(mensage, CWEB_NOT_FOUND);
        return response;
    }

    const char *content_type_created;
    if(content_type == NULL){
        content_type_created  = cweb_generate_content_type(file_path);
    }
    else{
        content_type_created = content_type;
    }

    CwebHttpResponse *response =  cweb_send_any(content_type_created, size, content, status_code);


    if(content != NULL){
        free(content);
    }

    return response;

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

 CwebServer  newCwebSever(int port , CwebHttpResponse *(*request_handler)(CwebHttpRequest *request)){
    struct CwebServer self = {0};
    self.port = port;
    self.function_timeout = 30;
    self.client_timeout = 5;
    self.max_queue = 100;

    #if defined(__linux__)
        self.single_process = false;
    #endif

    self.allow_cors = true;
    self.max_requests = 1000;
    self.static_folder = "static";
    self.use_static = true;
    self.use_cache = true;

    self.request_handler = request_handler;

    return self;
}

#if defined(__linux__)

int CwebServer_start(CwebServer *self){
    cweb_static_folder = self->static_folder;
    if (self->single_process){
       return  private_CWebServer_run_server_in_single_process(self);
    }
    return  private_CWebServer_run_server_in_multiprocess(self);
}
#endif


#if defined(_WIN32)
int CwebServer_start(CwebServer *self){
    cweb_static_folder = self->static_folder;
    return  private_CWebServer_run_server_in_single_process(self);
}
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
#if defined(__linux__)



void private_cweb_execute_request_in_safty_mode(CwebServer  *self,int new_socket, const char *client_ip){

    cweb_print("Creating a new process\n")
    pid_t pid = fork();
    if (pid == 0){
        // means that the process is the child

        alarm(self->function_timeout);
        private_CWebServer_execute_request(self,new_socket, client_ip);
        cweb_print("Request executed\n")
        alarm(0);
        exit(0);
    }

    else if (pid < 0){
        perror("Faluire to create a new process");
        exit(EXIT_FAILURE);
    }

    else{
        //means its the current process
        private_cweb_treat_response(self->use_static,new_socket);

    }

}

int  private_CWebServer_run_server_in_multiprocess(CwebServer *self){
    Universal_socket_int port_socket;

    // Creating socket file descriptor
    if ((port_socket = Universal_socket(UNI_AF_INET, UNI_SOCK_STREAM, 0)) == 0){
        perror("Faluire to create socket");
        exit(EXIT_FAILURE);
    }

    Universal_sockaddr_in address;
    int addrlen = sizeof(address);

    // Configurando a estrutura de endereço do servidor
    address.sin_family = UNI_AF_INET;
    address.sin_addr.s_addr = UNI_INADDR_ANY;
    address.sin_port = htons(self->port);


    // Vinculando o socket à porta especificada
    if (Universal_bind(port_socket, &address, sizeof(address)) < 0){
        perror("Faluire to bind socket");
        return 1;
    }



    // Waiting for connections
    if (Universal_listen(port_socket, self->max_queue) < 0)
    {
        perror("Faluire to listen connections");
        exit(EXIT_FAILURE);
    }


    // Main loop
    printf("Sever is running on port:%d\n", self->port);



    bool informed_mensage= false;
    while (true)
    {

        if(cweb_total_requests >= self->max_requests){

            if(!informed_mensage){
                printf("max requests reached\n");
                informed_mensage = true;
            }

            continue;
        }

        cweb_print("total request  runing %li\n", cweb_total_requests)

        informed_mensage = false;
        cweb_actual_request++;
        cweb_total_requests++;

        // Accepting a new connection in every socket
        int client_socket = Universal_accept(
            port_socket,
            &address,
            (socklen_t *)&addrlen
        );

        char client_ip[INET_ADDRSTRLEN] ={0};
        Universal_inet_ntop(UNI_AF_INET, &(address.sin_addr), client_ip, INET_ADDRSTRLEN);

        cweb_print("----------------------------------------\n")
        cweb_print("Executing request:%lld\n", cweb_actual_request)
        cweb_print("Socket: %d\n", client_socket);


        if (client_socket <  0){
            perror("Faluire to accept connection");
            exit(EXIT_FAILURE);
        }

        pid_t pid = fork();
        if (pid == 0){

            // creates an new socket and parse the request to the new socket
            int new_socket = dup(client_socket);

            struct timeval timer1;
            timer1.tv_sec =  0;
            timer1.tv_usec =  0100000;
            Universal_setsockopt(new_socket, UNI_SOL_SOCKET, UNI_SO_RCVTIMEO, &timer1, sizeof(timer1));


            char buffer[1];
            ssize_t peek_result = recv(new_socket, buffer, 1, MSG_PEEK);

            if (peek_result <= 0) {
                cweb_print("peek: %li\n",peek_result);
                cweb_print("Conection closed By the  Client\n");
                Universal_close(new_socket);  // Fechar o socket do cliente
                exit(0);
            }

            struct timeval timer2;
            long seconds =  (long)self->client_timeout;
            timer2.tv_sec =  seconds;  // tempo em segundos
            timer2.tv_usec =(long)((self->client_timeout - (double)seconds) * 1000000);
            Universal_setsockopt(new_socket, UNI_SOL_SOCKET, UNI_SO_RCVTIMEO, &timer2, sizeof(timer2));



            private_cweb_execute_request_in_safty_mode(self,new_socket,client_ip);


            Universal_close(new_socket);
            cweb_print("Closed Conection with socket %d\n", new_socket);

            exit(0);
        }


        else if (pid < 0){
            perror("Faluire to create a new process");
            exit(EXIT_FAILURE);
        }

        else{
            Universal_close(client_socket);
            cweb_print("Closed Conection with socket %d\n", client_socket);
            //make the parent process ignore the SIGCHLD signal
            signal(SIGCHLD, private_cweb_handle_child_termination);
            continue;
        }


    }
    return 0;
}
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void private_CWebServer_execute_request(CwebServer *self,int socket,const char *client_ip){

    cweb_print("Parsing Request\n");
    CwebHttpRequest *request = newCwebHttpRequest(socket);
    request->client_ip = strdup(client_ip);


    int result = CwebHttpRequest_parse_http_request(request);

    if(result == INVALID_HTTP){
        cweb_print("Invalid HTTP Request\n");
        CwebHttpRequest_free(request);
        return;
    }

    if(result == READ_ERROR){
        cweb_print("Read Error \n");
        CwebHttpRequest_free(request);
        return;
    }
    if(result == MAX_HEADER_SIZE_CODE){
        cweb_print("Max Header Size\n");
        CwebHttpRequest_free(request);
        return;
    }

    cweb_print("created request\n");
    cweb_print("Request method: %s\n", request->method);
    cweb_print("Request url: %s\n", request->url);



    CwebHttpResponse *response = NULL;

    if(self->use_static){
        response = private_cweb_generate_static_response(request,self->use_cache);
    }


    if(!response){
        //lambda que o usuario passa
        response = self->request_handler(request);
    }

    if(response && self->allow_cors){
        private_cweb_generate_cors_response(response);
    }
    cweb_print("executed client lambda\n");


    //means that the main function respond nothing
    if (response == NULL){

        if(self->use_static){
            char formated_404_path[1000]={0};
            sprintf(formated_404_path,"%s/404.html", cweb_static_folder);
            char *formated_html = cweb_load_string_file_content(formated_404_path);

            if(formated_html != NULL){
                response = cweb_send_var_html_cleaning_memory(
                        formated_html,
                        404);
            }

            else{
                response = cweb_send_var_html((const char*)private_cweb_404, 404);
            }
        }
        else{
            response = cweb_send_var_html((const char*)private_cweb_404, 404);

        }


    }

    char *response_str = CwebHttpResponse_generate_response(response);
    cweb_print("Response created\n");

    int flag = 0;
    #if defined(__linux__)
        flag = MSG_NOSIGNAL;
    #endif



    Universal_send(socket, response_str, strlen(response_str), flag);

    // Enviando conteúdo byte a byte
    if (response->exist_content)
    {
        size_t sent = 0;
        while (sent < response->content_length)
        {
            size_t chunk_size = response->content_length - sent;

            ssize_t res = Universal_send(socket, response->content + sent, chunk_size, flag);
            if (res < 0)
            {
                break;
            }
            sent += res;
        }
    }


    free(response_str);
    CwebHttpResponse_free(response);
    CwebHttpRequest_free(request);
    cweb_print("Cleared memory\n");
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int private_CWebServer_run_server_in_single_process(CwebServer *self) {

    if(Universal_start_all() != 0){
      fprintf(stderr, "Failed to initialize Winsock.\n");
      return 1;
    }
    Universal_socket_int port_socket;

    // Creating socket file descriptor
    if ((port_socket = Universal_socket(UNI_AF_INET, UNI_SOCK_STREAM, 0)) == 0){
        perror("Faluire to create socket");
        Universal_end();
        return 1;
    }

    Universal_sockaddr_in address;
    int addrlen = sizeof(address);

    // Configurando a estrutura de endereço do servidor
    address.sin_family = UNI_AF_INET;
    address.sin_addr.s_addr = UNI_INADDR_ANY;
    address.sin_port = htons(self->port);


    // Vinculando o socket à porta especificada
    if (Universal_bind(port_socket,&address, sizeof(address)) < 0)
    {
        printf("Faluire to bind socket to port %d\n", self->port);
        Universal_end();
        return 1;
    }

    // Waiting for connections
    if (Universal_listen(port_socket, self->max_queue) < 0)
    {
        perror("Faluire to listen connections");
        Universal_end();
        return 1;
    }

    // Main loop
    printf("Sever is running on port:%d\n", self->port);


    while (1)
    {

        if(private_cweb_end_server){
                    cweb_print("Break in request %lld\n", cweb_actual_request)
                    break;
        }

        cweb_actual_request++;

        //clear every trash

        // Accepting a new connection in every socket
        int client_socket = Universal_accept(
            port_socket,
            &address,
            (socklen_t *)&addrlen
        );

        char client_ip[INET_ADDRSTRLEN] ={0};
        #if defined(__linux__)
        Universal_inet_ntop(UNI_AF_INET, &(address.sin_addr), client_ip, INET_ADDRSTRLEN);
        #endif
        #if defined(_WIN32)
        const char *buff_client_ip =Universal_inet_ntoa(address.sin_addr);
        strcpy(client_ip,buff_client_ip);
        #endif


        cweb_print("----------------------------------------\n")
        cweb_print("Executing request:%lld\n", cweb_actual_request)
        cweb_print("Socket: %d\n", client_socket)


        if ( client_socket< 0){
            perror("Faluire to accept connection");
            exit(EXIT_FAILURE);
        }

        struct timeval timer1;
        timer1.tv_sec =  0;
        timer1.tv_usec =  0100000;
        Universal_setsockopt(client_socket, UNI_SOL_SOCKET, UNI_SO_RCVTIMEO, &timer1, sizeof(timer1));

        char buffer[1]= {0};
        ssize_t peek_result = Universal_recv(client_socket, buffer, 1, UNI_MSG_PEEK);

        if (peek_result <= 0) {
            cweb_print("peek: %li\n",peek_result)
            cweb_print("Conection closed By the  Client\n")
            Universal_close(client_socket);  // Fechar o socket do cliente
            continue;
        }


        struct timeval timer2;
        long seconds =  (long)self->client_timeout;
        timer2.tv_sec =  seconds ;  // tempo em segundos
        timer2.tv_usec =(long)((self->client_timeout - (double )seconds) * 1000000);
        Universal_setsockopt(client_socket, UNI_SOL_SOCKET, UNI_SO_RCVTIMEO, &timer2, sizeof(timer2));


        private_CWebServer_execute_request(self,client_socket, client_ip);


        Universal_close(client_socket);


        cweb_print("Closed Conection with socket %d\n", client_socket)


    }
    Universal_end();
    return 0;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end
#if defined(__linux__)

void private_cweb_treat_response(bool use_static,int new_socket){
    cweb_print("New request %lld\n", cweb_actual_request)
    cweb_print("Waiting for child process\n")

    int status = 0;
    while (wait(&status) > 0);

    if (WIFEXITED(status)){
        cweb_print("Sucess\n")
        return;
    }


    pid_t pid_error = fork();
    if (pid_error == 0){
        cweb_print("Sending error mensage\n");
        alarm(2);
        bool send_text_menssage = true;

        if(use_static){

            char possible_500_html_path[1000] = {0};
            sprintf(possible_500_html_path,"%s/500.html",cweb_static_folder);
            FILE *possible_500_html = fopen(possible_500_html_path,"r");
            if(possible_500_html){

                fclose(possible_500_html);
                CwebHttpResponse  *response = cweb_send_file(possible_500_html_path,CWEB_AUTO_SET_CONTENT,500);
                private_cweb_send_error_mensage(response,new_socket);
                send_text_menssage = false;
            }

        }

        if(send_text_menssage){
            CwebHttpResponse  *response = cweb_send_var_html( (const char*)private_cweb_500,500);
            private_cweb_send_error_mensage(response,new_socket);
        }

        alarm(0);
        exit(0);
    }

    else if (pid_error < 0){
        perror("Faluire to create a new process");
        exit(EXIT_FAILURE);
    }
    else{
        int status2 = 0;
        /// Wait for the child process to finish
        while (wait(&status2) > 0);
        if (WIFEXITED(status2)){
            cweb_print("Mensage sent\n")
        }

        else{
            cweb_print("Error sending mensage\n")
        }
    }
}

void private_cweb_handle_child_termination(int signal) {
    pid_t terminated_child;
    int status;
    while ((terminated_child = waitpid(-1, &status, WNOHANG)) > 0) {
        cweb_total_requests--;
    }
}
#endif


void private_cweb_send_error_mensage( CwebHttpResponse *response, int socket){

    char *response_str = CwebHttpResponse_generate_response(response);
    send(socket, response_str, strlen(response_str), 0);
    send(socket, response->content, response->content_length, 0);
    free(response_str);
    CwebHttpResponse_free(response);

}
void cweb_kill_single_process_server( ){
    private_cweb_end_server = true;
}

void cweb_set_static_folder(const char *folder){
    cweb_static_folder = folder;
}
const char * cweb_get_static_folder(){
    return cweb_static_folder;
}

long cweb_get_total_requests(){
    return cweb_total_requests;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

void private_cweb_load_file_and_include(
        CTextStack *code,
        CTextStack *src,
        privateCwebRecursionList * recursion_listage){



    CTextStack_self_trim(src);
    CTextStack * filename =private_cweb_format_filename(src);

    bool new_content_is_binary;
    int content_size;
    unsigned char *new_content = cweb_load_any_content(filename->rendered_text, &content_size,&new_content_is_binary);

    if(new_content && !new_content_is_binary){
        private_cweb_generate_inline_inclusion(
                code, (const char *) new_content,
                content_size,
                recursion_listage,
                src->rendered_text
        );
    }
    if(new_content){
        free(new_content);
    }
    CTextStack_free(filename);
}

void private_cweb_generate_inline_inclusion(
        CTextStack *code,
        const char *content,
        long content_size,
        privateCwebRecursionList *recursion_listage,
        const char *filename) {

    CTextStack *buffer_pattern = newCTextStack_string_empty();
    CTextStack *src = newCTextStack_string_empty();
    const char *ENTRY_START = "inline-include";
    int ENTRY_START_LEN = (int)strlen(ENTRY_START);

    const char *ENTRY_PATTERN = "inline-include='";
    int  ENTRY_PATTERN_LEN = (int)strlen(ENTRY_PATTERN);

    int entry_founds = 0;
    bool found_entry = false;

    for(int i = 0; i < content_size; i++){

        char current = content[i];
        CTextStack_format(buffer_pattern,"%c",current);

        if(found_entry){
            //printf("current :%c\n",current);
            //means its cancel the operation
            if( current == '\n' || current =='"'){
                CTextStack_text(code,buffer_pattern->rendered_text);
                CTextStack_restart(buffer_pattern);
                CTextStack_restart(src);
                found_entry = false;
                entry_founds = 0;
                continue;
            }

            //means its getts the src
            if(current != '\''){
                CTextStack_format(src,"%c",current);
                continue;
            }
            privateCwebRecursionElement *colision = NULL;
            if(filename){
                colision =privateCwebRecursionList_add_if_not_colide(
                        recursion_listage,
                        filename,
                        src->rendered_text
                        );
            }
            if(!colision){
                //printf("incluiu a %s\n",src->rendered_text);
                private_cweb_load_file_and_include(code,src,recursion_listage);
            }

            if(colision){
                printf(
                        "recursive colision on file:%s with %s\n",
                        src->rendered_text,
                        colision->included

                        );
            }


            CTextStack_restart(buffer_pattern);
            CTextStack_restart(src);
            found_entry = false;
            entry_founds = 0;
            continue;


        }

        if(current == ' ' && entry_founds >= ENTRY_START_LEN) {
            continue;
        }

        if(entry_founds+1 == ENTRY_PATTERN_LEN){
            found_entry = true;
            continue;
        }

        if(current == ENTRY_PATTERN[entry_founds]){
            entry_founds+=1;
            continue;
        }


        //means didnt get the  pattern
        CTextStack_text(code,buffer_pattern->rendered_text);
        CTextStack_restart(buffer_pattern);
        entry_founds = 0;

    }
    CTextStack_free(buffer_pattern);
    CTextStack_free(src);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



privateCwebRecursionElement * newPrivateCwebRecursionElement(const char *file, const char *included){
    privateCwebRecursionElement *self = (privateCwebRecursionElement*) malloc(sizeof (privateCwebRecursionElement));
    self->file = strdup(file);
    self->included = strdup(included);
    return self;
}
void PrivateCwebRecursionElement_represent(privateCwebRecursionElement *self){
    printf("file: (%s) | included: (%s)\n",self->file,self->included);
}

void PrivateCwebRecursionElement_free(privateCwebRecursionElement *self){
    free(self->file);
    free(self->included);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


privateCwebRecursionList * newprivateCwebRecursionList(){
    privateCwebRecursionList *self = (privateCwebRecursionList*)malloc(sizeof(privateCwebRecursionList));
    *self = (privateCwebRecursionList){0};
    self->elements = (privateCwebRecursionElement **)malloc(0);
    return self;
}


privateCwebRecursionElement *
privateCwebRecursionList_add_if_not_colide(privateCwebRecursionList *self,const char *file,const char *included){
    for(int i = 0; i < self->size;i++){

        privateCwebRecursionElement *possible_colision = self->elements[i];
        bool not_included = strcmp(file,possible_colision->included) != 0;

        if(not_included){
            continue;
        }
        bool including = strcmp(included,possible_colision->file) == 0;
        if(including){
            return possible_colision;
        }
    }

    self->elements = (privateCwebRecursionElement **) realloc(
            self->elements,
            (self->size +1) * sizeof(privateCwebRecursionList*)
     );
    self->elements[self->size] = newPrivateCwebRecursionElement(file,included);
    self->size+=1;
    return NULL;
}
void privateCwebRecursionList_represent(privateCwebRecursionList *self){
       for(int i =0; i < self->size; i++){
        PrivateCwebRecursionElement_represent(self->elements[i]);
    }
}
void privateCwebRecursionList_free(privateCwebRecursionList *self){
    for(int i =0; i < self->size; i++){
        PrivateCwebRecursionElement_free(self->elements[i]);
    }
    free(self->elements);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

char * private_cweb_smart_static_ref(CTextStack *src){


    CTextStack * filename = private_cweb_format_filename(src);


    struct stat file_stat;
    long last_mofication = 0;
    if (stat(filename->rendered_text, &file_stat) == 0) {
        last_mofication = file_stat.st_mtime;
    }

    CTextStack_self_substr(filename,(long)strlen(cweb_static_folder),-1);

    CTextStack *src_ref = newCTextStack_string_format(
            "/static?path=%tc&unix-cache=%d",
            filename,
            last_mofication
    );
    return CTextStack_self_transform_in_string_and_self_clear(src_ref);
}

char * cweb_smart_static_ref(const char *src){
    CTextStack  *converted = newCTextStack_string(src);
    char *result  = private_cweb_smart_static_ref(converted);
    CTextStack_free(converted);
    return result;
}

CTextStack * private_cweb_change_smart_cache(CTextStack *content){

    CTextStack *code = newCTextStack_string_empty();
    CTextStack *buffer_pattern = newCTextStack_string_empty();
    CTextStack *src = newCTextStack_string_empty();

    unsigned long content_size = content->size;

    const char *ENTRY_START = "smart-cache";
    int ENTRY_START_LEN = (int)strlen(ENTRY_START);

    const char *ENTRY_PATTERN = "smart-cache='";
    unsigned long ENTRY_PATTERN_LEN = strlen(ENTRY_PATTERN);

    int entry_founds = 0;
    bool found_entry = false;

    for(int i = 0; i < content_size; i++){

        char current = content->rendered_text[i];
        CTextStack_format(buffer_pattern,"%c",current);

        if(found_entry){

            //means its cancel the operation
            if( current == '\n' || current =='"'){
                CTextStack_text(code,buffer_pattern->rendered_text);
                CTextStack_restart(buffer_pattern);
                CTextStack_restart(src);
                found_entry = false;
                entry_founds = 0;
                continue;
            }

            //means its getts the src
            if(current != '\''){
                CTextStack_format(src,"%c",current);
                continue;
            }

            char *create_content = private_cweb_smart_static_ref(src);
            CTextStack_text(code,create_content);
            free(create_content);


            CTextStack_restart(buffer_pattern);
            CTextStack_restart(src);
            found_entry = false;
            entry_founds = 0;
            continue;


        }

        if(current == ' ' && entry_founds >= ENTRY_START_LEN) {
            continue;
        }
        if(entry_founds+1 == ENTRY_PATTERN_LEN){
            found_entry = true;
            continue;
        }

        if(current == ENTRY_PATTERN[entry_founds]){
            entry_founds+=1;
            continue;
        }

        //means didnt get the  pattern
        CTextStack_text(code,buffer_pattern->rendered_text);
        CTextStack_restart(buffer_pattern);
        entry_founds = 0;

    }
    CTextStack_free(buffer_pattern);
    CTextStack_free(src);
    return code;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CTextStack * private_cweb_format_filename(CTextStack *src){
    bool full_path = CTextStack_starts_with(src,cweb_static_folder);

    if(full_path){
        return  newCTextStack_string(src->rendered_text);
    }
    else{
        return  newCTextStack_string_format("%s/%t",cweb_static_folder,src);
    }

}

CwebHttpResponse * private_cweb_treat_five_icon(){


    char possible_ico_path[1000] = {0};
    sprintf(possible_ico_path,"%s/favicon.ico",cweb_static_folder);
    FILE  *possible_ico_file = fopen(possible_ico_path,"rb");
    if(possible_ico_file){
        fclose(possible_ico_file);
        return cweb_send_file(possible_ico_path,CWEB_AUTO_SET_CONTENT,200);
    }


    char possible_png_path[1000] = {0};
    sprintf(possible_png_path,"%s/favicon.png",cweb_static_folder);
    FILE  *possible_png_file = fopen(possible_png_path,"rb");
    if(possible_png_file){
        fclose(possible_png_file);
        return cweb_send_file(possible_png_path,CWEB_AUTO_SET_CONTENT,200);
    }

    char possible_jpg_path[1000] = {0};
    sprintf(possible_jpg_path,"%s/favicon.png",cweb_static_folder);
    FILE  *possible_jpg_file = fopen(possible_jpg_path,"rb");
    if(possible_jpg_file){
        fclose(possible_jpg_file);
        return cweb_send_file(possible_jpg_path,CWEB_AUTO_SET_CONTENT,200);
    }
    return NULL;


}
char * private_cweb_aply_macro_modifiers_in_content(const char *content, long content_size){
    CTextStack *code = newCTextStack_string_empty();
    privateCwebRecursionList *re_list = newprivateCwebRecursionList();
    private_cweb_generate_inline_inclusion(code, content, content_size, re_list, NULL);
    CTextStack  *result = private_cweb_change_smart_cache(code);
    CTextStack_free(code);
    privateCwebRecursionList_free(re_list);
    return CTextStack_self_transform_in_string_and_self_clear(result);
}

char * cweb_aply_macro_modifiers_in_content(const char *content){
    return private_cweb_aply_macro_modifiers_in_content(content, (long)strlen(content));
}

char * cweb_aply_macro_modifiers_in_file(const char *filename){
    bool is_binary;
    int size;
    char *content = (char*)cweb_load_any_content(filename,&size,&is_binary);
    char *result = NULL;
    if(!is_binary){
        result = private_cweb_aply_macro_modifiers_in_content(content,size);
    }
    free(content);
    return result;
}



CwebHttpResponse * private_cweb_generate_static_response(struct CwebHttpRequest *request,bool use_cache){


    bool is_faviocon_route = strcmp(request->route,"/favicon.ico")== 0;
    if(is_faviocon_route){
        return private_cweb_treat_five_icon();
    }


    if(!cweb_starts_with(request->route,"/static")){
        return  NULL;
    }

    char *full_path = NULL;


    char *param_path = CwebHttpRequest_get_param(request,"path");


    if(param_path){
        full_path = param_path;
    }


    if(!param_path){
        full_path = request->route;
        int  base_route_size = (int)strlen("/static");
        int min_size = base_route_size +2;


        if(strlen(full_path) < min_size){
            return NULL;
        }
        full_path+= base_route_size;
    }

    const int MAX_PATH_LEN = 900;
    if(strlen(full_path) > MAX_PATH_LEN){
        return NULL;
    }

    char formated_full_path[2000] = {0};
    sprintf(formated_full_path,"%s/%s",cweb_static_folder,full_path);

    char *security_path = cweb_replace_string(formated_full_path,"../","");
    int size;
    bool is_binary;
    unsigned char *content = cweb_load_any_content(security_path,&size,&is_binary);

    if(content == NULL){

        char not_found_html_page_path[1100] ={0};
        sprintf(not_found_html_page_path,"%s/404.html",cweb_static_folder);
        char *not_found_html_page = cweb_load_string_file_content(not_found_html_page_path);
        if(not_found_html_page != NULL){
            free(security_path);
            return cweb_send_var_html_cleaning_memory(not_found_html_page,404);

        }

        char menssage[1100] = {0};
        sprintf(menssage,"File %s not found",security_path);
        struct CwebHttpResponse* response =  cweb_send_text(menssage, CWEB_NOT_FOUND);
        free(security_path);

        return response;
    }

    if(!is_binary){
        char *new_content = private_cweb_aply_macro_modifiers_in_content((const char *) content, size);
        free(content);
        size = strlen(new_content);
        content = (unsigned char*)new_content;
    }

    char *content_type  = (char*)cweb_generate_content_type(security_path);

    struct CwebHttpResponse * response = cweb_send_any_cleaning_memory(content_type,size,content,200);


    if(use_cache){
        char *unix_cache = CwebHttpRequest_get_param(request,"unix-cache");
        if(unix_cache){
            char response_code[50] = "";
            sprintf(response_code, "public, max-age=31536000, immutable");
            CwebHttpResponse_add_header(response,"cache-control", response_code);
        }
    }

    free(security_path);
    return response;



}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


struct CwebStringArray * newCwebStringArray(){
    struct CwebStringArray *self = (struct CwebStringArray*)malloc(sizeof(struct CwebStringArray));
    self->size = 0;

    self->strings = (char**)malloc(1);

    return self;
}

int CwebStringArray_find(struct CwebStringArray *self, const char *string){
    for(int i = 0; i < self->size; i++){
        if(strcmp(self->strings[i], string) == 0){
            return i;
        }
    }
    return -1;
}
void CwebStringArray_set(struct CwebStringArray *self, int index, const char *value){
    if(index < self->size && index >= 0){
        int size = strlen(value);
        self->strings[index] = (char*)realloc(self->strings[index], size + 1);
        self->strings[index][size] = '\0';
        strcpy(self->strings[index], value);
    }
}

// Function prototypes
void CwebStringArray_add(struct CwebStringArray *self, const char *string){
    self->strings =  (char**)realloc(self->strings, (self->size +1) * sizeof(char *));
    self->strings[self->size] = strdup(string);
    self->size+=1;
}

void CwebStringArray_add_getting_ownership(struct CwebStringArray *self,  char *string){
    self->strings =  (char**)realloc(self->strings, (self->size +1) * sizeof(char *));
    self->strings[self->size] = string;
    self->size+=1;
}


void CwebStringArray_merge(struct CwebStringArray *self, struct CwebStringArray *other){
    for(int i = 0; i < other->size; i++){
        CwebStringArray_add(self, other->strings[i]);
    }
}


void CwebStringArray_represent(struct CwebStringArray *self){
    for(int i = 0; i < self->size; i++){
        printf("%s\n", self->strings[i]);
    }
}
void CwebStringArray_free(struct CwebStringArray *self){
    for(int i = 0; i < self->size; i++){
        free(self->strings[i]);
    }
    free(self->strings);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


char *cweb_parse_string_to_lower(const char *old_string){

    int string_size = strlen(old_string);
    char *new_string = (char*)malloc(string_size + 2);
    for(int i = 0; i < string_size; i++){
        new_string[i] = tolower(old_string[i]);
    }
    new_string[string_size] = '\0';
    return new_string;
}


char *cweb_parse_string_to_upper(const char *old_string){

    int string_size = strlen(old_string);
    char *new_string = (char*)malloc(string_size + 2);
    for(int i = 0; i < string_size; i++){
        new_string[i] = toupper(old_string[i]);
    }
    new_string[string_size] = '\0';
    return new_string;
}

char *cweb_normalize_string(const char *old_string,const char *invalid_chars){

    int string_size = strlen(old_string);
    char *lower_string = cweb_parse_string_to_lower(old_string);
    char *new_string = (char*)malloc(string_size + 2);
    int new_string_size = 0;

    for(int i = 0; i < string_size; i++){
        if(strchr(invalid_chars,lower_string[i]) == NULL){
            new_string[new_string_size] = lower_string[i];
            new_string_size++;
        }
    }
    new_string[new_string_size] = '\0';
    free(lower_string);
    return new_string;
}



bool cweb_starts_with(const char *string, const char *prefix){
    if(strncmp(string, prefix, strlen(prefix)) == 0){
        return true;
    }
    return false;
}


char *private_cweb_replace_string_once(const char *target, const char *old_element, const char *new_element) {

    const char *pos = strstr(target, old_element);

    int size_of_old_element = strlen(old_element);
    int size_of_new_element = strlen(new_element);
    // Allocate memory for the new string
    char *result = (char *)malloc(strlen(target) + size_of_new_element - size_of_old_element + 1);

    // Copy the part of the original string before the old substring
    strncpy(result, target, pos - target);

    // Copy the new substring to the result string
    strcpy(result + (pos - target), new_element);

    // Copy the rest of the original string after the old substring
    strcpy(result + (pos - target) + size_of_new_element, pos + size_of_old_element);

    return result;

}


char* cweb_replace_string(const char *target, const char *old_element, const char *new_element) {
    char *result = (char *)malloc(strlen(target) + 1);
    strcpy(result, target);
    char *temp = NULL;
    while (strstr(result, old_element) != NULL) {
        temp = private_cweb_replace_string_once(result, old_element, new_element);
        free(result);
        result = temp;
    }
    return result;
}

#endif


#endif

/* This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <https://unlicense.org>
 */ 

#ifndef C_ARGV_PARSER_ONE
#define C_ARGV_PARSER_ONE
#ifndef CArgvParse_macros
#define CArgvParse_macros

#ifndef C_ARGV_PARSER_MAX_ARGS
#define C_ARGV_PARSER_MAX_ARGS 1000
#endif
#ifdef __cplusplus
#define C_ARGV_PARSER_NULL nullptr
#else
#define C_ARGV_PARSER_NULL ((void*)0)
#endif 


typedef unsigned char c_argv_bool;

#define C_ARGV_PARSER_TRUE 1
#define C_ARGV_PARSER_FALSE 0


#ifndef C_ARGV_UNUSED_START 
#define C_ARGV_UNUSED_START 1
#endif

#endif

#ifndef CArgvParse_types
#define CArgvParse_types
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct CArgvParse{

    int used_args[C_ARGV_PARSER_MAX_ARGS];
    int total_used_args;
     char **args;
    int total_args;

    const char **flag_identifiers;
    int total_flag_indentifiers;

 }CArgvParse;

#endif

#ifndef CArgvParse_typesB
#define CArgvParse_typesB
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct CArgvParseNamespace{

    CArgvParse (*newCArgvParse)(int argc, char **argv);
    const char *(*get_arg)(CArgvParse *self,int index);
    int (*get_flag_size)(CArgvParse *self,const char **flags,int flags_size);
    const char * (*get_flag)(CArgvParse *self ,const char **flags,int flags_size, int index);
    const char *(*get_next_unused_arg)(CArgvParse *self);
    c_argv_bool (*is_flags_present)(CArgvParse *self,const char **flag,int flags_size);
    c_argv_bool (*is_one_of_args_present)(CArgvParse *self,const char **args,int args_size);
    int (*get_infinity_flag_size)(CArgvParse *self,const char **flags,int flags_size);
    const char * (*get_infinty_flag)(CArgvParse *self ,const char **flags,int flags_size, int index);
    int (*get_compact_flag_size)(CArgvParse *self,const char **flags,int flags_size);
    const char * (*get_compact_flag)(CArgvParse *self ,const char **flags,int flags_size, int index);
}CArgvParseNamespace;

#endif

#ifndef CArgvParse_fdeclare
#define CArgvParse_fdeclare
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





CArgvParse newCArgvParse(int argc, char **argv);

const char *CArgvParse_get_arg(CArgvParse *self,int index);

int privateCArgv_parser_get_flag_identifier_start_size(CArgvParse *self,const char *flag,int flag_size);

c_argv_bool CArgvParse_is_flags_present(CArgvParse *self,const char **flags,int flags_size);

c_argv_bool CArgvParse_is_one_of_args_present(CArgvParse *self,const char **args,int args_size);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






int CArgvParse_get_compact_flag_size(CArgvParse *self,const char **flags,int flags_size);

const char * CArgvParse_get_compact_flag(CArgvParse *self ,const char **flags,int flags_size, int index);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int CArgvParse_get_infinity_flag_size(CArgvParse *self,const char **flags,int flags_size);

const char * CArgvParse_get_infinty_flag(CArgvParse *self ,const char **flags,int flags_size, int index);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

CArgvParseNamespace newCArgvParseNamespace();
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






int CArgvParse_get_flag_size(CArgvParse *self,const char **flags,int flags_size);

const char * CArgvParse_get_flag(CArgvParse *self ,const char **flags,int flags_size, int index);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


c_argv_bool private_CArgvParse_its_used(CArgvParse *self,int index);


void private_CArgvParse_add_used(CArgvParse *self,int index);



const char *CArgvParse_get_next_unused_arg(CArgvParse *self);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



int privateArgv_parser_string_size(const char *string);


c_argv_bool privateArgv_parsser_starts_with(const char *string,int string_size, const char *start,int start_size);

c_argv_bool privateArgv_strings_equals(const char *string1,int string1_size,const char *string2,int string2_size);


#endif

#ifndef CArgvParse_globals
#define CArgvParse_globals
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


const char *CArgvPars_defult_identifiers[] = {"--","-"};
const int CArgvPars_defult_identifiers_size = 2;
#endif

#ifndef CArgvParse_fdefine
#define CArgvParse_fdefine
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






CArgvParse newCArgvParse(int argc, char **argv){
    CArgvParse cArgvPars ={0};
    cArgvPars.args = argv;
    cArgvPars.total_args = argc;
    cArgvPars.flag_identifiers = CArgvPars_defult_identifiers;
    cArgvPars.total_flag_indentifiers = CArgvPars_defult_identifiers_size;
    return cArgvPars;
}

const char *CArgvParse_get_arg(CArgvParse *self,int index){
    if(index < self->total_args){
        private_CArgvParse_add_used(self,index);
        return self->args[index];
    }
    return C_ARGV_PARSER_NULL;
}

c_argv_bool CArgvParse_is_flags_present(CArgvParse *self,const char **flags,int flags_size){
    
    for(int i = 0; i < self->total_args; i++){
        const char *current_arg = self->args[i];
        int current_arg_size = privateArgv_parser_string_size(current_arg);
        int identifier_start_size = privateCArgv_parser_get_flag_identifier_start_size(self,current_arg,current_arg_size);        
        c_argv_bool its_flag = identifier_start_size != -1;

        //means its not a flag
        if(!its_flag){
            continue;
        }
        const char *formmated_flag_comparaton_flag = current_arg + identifier_start_size;
        int formmated_flag_comparaton_flag_size = current_arg_size-identifier_start_size;

        for(int j = 0; j < flags_size;j++){
            const char *flag = flags[j];
            int flag_size = privateArgv_parser_string_size(flag);

            c_argv_bool is_the_current_flag = privateArgv_strings_equals(
                formmated_flag_comparaton_flag,
                formmated_flag_comparaton_flag_size,
                flag,
                flag_size
            );
            if(is_the_current_flag){
                private_CArgvParse_add_used(self,i);
                return C_ARGV_PARSER_TRUE;
            }
        }

    }
    return C_ARGV_PARSER_FALSE;
}





int privateCArgv_parser_get_flag_identifier_start_size(CArgvParse *self,const char *flag,int flag_size){
    for(int i = 0; i < self->total_flag_indentifiers; i++){
        const char *current_identifier = self->flag_identifiers[i];
        int current_identifier_size = privateArgv_parser_string_size(current_identifier);
        if(privateArgv_parsser_starts_with(flag,flag_size,current_identifier,current_identifier_size)){
            return current_identifier_size;
        }
    }
    return -1;
}
c_argv_bool CArgvParse_is_one_of_args_present(CArgvParse *self,const char **args,int args_size){
    for(int i = 0; i < self->total_args; i++){
        const char *current_arg = self->args[i];

        
        int current_arg_size = privateArgv_parser_string_size(current_arg);
        for(int j = 0; j < args_size;j++){
            const char *arg = args[j];
            int arg_size = privateArgv_parser_string_size(arg);
            c_argv_bool is_the_current_arg = privateArgv_strings_equals(
                current_arg,
                current_arg_size,
                arg,
                arg_size
            );
            if(is_the_current_arg){
                private_CArgvParse_add_used(self,i);
                return C_ARGV_PARSER_TRUE;
            }
        }
    }
    return C_ARGV_PARSER_FALSE;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




int CArgvParse_get_compact_flag_size(CArgvParse *self,const char **flags,int flags_size){
    int size = 0;
    for(int i = 0; i < self->total_args; i++){
        const char *current_arg = self->args[i];
        int current_arg_size = privateArgv_parser_string_size(current_arg);
        for(int j=0; j < flags_size;j++){
            const char *flag = flags[j];
            int flag_size = privateArgv_parser_string_size(flag);
        
            if(privateArgv_parsser_starts_with(current_arg,current_arg_size,flag,flag_size)){
                size++;
            }
        }
    }
    return size;
}    


const char * CArgvParse_get_compact_flag(CArgvParse *self ,const char **flags,int flags_size, int index){
    int found=0;
    for(int i = 0; i < self->total_args; i++){

        const char *current_arg = self->args[i];
        int current_arg_size = privateArgv_parser_string_size(current_arg);
        for(int j=0; j < flags_size;j++){
            const char *flag = flags[j];
            int flag_size = privateArgv_parser_string_size(flag);
        
            if(privateArgv_parsser_starts_with(current_arg,current_arg_size,flag,flag_size)){
                if(found == index){
                    return current_arg + flag_size;
                }
                found++;
            }
        }
    }
    return C_ARGV_PARSER_NULL;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int CArgvParse_get_infinity_flag_size(CArgvParse *self,const char **flags,int flags_size){
    int found=0;
    int flag_found_index = -1;
    c_argv_bool inside_flag = C_ARGV_PARSER_FALSE;
    for(int i = 0; i < self->total_args; i++){

        const char *current_arg = self->args[i];
        int current_arg_size = privateArgv_parser_string_size(current_arg);
        int identifier_start_size = privateCArgv_parser_get_flag_identifier_start_size(self,current_arg,current_arg_size);        
        c_argv_bool its_flag = identifier_start_size != -1;
        //means its not a flag
        if(!its_flag &&!inside_flag){
            continue;
        }

        if(!its_flag &&inside_flag){            
            found++;
            continue;
        }

        // if its here, than its a flag

        const char *formmated_flag_comparaton_flag = current_arg + identifier_start_size;
        int formmated_flag_comparaton_flag_size = current_arg_size-identifier_start_size;

        for(int j = 0; j < flags_size;j++){
            const char *flag = flags[j];
            int flag_size = privateArgv_parser_string_size(flag);

            c_argv_bool is_the_current_flag = privateArgv_strings_equals(
                formmated_flag_comparaton_flag,
                formmated_flag_comparaton_flag_size,
                flag,
                flag_size
            );
            if(is_the_current_flag){
                flag_found_index = i;
                inside_flag = C_ARGV_PARSER_TRUE;
                break;
            }
            if(!is_the_current_flag){
                inside_flag = C_ARGV_PARSER_FALSE;
                flag_found_index = -1;
            }
        }

    }
    return found;
}    


const char * CArgvParse_get_infinty_flag(CArgvParse *self ,const char **flags,int flags_size, int index){
    int found=0;
    int flag_found_index = -1;
    c_argv_bool inside_flag = C_ARGV_PARSER_FALSE;
    for(int i = 0; i < self->total_args; i++){

        const char *current_arg = self->args[i];
        int current_arg_size = privateArgv_parser_string_size(current_arg);
        int identifier_start_size = privateCArgv_parser_get_flag_identifier_start_size(self,current_arg,current_arg_size);        
        c_argv_bool its_flag = identifier_start_size != -1;
        //means its not a flag
        if(!its_flag &&!inside_flag){
            continue;
        }

        if(!its_flag &&inside_flag){            
            if(found == index){
                private_CArgvParse_add_used(self,flag_found_index);
                private_CArgvParse_add_used(self,i);
                return self->args[i];
            }        
            found++;
            continue;
        }

        // if its here, than its a flag

        const char *formmated_flag_comparaton_flag = current_arg + identifier_start_size;
        int formmated_flag_comparaton_flag_size = current_arg_size-identifier_start_size;

        for(int j = 0; j < flags_size;j++){
            const char *flag = flags[j];
            int flag_size = privateArgv_parser_string_size(flag);

            c_argv_bool is_the_current_flag = privateArgv_strings_equals(
                formmated_flag_comparaton_flag,
                formmated_flag_comparaton_flag_size,
                flag,
                flag_size
            );
            if(is_the_current_flag){
                flag_found_index = i;
                inside_flag = C_ARGV_PARSER_TRUE;
                break;
            }
            if(!is_the_current_flag){
                inside_flag = C_ARGV_PARSER_FALSE;
                flag_found_index = -1;
            }
        }

    }
    return C_ARGV_PARSER_NULL;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


CArgvParseNamespace newCArgvParseNamespace(){
 CArgvParseNamespace self ={0};
    self.newCArgvParse = newCArgvParse;
    self.get_arg = CArgvParse_get_arg;
    self.get_flag_size = CArgvParse_get_flag_size;
    self.get_flag = CArgvParse_get_flag;
    self.get_next_unused_arg = CArgvParse_get_next_unused_arg;
    self.is_flags_present = CArgvParse_is_flags_present;
    self.is_one_of_args_present = CArgvParse_is_one_of_args_present;
    self.get_infinity_flag_size = CArgvParse_get_infinity_flag_size;
    self.get_infinty_flag = CArgvParse_get_infinty_flag;
    self.get_compact_flag_size = CArgvParse_get_compact_flag_size;
    self.get_compact_flag = CArgvParse_get_compact_flag;
    return self;   
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




int CArgvParse_get_flag_size(CArgvParse *self,const char **flags,int flags_size){
    int found=0;
    for(int i = 0; i < self->total_args-1; i++){


        const char *current_arg = self->args[i];
        int current_arg_size = privateArgv_parser_string_size(current_arg);
        int identifier_start_size = privateCArgv_parser_get_flag_identifier_start_size(self,current_arg,current_arg_size);        
        c_argv_bool its_flag = identifier_start_size != -1;
        //means its not a flag
        if(!its_flag){
            continue;
        }
        const char *formmated_flag_comparaton_flag = current_arg + identifier_start_size;
        int formmated_flag_comparaton_flag_size = current_arg_size-identifier_start_size;

        for(int j = 0; j < flags_size;j++){
            const char *flag = flags[j];
            int flag_size = privateArgv_parser_string_size(flag);

            c_argv_bool is_the_current_flag = privateArgv_strings_equals(
                formmated_flag_comparaton_flag,
                formmated_flag_comparaton_flag_size,
                flag,
                flag_size
            );
            if(is_the_current_flag){
                found++;
                break;
            }
        }

    }
    return found;
}    


const char * CArgvParse_get_flag(CArgvParse *self ,const char **flags,int flags_size, int index){
    int found=0;
    for(int i = 0; i < self->total_args-1; i++){


        const char *current_arg = self->args[i];
        int current_arg_size = privateArgv_parser_string_size(current_arg);
        int identifier_start_size = privateCArgv_parser_get_flag_identifier_start_size(self,current_arg,current_arg_size);        
        c_argv_bool its_flag = identifier_start_size != -1;
        //means its not a flag
        if(!its_flag){
            continue;
        }
        const char *formmated_flag_comparaton_flag = current_arg + identifier_start_size;
        int formmated_flag_comparaton_flag_size = current_arg_size-identifier_start_size;

        for(int j = 0; j < flags_size;j++){
            const char *flag = flags[j];
            int flag_size = privateArgv_parser_string_size(flag);

            c_argv_bool is_the_current_flag = privateArgv_strings_equals(
                formmated_flag_comparaton_flag,
                formmated_flag_comparaton_flag_size,
                flag,
                flag_size
            );
            if(is_the_current_flag){

                if(found == index){

                    private_CArgvParse_add_used(self,i);
                    private_CArgvParse_add_used(self,i+1);
                    const  char *next = self->args[i+1];
                    return next;
                }
                found++;
                break;
            }
        }

    }
    return C_ARGV_PARSER_NULL;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


c_argv_bool private_CArgvParse_its_used(CArgvParse *self,int index){
    for(int i = 0; i < self->total_used_args; i++){
        if(self->used_args[i] == index){
            return C_ARGV_PARSER_TRUE;
        }
    }
    return C_ARGV_PARSER_FALSE;
}
void private_CArgvParse_add_used(CArgvParse *self,int index){
    if(private_CArgvParse_its_used(self,index)){
        return;
    }
    if(self->total_used_args >= C_ARGV_PARSER_MAX_ARGS){
        return;
    }
    self->used_args[self->total_used_args] = index;
    self->total_used_args++;
}


const char *CArgvParse_get_next_unused_arg(CArgvParse *self){
    for(int i = C_ARGV_UNUSED_START; i < self->total_args; i++){
        if(!private_CArgvParse_its_used(self,i)){
            private_CArgvParse_add_used(self,i);
            return self->args[i];
        }
    }
    return C_ARGV_PARSER_NULL;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


int privateArgv_parser_string_size(const char *string){
    int size = 0;
    while(string[size] != '\0'){
        size++;
    }
    return size;
}


c_argv_bool privateArgv_parsser_starts_with(const char *string,int string_size, const char *start,int start_size){    
    if(string_size < start_size){
        return 0;
    }
    for(int i = 0; i < start_size; i++){
        if(string[i] != start[i]){
            return 0;
        }
    }
    return 1;
}

c_argv_bool privateArgv_strings_equals(const char *string1,int string1_size,const char *string2,int string2_size){
    if(string1_size != string2_size){
        return 0;
    }
    for(int i = 0; i < string1_size; i++){
        if(string1[i] != string2[i]){
            return 0;
        }
    }
    return 1;
}
#endif

#endif 
/* MIT License

Copyright (c) 2023 Mateus Moutinho Queiroz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

 */ 

// USE  THIS FILE ONLY FOR PRODUCTION
// This file is part of the DoTheWorld project.
// Do not edit this file, it is automatically generated.
// See the README.md file for more information.
/*
MIT License

Copyright (c) 2023 Mateus Moutinho Queiroz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef DO_THE_WORLD_H

#define DO_THE_WORLD_ONE

#ifndef doTHeWorld_dep_declare
#define doTHeWorld_dep_declare



#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>

#include <stdarg.h>

#include <errno.h>



#ifdef __linux__
#include <unistd.h>
#include <sys/time.h>
#include <sys/file.h>

#include <sys/wait.h>
  #include <dirent.h>
  #include <unistd.h>
#elif _WIN32
  #include <windows.h>
  #include <tchar.h>
  #include <wchar.h>
  #include <locale.h>
  #include <direct.h>
#endif

#if !defined(cJSON__h)
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#ifndef cJSON__h
#define cJSON__h

#ifdef __cplusplus
extern "C"
{
#endif

#if !defined(__WINDOWS__) && (defined(WIN32) || defined(WIN64) || defined(_MSC_VER) || defined(_WIN32))
#define __WINDOWS__
#endif

#ifdef __WINDOWS__

/* When compiling for windows, we specify a specific calling convention to avoid issues where we are being called from a project with a different default calling convention.  For windows you have 3 define options:

CJSON_HIDE_SYMBOLS - Define this in the case where you don't want to ever dllexport symbols
CJSON_EXPORT_SYMBOLS - Define this on library build when you want to dllexport symbols (default)
CJSON_IMPORT_SYMBOLS - Define this if you want to dllimport symbol

For *nix builds that support visibility attribute, you can define similar behavior by

setting default visibility to hidden by adding
-fvisibility=hidden (for gcc)
or
-xldscope=hidden (for sun cc)
to CFLAGS

then using the CJSON_API_VISIBILITY flag to "export" the same symbols the way CJSON_EXPORT_SYMBOLS does

*/

#define CJSON_CDECL __cdecl
#define CJSON_STDCALL __stdcall

/* export symbols by default, this is necessary for copy pasting the C and header file */
#if !defined(CJSON_HIDE_SYMBOLS) && !defined(CJSON_IMPORT_SYMBOLS) && !defined(CJSON_EXPORT_SYMBOLS)
#define CJSON_EXPORT_SYMBOLS
#endif

#if defined(CJSON_HIDE_SYMBOLS)
#define CJSON_PUBLIC(type)   type CJSON_STDCALL
#elif defined(CJSON_EXPORT_SYMBOLS)
#define CJSON_PUBLIC(type)   __declspec(dllexport) type CJSON_STDCALL
#elif defined(CJSON_IMPORT_SYMBOLS)
#define CJSON_PUBLIC(type)   __declspec(dllimport) type CJSON_STDCALL
#endif
#else /* !__WINDOWS__ */
#define CJSON_CDECL
#define CJSON_STDCALL

#if (defined(__GNUC__) || defined(__SUNPRO_CC) || defined (__SUNPRO_C)) && defined(CJSON_API_VISIBILITY)
#define CJSON_PUBLIC(type)   __attribute__((visibility("default"))) type
#else
#define CJSON_PUBLIC(type) type
#endif
#endif

/* project version */
#define CJSON_VERSION_MAJOR 1
#define CJSON_VERSION_MINOR 7
#define CJSON_VERSION_PATCH 18

#include <stddef.h>

/* cJSON Types: */
#define cJSON_Invalid (0)
#define cJSON_False  (1 << 0)
#define cJSON_True   (1 << 1)
#define cJSON_NULL   (1 << 2)
#define cJSON_Number (1 << 3)
#define cJSON_String (1 << 4)
#define cJSON_Array  (1 << 5)
#define cJSON_Object (1 << 6)
#define cJSON_Raw    (1 << 7) /* raw json */

#define cJSON_IsReference 256
#define cJSON_StringIsConst 512

/* The cJSON structure: */
typedef struct cJSON
{
    /* next/prev allow you to walk array/object chains. Alternatively, use GetArraySize/GetArrayItem/GetObjectItem */
    struct cJSON *next;
    struct cJSON *prev;
    /* An array or object item will have a child pointer pointing to a chain of the items in the array/object. */
    struct cJSON *child;

    /* The type of the item, as above. */
    int type;

    /* The item's string, if type==cJSON_String  and type == cJSON_Raw */
    char *valuestring;
    /* writing to valueint is DEPRECATED, use cJSON_SetNumberValue instead */
    int valueint;
    /* The item's number, if type==cJSON_Number */
    double valuedouble;

    /* The item's name string, if this item is the child of, or is in the list of subitems of an object. */
    char *string;
} cJSON;

typedef struct cJSON_Hooks
{
      /* malloc/free are CDECL on Windows regardless of the default calling convention of the compiler, so ensure the hooks allow passing those functions directly. */
      void *(CJSON_CDECL *malloc_fn)(size_t sz);
      void (CJSON_CDECL *free_fn)(void *ptr);
} cJSON_Hooks;

typedef int cJSON_bool;

/* Limits how deeply nested arrays/objects can be before cJSON rejects to parse them.
 * This is to prevent stack overflows. */
#ifndef CJSON_NESTING_LIMIT
#define CJSON_NESTING_LIMIT 1000
#endif

/* returns the version of cJSON as a string */
CJSON_PUBLIC(const char*) cJSON_Version(void);

/* Supply malloc, realloc and free functions to cJSON */
CJSON_PUBLIC(void) cJSON_InitHooks(cJSON_Hooks* hooks);

/* Memory Management: the caller is always responsible to free the results from all variants of cJSON_Parse (with cJSON_Delete) and cJSON_Print (with stdlib free, cJSON_Hooks.free_fn, or cJSON_free as appropriate). The exception is cJSON_PrintPreallocated, where the caller has full responsibility of the buffer. */
/* Supply a block of JSON, and this returns a cJSON object you can interrogate. */
CJSON_PUBLIC(cJSON *) cJSON_Parse(const char *value);
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLength(const char *value, size_t buffer_length);
/* ParseWithOpts allows you to require (and check) that the JSON is null terminated, and to retrieve the pointer to the final byte parsed. */
/* If you supply a ptr in return_parse_end and parsing fails, then return_parse_end will contain a pointer to the error so will match cJSON_GetErrorPtr(). */
CJSON_PUBLIC(cJSON *) cJSON_ParseWithOpts(const char *value, const char **return_parse_end, cJSON_bool require_null_terminated);
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLengthOpts(const char *value, size_t buffer_length, const char **return_parse_end, cJSON_bool require_null_terminated);

/* Render a cJSON entity to text for transfer/storage. */
CJSON_PUBLIC(char *) cJSON_Print(const cJSON *item);
/* Render a cJSON entity to text for transfer/storage without any formatting. */
CJSON_PUBLIC(char *) cJSON_PrintUnformatted(const cJSON *item);
/* Render a cJSON entity to text using a buffered strategy. prebuffer is a guess at the final size. guessing well reduces reallocation. fmt=0 gives unformatted, =1 gives formatted */
CJSON_PUBLIC(char *) cJSON_PrintBuffered(const cJSON *item, int prebuffer, cJSON_bool fmt);
/* Render a cJSON entity to text using a buffer already allocated in memory with given length. Returns 1 on success and 0 on failure. */
/* NOTE: cJSON is not always 100% accurate in estimating how much memory it will use, so to be safe allocate 5 bytes more than you actually need */
CJSON_PUBLIC(cJSON_bool) cJSON_PrintPreallocated(cJSON *item, char *buffer, const int length, const cJSON_bool format);
/* Delete a cJSON entity and all subentities. */
CJSON_PUBLIC(void) cJSON_Delete(cJSON *item);

/* Returns the number of items in an array (or object). */
CJSON_PUBLIC(int) cJSON_GetArraySize(const cJSON *array);
/* Retrieve item number "index" from array "array". Returns NULL if unsuccessful. */
CJSON_PUBLIC(cJSON *) cJSON_GetArrayItem(const cJSON *array, int index);
/* Get item "string" from object. Case insensitive. */
CJSON_PUBLIC(cJSON *) cJSON_GetObjectItem(const cJSON * const object, const char * const string);
CJSON_PUBLIC(cJSON *) cJSON_GetObjectItemCaseSensitive(const cJSON * const object, const char * const string);
CJSON_PUBLIC(cJSON_bool) cJSON_HasObjectItem(const cJSON *object, const char *string);
/* For analysing failed parses. This returns a pointer to the parse error. You'll probably need to look a few chars back to make sense of it. Defined when cJSON_Parse() returns 0. 0 when cJSON_Parse() succeeds. */
CJSON_PUBLIC(const char *) cJSON_GetErrorPtr(void);

/* Check item type and return its value */
CJSON_PUBLIC(char *) cJSON_GetStringValue(const cJSON * const item);
CJSON_PUBLIC(double) cJSON_GetNumberValue(const cJSON * const item);

/* These functions check the type of an item */
CJSON_PUBLIC(cJSON_bool) cJSON_IsInvalid(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsFalse(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsTrue(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsBool(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsNull(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsNumber(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsString(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsArray(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsObject(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsRaw(const cJSON * const item);

/* These calls create a cJSON item of the appropriate type. */
CJSON_PUBLIC(cJSON *) cJSON_CreateNull(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateTrue(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateFalse(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateBool(cJSON_bool boolean);
CJSON_PUBLIC(cJSON *) cJSON_CreateNumber(double num);
CJSON_PUBLIC(cJSON *) cJSON_CreateString(const char *string);
/* raw json */
CJSON_PUBLIC(cJSON *) cJSON_CreateRaw(const char *raw);
CJSON_PUBLIC(cJSON *) cJSON_CreateArray(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateObject(void);

/* Create a string where valuestring references a string so
 * it will not be freed by cJSON_Delete */
CJSON_PUBLIC(cJSON *) cJSON_CreateStringReference(const char *string);
/* Create an object/array that only references it's elements so
 * they will not be freed by cJSON_Delete */
CJSON_PUBLIC(cJSON *) cJSON_CreateObjectReference(const cJSON *child);
CJSON_PUBLIC(cJSON *) cJSON_CreateArrayReference(const cJSON *child);

/* These utilities create an Array of count items.
 * The parameter count cannot be greater than the number of elements in the number array, otherwise array access will be out of bounds.*/
CJSON_PUBLIC(cJSON *) cJSON_CreateIntArray(const int *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateFloatArray(const float *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateDoubleArray(const double *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateStringArray(const char *const *strings, int count);

/* Append item to the specified array/object. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToArray(cJSON *array, cJSON *item);
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObject(cJSON *object, const char *string, cJSON *item);
/* Use this when string is definitely const (i.e. a literal, or as good as), and will definitely survive the cJSON object.
 * WARNING: When this function was used, make sure to always check that (item->type & cJSON_StringIsConst) is zero before
 * writing to `item->string` */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObjectCS(cJSON *object, const char *string, cJSON *item);
/* Append reference to item to the specified array/object. Use this when you want to add an existing cJSON to a new cJSON, but don't want to corrupt your existing cJSON. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToArray(cJSON *array, cJSON *item);
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToObject(cJSON *object, const char *string, cJSON *item);

/* Remove/Detach items from Arrays/Objects. */
CJSON_PUBLIC(cJSON *) cJSON_DetachItemViaPointer(cJSON *parent, cJSON * const item);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromArray(cJSON *array, int which);
CJSON_PUBLIC(void) cJSON_DeleteItemFromArray(cJSON *array, int which);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObject(cJSON *object, const char *string);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObjectCaseSensitive(cJSON *object, const char *string);
CJSON_PUBLIC(void) cJSON_DeleteItemFromObject(cJSON *object, const char *string);
CJSON_PUBLIC(void) cJSON_DeleteItemFromObjectCaseSensitive(cJSON *object, const char *string);

/* Update array items. */
CJSON_PUBLIC(cJSON_bool) cJSON_InsertItemInArray(cJSON *array, int which, cJSON *newitem); /* Shifts pre-existing items to the right. */
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemViaPointer(cJSON * const parent, cJSON * const item, cJSON * replacement);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInArray(cJSON *array, int which, cJSON *newitem);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObject(cJSON *object,const char *string,cJSON *newitem);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObjectCaseSensitive(cJSON *object,const char *string,cJSON *newitem);

/* Duplicate a cJSON item */
CJSON_PUBLIC(cJSON *) cJSON_Duplicate(const cJSON *item, cJSON_bool recurse);
/* Duplicate will create a new, identical cJSON item to the one you pass, in new memory that will
 * need to be released. With recurse!=0, it will duplicate any children connected to the item.
 * The item->next and ->prev pointers are always zero on return from Duplicate. */
/* Recursively compare two cJSON items for equality. If either a or b is NULL or invalid, they will be considered unequal.
 * case_sensitive determines if object keys are treated case sensitive (1) or case insensitive (0) */
CJSON_PUBLIC(cJSON_bool) cJSON_Compare(const cJSON * const a, const cJSON * const b, const cJSON_bool case_sensitive);

/* Minify a strings, remove blank characters(such as ' ', '\t', '\r', '\n') from strings.
 * The input pointer json cannot point to a read-only address area, such as a string constant, 
 * but should point to a readable and writable address area. */
CJSON_PUBLIC(void) cJSON_Minify(char *json);

/* Helper functions for creating and adding items to an object at the same time.
 * They return the added item or NULL on failure. */
CJSON_PUBLIC(cJSON*) cJSON_AddNullToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddTrueToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddFalseToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddBoolToObject(cJSON * const object, const char * const name, const cJSON_bool boolean);
CJSON_PUBLIC(cJSON*) cJSON_AddNumberToObject(cJSON * const object, const char * const name, const double number);
CJSON_PUBLIC(cJSON*) cJSON_AddStringToObject(cJSON * const object, const char * const name, const char * const string);
CJSON_PUBLIC(cJSON*) cJSON_AddRawToObject(cJSON * const object, const char * const name, const char * const raw);
CJSON_PUBLIC(cJSON*) cJSON_AddObjectToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddArrayToObject(cJSON * const object, const char * const name);

/* When assigning an integer value, it needs to be propagated to valuedouble too. */
#define cJSON_SetIntValue(object, number) ((object) ? (object)->valueint = (object)->valuedouble = (number) : (number))
/* helper for the cJSON_SetNumberValue macro */
CJSON_PUBLIC(double) cJSON_SetNumberHelper(cJSON *object, double number);
#define cJSON_SetNumberValue(object, number) ((object != NULL) ? cJSON_SetNumberHelper(object, (double)number) : (number))
/* Change the valuestring of a cJSON_String object, only takes effect when type of object is cJSON_String */
CJSON_PUBLIC(char*) cJSON_SetValuestring(cJSON *object, const char *valuestring);

/* If the object is not a boolean type this does nothing and returns cJSON_Invalid else it returns the new type*/
#define cJSON_SetBoolValue(object, boolValue) ( \
    (object != NULL && ((object)->type & (cJSON_False|cJSON_True))) ? \
    (object)->type=((object)->type &(~(cJSON_False|cJSON_True)))|((boolValue)?cJSON_True:cJSON_False) : \
    cJSON_Invalid\
)

/* Macro for iterating over an array or object */
#define cJSON_ArrayForEach(element, array) for(element = (array != NULL) ? (array)->child : NULL; element != NULL; element = element->next)

/* malloc/free objects using the malloc/free functions that have been set with cJSON_InitHooks */
CJSON_PUBLIC(void *) cJSON_malloc(size_t size);
CJSON_PUBLIC(void) cJSON_free(void *object);

#ifdef __cplusplus
}
#endif

#endif

#define DTW_CJSON_IMPLEMENTED
#endif

#if !defined(SHA_256_H)
#ifndef SHA_256_H
#define SHA_256_H

#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * @brief Size of the SHA-256 sum. This times eight is 256 bits.
 */
#define SIZE_OF_SHA_256_HASH 32

/*
 * @brief Size of the chunks used for the calculations.
 *
 * @note This should mostly be ignored by the user, although when using the streaming API, it has an impact for
 * performance. Add chunks whose size is a multiple of this, and you will avoid a lot of superfluous copying in RAM!
 */
#define SIZE_OF_SHA_256_CHUNK 64

/*
 * @brief The opaque SHA-256 type, that should be instantiated when using the streaming API.
 *
 * @note Although the details are exposed here, in order to make instantiation easy, you should refrain from directly
 * accessing the fields, as they may change in the future.
 */
struct Sha_256 {
	uint8_t *hash;
	uint8_t chunk[SIZE_OF_SHA_256_CHUNK];
	uint8_t *chunk_pos;
	size_t space_left;
	uint64_t total_len;
	uint32_t h[8];
};

/*
 * @brief The simple SHA-256 calculation function.
 * @param hash Hash array, where the result is delivered.
 * @param input Pointer to the data the hash shall be calculated on.
 * @param len Length of the input data, in byte.
 *
 * @note If all of the data you are calculating the hash value on is available in a contiguous buffer in memory, this is
 * the function you should use.
 *
 * @note If either of the passed pointers is NULL, the results are unpredictable.
 *
 * @note See note about maximum data length for sha_256_write, as it applies for this function's len argument too.
 */
void calc_sha_256(uint8_t hash[SIZE_OF_SHA_256_HASH], const void *input, size_t len);

/*
 * @brief Initialize a SHA-256 streaming calculation.
 * @param sha_256 A pointer to a SHA-256 structure.
 * @param hash Hash array, where the result will be delivered.
 *
 * @note If all of the data you are calculating the hash value on is not available in a contiguous buffer in memory,
 * this is where you should start. Instantiate a SHA-256 structure, for instance by simply declaring it locally, make
 * your hash buffer available, and invoke this function. Once a SHA-256 hash has been calculated (see further below) a
 * SHA-256 structure can be initialized again for the next calculation.
 *
 * @note If either of the passed pointers is NULL, the results are unpredictable.
 */
void sha_256_init(struct Sha_256 *sha_256, uint8_t hash[SIZE_OF_SHA_256_HASH]);

/*
 * @brief Stream more input data for an on-going SHA-256 calculation.
 * @param sha_256 A pointer to a previously initialized SHA-256 structure.
 * @param data Pointer to the data to be added to the calculation.
 * @param len Length of the data to add, in byte.
 *
 * @note This function may be invoked an arbitrary number of times between initialization and closing, but the maximum
 * data length is limited by the SHA-256 algorithm: the total number of bits (i.e. the total number of bytes times
 * eight) must be representable by a 64-bit unsigned integer. While that is not a practical limitation, the results are
 * unpredictable if that limit is exceeded.
 *
 * @note This function may be invoked on empty data (zero length), although that obviously will not add any data.
 *
 * @note If either of the passed pointers is NULL, the results are unpredictable.
 */
void sha_256_write(struct Sha_256 *sha_256, const void *data, size_t len);

/*
 * @brief Conclude a SHA-256 streaming calculation, making the hash value available.
 * @param sha_256 A pointer to a previously initialized SHA-256 structure.
 * @return Pointer to the hash array, where the result is delivered.
 *
 * @note After this function has been invoked, the result is available in the hash buffer that initially was provided. A
 * pointer to the hash value is returned for convenience, but you should feel free to ignore it: it is simply a pointer
 * to the first byte of your initially provided hash array.
 *
 * @note If the passed pointer is NULL, the results are unpredictable.
 *
 * @note Invoking this function for a calculation with no data (the writing function has never been invoked, or it only
 * has been invoked with empty data) is legal. It will calculate the SHA-256 value of the empty string.
 */
uint8_t *sha_256_close(struct Sha_256 *sha_256);

#ifdef __cplusplus
}
#endif

#endif

#define DTW_SHA256_IMPLEMENTED
#endif

#if !defined(_AES_H_)
#ifndef _AES_H_
#define _AES_H_

#include <stdint.h>

// #define the macros below to 1/0 to enable/disable the mode of operation.
//
// CBC enables AES encryption in CBC-mode of operation.
// CTR enables encryption in counter-mode.
// ECB enables the basic ECB 16-byte block algorithm. All can be enabled simultaneously.

// The #ifndef-guard allows it to be configured before #include'ing or at compile time.
#ifndef CBC
  #define CBC 1
#endif

#ifndef ECB
  #define ECB 1
#endif

#ifndef CTR
  #define CTR 1
#endif


#define AES128 1
//#define AES192 1
//#define AES256 1

#define AES_BLOCKLEN 16 //Block length in bytes AES is 128b block only

#if defined(AES256) && (AES256 == 1)
    #define AES_KEYLEN 32
    #define AES_keyExpSize 240
#elif defined(AES192) && (AES192 == 1)
    #define AES_KEYLEN 24
    #define AES_keyExpSize 208
#else
    #define AES_KEYLEN 16   // Key length in bytes
    #define AES_keyExpSize 176
#endif

struct AES_ctx
{
  uint8_t RoundKey[AES_keyExpSize];
#if (defined(CBC) && (CBC == 1)) || (defined(CTR) && (CTR == 1))
  uint8_t Iv[AES_BLOCKLEN];
#endif
};

void AES_init_ctx(struct AES_ctx* ctx, const uint8_t* key);
#if (defined(CBC) && (CBC == 1)) || (defined(CTR) && (CTR == 1))
void AES_init_ctx_iv(struct AES_ctx* ctx, const uint8_t* key, const uint8_t* iv);
void AES_ctx_set_iv(struct AES_ctx* ctx, const uint8_t* iv);
#endif

#if defined(ECB) && (ECB == 1)
// buffer size is exactly AES_BLOCKLEN bytes; 
// you need only AES_init_ctx as IV is not used in ECB 
// NB: ECB is considered insecure for most uses
void AES_ECB_encrypt(struct AES_ctx* ctx, uint8_t* buf);
void AES_ECB_decrypt(struct AES_ctx* ctx, uint8_t* buf);

#endif // #if defined(ECB) && (ECB == !)


#if defined(CBC) && (CBC == 1)
// buffer size MUST be mutile of AES_BLOCKLEN;
// Suggest https://en.wikipedia.org/wiki/Padding_(cryptography)#PKCS7 for padding scheme
// NOTES: you need to set IV in ctx via AES_init_ctx_iv() or AES_ctx_set_iv()
//        no IV should ever be reused with the same key 
void AES_CBC_encrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);
void AES_CBC_decrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);

#endif // #if defined(CBC) && (CBC == 1)


#if defined(CTR) && (CTR == 1)

// Same function for encrypting as for decrypting. 
// IV is incremented for every block, and used after encryption as XOR-compliment for output
// Suggesting https://en.wikipedia.org/wiki/Padding_(cryptography)#PKCS7 for padding scheme
// NOTES: you need to set IV in ctx with AES_init_ctx_iv() or AES_ctx_set_iv()
//        no IV should ever be reused with the same key 
void AES_CTR_xcrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);

#endif // #if defined(CTR) && (CTR == 1)


#endif //_AES_H_

#define DTW_AES_IMPLEMENTED
#endif
#endif

#ifndef doTHeWorld_consts
#define doTHeWorld_consts
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#define DTW_RAW_MODE 0
#define DTW_B64_MODE 1
#define DTW_HEX_MODE 2

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




#define DTW_FILE_TYPE 1
#define DTW_FOLDER_TYPE 2
#define DTW_ALL_TYPE 3
#define DTW_NOT_FOUND -1

#define DTW_COMPLEX_BINARY 10
#define DTW_COMPLEX_STRING_TYPE 11
#define DTW_COMPLEX_LONG_TYPE 12
#define DTW_COMPLEX_DOUBLE_TYPE 13
#define DTW_COMPLEX_BOOL_TYPE 14

#define DTW_MERGE true


#define DTW_NOT_MERGE false

#define DTW_NOT_NUMERICAL -2
#define DTW_NOT_BOOL -3

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#define DTW_CONCAT_PATH true
#define DTW_NOT_CONCAT_PATH false
#define WIN32_FILETYPE 32

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#define DTW_MULTIFILE_LOCKER_TOTAL_CHECK 500
#define DTW_MULTIFILE_LOCKER_MAX_TIMEOUT 10
#define DTW_MULFILE_LOCKER_MAX_WAIT 10


#define DTW_LOCKER_LOCKED 0
#define DTW_LOCKER_IMPOSSIBLE_TO_CREATE_FILE_DESCRIPTOR 5
#define DTW_LOCKER_FLCTL_FAIL 6
#define DTW_LOCKER_WAIT_ERROR 21
#define DTW_LOCKER_OS_NOT_PREDICTIBLE -1


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#define DTW_RESOURCE_ELEMENT_IS_NULL -1
#define DTW_RESOURCE_OK 0
#define DTW_RESOURCE_ELEMENT_NOT_EXIST 1
#define DTW_RESOURCE_ELEMENT_NOT_BOOL 2
#define DTW_RESOURCE_ELEMENT_NOT_LONG 3
#define DTW_RESOURCE_ELEMENT_NOT_DOUBLE 4
#define DTW_RESOURCE_ELEMENT_NOT_STRING 5
#define DTW_RESOURCE_PRIMARY_KEY_ALREADY_EXIST 6
#define DTW_RESOURCE_PRIMARY_KEY_CANNOT_HAVE_SUB_RESOURCE 7
#define DTW_IMPOSSIBLE_TO_RENAME_A_PRIMARY_KEY 8
#define DTW_RESOURCE_RENAMED_RESOURCE_CANNOT_HAVE_SONS 9
#define DTW_RESOURCE_IMPSSIBLE_TO_ADD_INSERTION_OUTSIDE_ROOT_SCHEMA 10
#define DTW_RESOURCE_IMPOSSIBLE_TO_ADD_SUB_RESOURCE_INSIDE_SCHEMA_STRUCT 11
#define DTW_RESOURCE_ONLY_ROOT_SCHEMA_CAN_FIND_BY_ID_OR_PK 12
#define DTW_RESOURCE_ONLY_ROOT_SCHEMA_HAVE_SCHEMA_VALUES 13
#define DTW_RESOURCE_ONLY_ROOT_SCHEMA_CANN_MODIFY_SCHEMA_PROPS 14


#define PRIVATE_DTW_SCHEMA_ROOT  1
#define PRIVATE_DTW_SCHEMA_VALUE 2
#define PRIVATE_DTW_SCHEMA_ELEMENT 3
#define PRIVATE_DTW_SCHEMA_ELEMENT_PROP 4
#define PRIVATE_DTW_SCHEMA_INDEX 5
#define PRIVATE_DTW_SCHEMA_PK_FOLDER 6
#define PRIVATE_DTW_SCHEMA_PK_VALUE 7


#define DTW_SCHEMA_DEFAULT_VALUES_NAME "value"
#define DTW_SCHEMA_DEFAULT_INDEX_NAME "index"

#define DTW_RESOURCE_ALL -1

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

enum {

    JSON_TRANSACTION_WRONG_TYPE,
    JSON_TRANSACTION_NOT_PRESENT_VALUE,
    JSON_TRANSACTION_INVALID_ACTION
};


enum {
    DTW_ACTION_FILE_NOT_FOUND,
    DTW_ACTION_ITS_NOT_JSON,
    DTW_ACTION_WRITE,
    DTW_ACTION_MOVE,
    DTW_ACTION_MOVE_MERGING,
    DTW_ACTION_COPY,
    DTW_ACTION_COPY_MERGING,
    DTW_ACTION_DELETE
};


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#define DTW_NOT_MIMIFY 1
#define DTW_MIMIFY 2

#define DTW_NOT_LOAD 1
#define DTW_LOAD 2

#define DTW_HIDE 1
#define DTW_INCLUDE 2




#define DTW_IS_BINARY true
#define DTW_IS_NOT_BINARY false
#define DTW_IGNORE true
#define DTW_NOT_IGNORE false

#define DTW_SET_AS_ACTION 1
#define DTW_EXECUTE_NOW 2

#define DTW_MODIFY 1
#define DTW_WRITE 2
#define DTW_REMOVE 3


#define DTW_JSON_TYPE_ERROR 1
#define DTW_JSON_SYNTAX_ERROR 2
#define DTW_JSON_REQUIRED_KEY_ERROR 3
#define DTW_JSON_REQUIRED_VALUE_ERROR 4
#define DTW_JSON_NOT_FOUND_ERROR 5
#define DTW_ACTION_ERROR (-1)


#endif

#ifndef doTHeWorld_macros
#define doTHeWorld_macros
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifdef __linux__
#define dtw_create_dir(path) mkdir(path,0777)
#elif _WIN32
#define dtw_create_dir(path) _mkdir(path)

#endif



//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#define DtwSchemaRebase self->root_props->schema_unsafe =old;
#define privateDtwSchemaUnsafe(scope){\
    bool old = self->root_props->schema_unsafe;\
    self->root_props->schema_unsafe = true;\
    scope;\
    DtwSchemaRebase\
}

#endif

#ifndef doTHeWorld_types
#define doTHeWorld_types
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct privateDtwAES_RAW_EncryptionInterface{
     uint8_t key[16];
     struct AES_ctx  ctx;
     uint8_t iv[16];
     void (*encrypt_buffer)( struct privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length);
     void (*decrypt_buffer)(struct privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length);

}privateDtwAES_RAW_EncryptionInterface;
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

typedef struct DtwEncriptionInterface{
    void *obj;
    unsigned char * (*encrypt_buffer)(void *obj, unsigned char *value,long size,long *out_size);
   unsigned char *(*decrypt_buffer)(void *obj, unsigned char *encrypted_value,long size,long *out_size);
   void (*free_obj)(void *obj);
}DtwEncriptionInterface;



//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef  struct DtwHash{
    char *hash;
}DtwHash;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef __linux__

typedef struct {

    char *filename;
    int file_descriptor;


}privateDtwFlockLockedElement;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwEncryptionNamespace{
//initializer
DtwEncriptionInterface *(*newInterface_raw)(void *obj, unsigned char *(*encrypt_buffer)(void *obj, unsigned char *value,long size,long *out_size), unsigned char *(*decrypt_buffer)(void *obj, unsigned char *encrypted_value,long size,long *out_size), void (*free_obj)(void *obj));
DtwEncriptionInterface *(*newAES_ECB_EncryptionInterface)(const uint8_t* key,int key_size);
DtwEncriptionInterface *(*newAES_ECB_EncryptionInterface_str)(const char* key);
DtwEncriptionInterface *(*newAES_Custom_CBC_v1_interface)(const char *key);
DtwEncriptionInterface *(*newAES_CBC_EncryptionInterface)(const uint8_t* key,int key_size,const uint8_t *iv, int iv_size);
DtwEncriptionInterface *(*newAES_CBC_EncryptionInterface_str)(const char* key,const char *iv);


//basic
unsigned char *(*encrypt_buffer)(DtwEncriptionInterface *self, unsigned char *value,long size,long *out_size);
unsigned char *(*decrypt_buffer)(DtwEncriptionInterface *self, unsigned char *encrypted_value,long size,long *out_size,bool *is_binary);
void (*free)(DtwEncriptionInterface *self);

//basic io
bool (*write_any_content)(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size);
bool (*write_string_file_content)(DtwEncriptionInterface *self,const char *file_name,const char *value);
unsigned char *(*load_any_content)(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary);
char *(*load_string_file_content)(DtwEncriptionInterface *self,const char *file_name);



//hex
char *(*encrypt_buffer_hex)(DtwEncriptionInterface *self, unsigned char *value,long size);
unsigned char *(*decrypt_buffer_hex)(DtwEncriptionInterface *self, const   char *encrypted_value,long *out_size,bool *is_binary);
bool (*write_any_content_hex)(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size);
bool (*write_string_file_content_hex)(DtwEncriptionInterface *self,const char *file_name,const char *value);
unsigned char *(*load_any_content_hex)(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary);
char *(*load_string_file_content_hex)(DtwEncriptionInterface *self,const char *file_name);


///b64
char *(*encrypt_buffer_b64)(DtwEncriptionInterface *self, unsigned char *value,long size);
unsigned char *(*decrypt_buffer_b64)(DtwEncriptionInterface *self, const   char *encrypted_value,long *out_size,bool *is_binary);
bool (*write_any_content_b64)(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size);
bool (*write_string_file_content_b64)(DtwEncriptionInterface *self,const char *file_name,const char *value);
unsigned char *(*load_any_content_b64)(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary);
char *(*load_string_file_content_b64)(DtwEncriptionInterface *self,const char *file_name);


}DtwEncryptionNamespace;
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwRandonizer{
    long internal_seed;
    long seed;
    long actual_generation;

}DtwRandonizer;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#ifdef DTW_ALLOW_CHASH


typedef  struct{
    char *key;
    CHash *element;
    bool free_key;
}privateDtw_CHash_element_and_key;

#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef  struct{
    char *key;
    bool free_key;
    cJSON *element;
}privateDtw_cJSON_element_and_key;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwStringArray {
    int size;
    char **strings;
}DtwStringArray;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifndef PRIVATE_DTW_ACTION_TRANSACTION_TYPE_H
#define PRIVATE_DTW_ACTION_TRANSACTION_TYPE_H
typedef struct DtwActionTransaction{
    short action_type;
    unsigned  char *content;
    long size;
    bool is_binary;
    DtwEncriptionInterface *encryption;
    short encryption_mode;

    char *dest;
    char *source;

}DtwActionTransaction;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifndef PRIVATE_DTW_JSON_TRANSACTION_ERROR_TYPE_H
#define PRIVATE_DTW_JSON_TRANSACTION_ERROR_TYPE_H
typedef struct DtwJsonTransactionError{
    int code;
    char *mensage;
    char *path;


}DtwJsonTransactionError;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifndef PRIVATE_DTW_JSON_TREE_ERROR_TYPE_H
#define PRIVATE_DTW_JSON_TREE_ERROR_TYPE_H
typedef struct DtwJsonTreeError {
    int code;
    int position;
    const char *menssage;


}DtwJsonTreeError;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwTreeProps{
    int minification;
    int content;
    int path_atributes;
    int hadware_data;
    int content_data;
    int ignored_elements;

}DtwTreeProps;

#endif

#ifndef doTHeWorld_typesb
#define doTHeWorld_typesb
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifdef __linux__

typedef struct {
    privateDtwFlockLockedElement **elements;
    int size;
}privateDtwFlockArray;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct {

    int total_checks;
    int process;
    int max_wait;
    int max_lock_time;
    DtwStringArray *locked_elements;


}DtwMultiFileLocker;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwPath {
    char *original_path_string;
    char *path;
    DtwStringArray *garbage;


}DtwPath;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwSchema{


    const char *value_name;
    const char *index_name;

    char *name;
    struct DtwSchema **sub_schemas;
    int size;
    DtwStringArray  *primary_keys;
}DtwSchema;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifndef PRIVATE_DT_TRANSACTION_TYPE_H
#define PRIVATE_DT_TRANSACTION_TYPE_H

typedef struct DtwTransaction{
    DtwEncriptionInterface *encryption;
    short encryption_mode;
    DtwActionTransaction  **actions;
    long size;

}DtwTransaction;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifndef PRIVATE_DTW_TRANSACTION_REPORT_TYPE_H
#define PRIVATE_DTW_TRANSACTION_REPORT_TYPE_H
typedef struct DtwTreeTransactionReport{
    DtwStringArray *write;
    DtwStringArray *modify;
    DtwStringArray *remove;

}DtwTreeTransactionReport;
#endif

#endif

#ifndef doTHeWorld_typesc
#define doTHeWorld_typesc
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#ifndef  PRIVATE_DTW_DATABASE_SCHEMA_TYPE_H
#define PRIVATE_DTW_DATABASE_SCHEMA_TYPE_H
typedef struct DtwDatabaseSchema{

    const char *value_name;
    const char *index_name;
    struct DtwSchema **sub_schemas;
    int size;
}DtwDatabaseSchema;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwTreePart{

    DtwPath *path;
    void *owner;
    long content_size;
    long  hardware_content_size;
    bool content_exist_in_hardware;
    bool ignore;
    bool is_binary;
    bool metadata_loaded;
    char *current_sha;
    char * last_modification_in_str;
    long last_modification_time;
    char *hawdware_content_sha;

    unsigned char *content;
    int pending_action;

}DtwTreePart;

#endif

#ifndef doTHeWorld_typesc_flock_locker
#define doTHeWorld_typesc_flock_locker
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef __linux__

typedef struct {
    const char *temp_folder;
    privateDtwFlockArray  *locked_files;
}DtwFlockLocker;
#endif

#endif

#ifndef doTHeWorld_typesd
#define doTHeWorld_typesd
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





typedef struct {
#ifdef __linux__
    DtwFlockLocker *locker;
#endif
#ifdef _WIN32
    DtwMultiFileLocker  *locker;
#endif

} DtwLocker;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifndef  PRIVATE_DTW_TREE_TYPE_H
#define  PRIVATE_DTW_TREE_TYPE_H
typedef struct  DtwTree{
    int size;
    DtwTreePart **tree_parts;

}DtwTree;
#endif

#endif

#ifndef doTHeWorld_typese
#define doTHeWorld_typese
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct {
    DtwTransaction  *transaction;
    DtwRandonizer  *randonizer;
    DtwLocker *locker;
    bool schema_unsafe;
    int error_code;
    char *error_path;
    char *error_message;
    DtwEncriptionInterface *encryption_interface;
    short encryption_mode;


}privateDtwResourceRootProps;

#endif

#ifndef doTHeWorld_typesf
#define doTHeWorld_typesf
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




typedef struct DtwResource{

    bool allow_transaction;
    bool use_locker_on_unique_values;


    privateDtwResourceRootProps *root_props;
    struct DtwResource *mother;
    char *name;
    char *path;

    
    //in the schema struct there is:
    //|/root
    //|/root/values
    //|root/values/element  <-----------------------------|
    //|root/values/element/pk_name ->any(write_point)     |
    //|root/values/element/element_prop ->any(write_point)|
    //|root/index                                         |
    //|root/index/pk_name/pk_sha ->txt  -------------------
    DtwSchema *attached_schema;
    DtwDatabaseSchema *datatabase_schema;
    struct DtwResource *values_resource;
    struct DtwResource *index_resource;
    int schema_type;

    bool loaded;
    bool is_binary;
    bool were_renamed;
    unsigned char *value_any;
    long value_size;

    //cache implementation
    bool cache_sub_resources;
    void *sub_resources;

}DtwResource;

#endif

#ifndef doTHeWorld_typesg
#define doTHeWorld_typesg
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct{
    bool(*filtrage_callback)(DtwResource *item, void *args_filter);
    void(*callback)(DtwResource *item, void *args);
    void *args;
    int start;
    int qtd;
}DtwResourceForeachProps;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef DTW_ALLOW_CHASH

typedef  struct{
    bool(*filtrage_callback)(DtwResource *item, void *args_filter);
    int (*ordenation_callback)(DtwResource *item1, DtwResource *item2, void *args);
    CHash *(*callback)(DtwResource *item, void *args);
    void *args;
    int start;
    int qtd;
} DtwResourceCHashrrayMapProps;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef DTW_ALLOW_CHASH

typedef  struct{
    char *(*key_provider_callback)(DtwResource *item,void *args);
    bool(*filtrage_callback)(DtwResource *item, void *args_filter);
    int (*ordenation_callback)(DtwResource *item1, DtwResource *item2, void *args);
    CHash *(*callback)(DtwResource *item, void *args);
    void *args;
    bool free_key;
    int start;
    int qtd;
} DtwResourceCHashObjectMapProps;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef  struct{
    bool(*filtrage_callback)(DtwResource *item, void *args_filter);
    int (*ordenation_callback)(DtwResource *item1, DtwResource *item2, void *args);
    cJSON *(*callback)(DtwResource *item, void *args);
    void *args;
    int start;
    int qtd;
} DtwResourcecJSONArrayMapProps;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef  struct{
    char *(*key_provider_callback)(DtwResource *item,void *args);
    bool free_key;
    bool(*filtrage_callback)(DtwResource *item, void *args_filter);
    int (*ordenation_callback)(DtwResource *item1, DtwResource *item2, void *args);
    cJSON *(*callback)(DtwResource *item, void *args);
    void *args;
    int start;
    int qtd;
} DtwResourcecJSONObjectMapProps;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct {
    void *result;
    void *args;
    DtwResource *current;
    int (*ordenation_callback)(DtwResource *item1, DtwResource *item2, void *args);
}privateDtwResource_map_element;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct {
    void *main_array;
    void(*append)(void *main_array_arg, void *item);
    bool(*filtrage_callback)(DtwResource *item, void *args);
    int (*ordenation_callback)(DtwResource *item1, DtwResource *item2, void *args);
    void *(*callback)(DtwResource *item, void *args);
    void *args;
    int start;
    int qtd;
}DtwResourceMapProps;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwResourceArray{
    DtwResource **resources;
    long size;

}DtwResourceArray;

#endif

#ifndef doTHeWorld_typesi
#define doTHeWorld_typesi
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifndef PRIVATE_DTW_DATABASE_SCHEMA_MODULE_TYPE_H
#define PRIVATE_DTW_DATABASE_SCHEMA_MODULE_TYPE_H
typedef struct {
    DtwSchema * (*sub_schema)(DtwDatabaseSchema *self,const char *name);
}DtwDatabaseSchemaModule;
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




typedef struct DtwHashModule{
    DtwHash * (*newHash)();
    bool  (*digest_any)(DtwHash *self,unsigned char *content,long size);
    bool (*digest_string)(DtwHash * self, const char *content);
    void (*digest_long)(DtwHash * self,long content);
    void (*digest_double)(DtwHash * self,double content);
    void (*digest_bool)(DtwHash * self,bool content);
    bool  (*digest_file)(DtwHash * self, const char *path);
    bool  (*digest_entity_last_modification)(DtwHash * self, const char *path);
    bool (*digest_string_array)(DtwHash *self,DtwStringArray *element);
    bool (*digest_string_array_last_modifications)(DtwHash *self,DtwStringArray *element);
    bool (*digest_string_array_last_modifications_adding_name)(DtwHash *self,DtwStringArray *element);
    bool (*digest_string_array_content)(DtwHash *self,DtwStringArray *element);
    bool (*digest_string_array_content_adding_name)(DtwHash *self,DtwStringArray *element);
    bool (*digest_folder_by_last_modification)(DtwHash *self,const char *path);
    bool (*digest_folder_by_content)(DtwHash *self,const char *path);
    void  (*free)(DtwHash *self);

}DtwHashModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwLockerModule{
    DtwLocker * (*newLocker)();
    int (*lock)(DtwLocker *self, const  char *element);
    void (*unlock)(DtwLocker *self, const  char *element);
    void (*represemt)(DtwLocker *self);
    void (*free)(DtwLocker *self);

}DtwLockerModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwPathModule{
    //Getters

    DtwPath * (*newPath)(const char *path);
    bool  (*changed)(struct DtwPath *self);
    char *(*get_full_name) (struct DtwPath *self);
    char *(*get_name) (struct DtwPath *self);
    char *(*get_extension) (struct DtwPath *self);

    char *(*get_path) (struct DtwPath *self);
    char *(*get_dir) (struct DtwPath *self);

    int (*get_total_dirs)(DtwPath *self);
    char *(*get_sub_dirs_from_index)(DtwPath *self, int start,int end);
    void (*insert_dir_at_index)(DtwPath *self,int index,const char *dir);
    void (*remove_sub_dirs_at_index)(DtwPath *self,int start,int end);
    void (*insert_dir_after)(DtwPath *self,const char *str,const char *dir);
    void (*insert_dir_before)(DtwPath *self,const char *str,const char *dir);
    void (*replace_dirs)(DtwPath *self,const char *str,const char *dir);
    void (*remove_sub_dirs_at)(DtwPath *self,const char *str);


    //Setters
    void (*set_extension) (struct DtwPath *self, const char *extension);
    void (*set_name) (struct DtwPath *self, const char *name);
    void (*set_dir) (struct DtwPath *self, const char *path);
    void (*set_full_name) (struct DtwPath *self, const char *full_name);
    void (*set_path) (struct DtwPath *self, const char *target_path);

    void (*add_start_dir)(struct DtwPath *self, const char *start_dir);
    void (*add_end_dir)(struct DtwPath *self, const char *end_dir);

    void (*represent)(struct DtwPath *self);
    void (*free) (struct DtwPath *self);

}DtwPathModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct  DtwRandonizerModule{
    DtwRandonizer * (*newRandonizer)();
    int (*generate_num)(DtwRandonizer *self,int max);
    char * (*generate_token)(DtwRandonizer*self, int size);
    void (*free)(DtwRandonizer *self);
}DtwRandonizerModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwResourceArrayModule{

    void (*append)(DtwResourceArray *self, DtwResource *element);
    DtwResource * (*get_by_name)(DtwResourceArray *self, const char *name);
    void (*represent)(DtwResourceArray *self);
    void (*free)(DtwResourceArray *self);

}DtwResourceArrayModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwResourceModule{

    DtwResource *(*newResource)(const char *path);
    int (*get_error_code)(DtwResource *self);
    bool (*error)(DtwResource *self);

    void (*set_encryption)(DtwResource *self,DtwEncriptionInterface *encryption_interface,short mode);
    

    DtwResourceForeachProps (*create_foreach_props)( void(*callback)(DtwResource *item, void *args));
    void (*each)(DtwResource *self,DtwResourceForeachProps props);
    void (*schema_each)(DtwResource *self,DtwResourceForeachProps props);

    DtwResourceMapProps (*create_map_props)(
        void *main_array,
        void(*append)(void *main_array_arg, void *item),
        void *(*callback)(DtwResource *item, void *args)
    );
    void (*map)(DtwResource *self,DtwResourceMapProps props);
    void (*schema_map)(DtwResource *self,DtwResourceMapProps props);

    DtwResourcecJSONArrayMapProps (*create_cJSONArrayMapProps)(cJSON *(*callback)(DtwResource *item, void *args));
    cJSON *(*map_cJSONArray)(DtwResource *self,DtwResourcecJSONArrayMapProps props);
    cJSON *(*schema_map_cJSONArray)(DtwResource *self,DtwResourcecJSONArrayMapProps props);

    DtwResourcecJSONObjectMapProps (*create_cJSONObjectProps)(
        cJSON *(*callback)(DtwResource *item, void *args),
        char *(*key_provider_callback)(DtwResource *item,void *args)
    );

    cJSON *(*map_cJSONObject)(DtwResource *self,DtwResourcecJSONObjectMapProps props);
    cJSON *(*schema_map_cJSONObject)(DtwResource *self,DtwResourcecJSONObjectMapProps props);


    #ifdef DTW_ALLOW_CHASH
    DtwResourceCHashrrayMapProps  (*create_CHashrrayMapProps)(    CHash *(*callback)(DtwResource *item, void *args));


    CHashArray *(*map_CHashArray)(DtwResource *self,DtwResourceCHashrrayMapProps props);
    CHashArray *(*schema_map_CHashArray)(DtwResource *self,DtwResourceCHashrrayMapProps props);

    DtwResourceCHashObjectMapProps (*createCHashObjectMapProps)(
        CHash *(*callback)(DtwResource *item, void *args),
        char*(*key_provider)(DtwResource *item, void *args_filter)
    );

    CHashObject *(*map_CHashObject)(DtwResource *self,DtwResourceCHashObjectMapProps props);
    CHashObject *(*schema_map_CHashObject)(DtwResource *self,DtwResourceCHashObjectMapProps props);


    #endif

    char * (*get_error_message)(DtwResource *self);
    bool (*is_file)(DtwResource *self);
    void (*destroy_sub_resource)(DtwResource *self, const char *key);
    void (*rename_sub_resource)(DtwResource *self,const char *old_name,const  char *new_name);
    DtwResource * (*sub_resource)(struct DtwResource *self,const  char *format,...);
    unsigned char *(*get_any_from_sub_resource)(DtwResource *self, long *size, bool *is_binary,const char *format,...);
    unsigned char *(*get_binary_from_sub_resource)(DtwResource *self, long *size,const char *format,...);
    char *(*get_string_from_sub_resource)(DtwResource *self,const char *format,...);
    long (*get_long_from_sub_resource)(DtwResource *self,const char *format,...);
    double (*get_double_from_sub_resource)(DtwResource *self,const char *format,...);
    bool (*get_bool_from_sub_resource)(DtwResource *self,const char *format,...);
    void (*set_any_in_sub_resource)(DtwResource *self,const char *key, unsigned char *element, long size,bool is_binary);
    void (*set_binary_in_sub_resource)(DtwResource *self,const char *key, unsigned char *element, long size);
    void (*set_string_in_sub_resource)(DtwResource *self,const char *key,const  char *element);
    void (*set_long_in_sub_resource)(DtwResource *self,const char *key,long element);
    void (*set_double_in_sub_resource)(DtwResource *self,const char *key,double element);
    void (*set_bool_in_sub_resource)( DtwResource *self,const char *key,bool element);
    void (*set_binary_sha)(DtwResource *self, unsigned  char *value, long size);
    void (*set_string_sha)(DtwResource *self,const char *value);
    void (*set_binary_sha_in_sub_resource)(DtwResource *self,const char *key, unsigned  char *value, long size);
    void (*set_string_sha_in_sub_resource)(DtwResource *self,const char *key,const char *value);



    DtwResource * (*new_schema_insertion)(DtwResource *self);
    DtwResource  *(*find_by_name_id)(DtwResource *self, const char *name);
    DtwResource * (*find_by_primary_key_with_binary)(DtwResource *self, const char *primary_key, unsigned  char *value, long size);
    DtwResource * (*find_by_primary_key_with_string)(DtwResource *self, const char *key, const char *value);
    void (*dangerous_remove_schema_prop)(DtwResource*self,const char *prop);
    void (*dangerous_rename_schema_prop)(DtwResource*self,const char *prop,const char *new_name);
    DtwDatabaseSchema * (*newDatabaseSchema)(DtwResource *self);

    char * (*get_error_path)(DtwResource *self);
    DtwResourceArray * (*get_schema_values)(DtwResource *self);


    DtwResource * (*sub_resource_ensuring_not_exist)(DtwResource *self,const  char *format, ...);
    DtwResource * (*sub_resource_next)(DtwResource *self, const char *end_path);
    DtwResource * (*sub_resource_now)(DtwResource *self, const char *end_path);

    DtwResource * (*sub_resource_now_in_unix)(DtwResource *self,const char *end_path);
    DtwResource * (*sub_resource_random)(DtwResource *self,const char *end_path);


    void (*load)(DtwResource *self);

    void (*unload)(DtwResource *self);

    int (*lock)(DtwResource *self);
    void (*unlock)(DtwResource *self);

    void (*destroy)(DtwResource *self);
    void  (*clear_errors)(DtwResource *self);
    unsigned char *(*get_any)(struct DtwResource *self, long *size, bool *is_binary);

    unsigned char *(*get_binary)(struct DtwResource *self, long *size);

    char *(*get_string)(struct DtwResource *self);

    long (*get_long)(struct DtwResource *self);

    double (*get_double)(struct DtwResource *self);

    bool (*get_bool)(struct DtwResource *self);
    void (*set_any)(DtwResource *self, unsigned char *element, long size,bool is_binary);
    void (*set_binary)(DtwResource *self, unsigned char *element, long size);

    void (*set_string)(DtwResource *self,const  char *element);

    void (*set_long)(DtwResource *self,long element);

    void (*set_double)(DtwResource *self,double element);

    void (*set_bool)(DtwResource *self,bool element);



    DtwStringArray *(*list_names)(DtwResource *self);

    long (*size)(DtwResource *self);
    int (*type)(DtwResource *self);

    const char *(*type_in_str)(DtwResource *self);
    void (*commit)(DtwResource *self);

    void (*represent)(DtwResource *self);

    void (*rename)(DtwResource *self,const char *new_name);

    void (*free)(DtwResource *self);
    DtwResourceArray * (*sub_resources)(DtwResource *self);
    DtwResourceArrayModule array;


}DtwResourceModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct {
    void (*add_primary_key)(DtwSchema *self, const char *primary_key);
    DtwSchema * (*sub_schema)(DtwSchema *self,const char *name);
}DtwSchemaModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwStringArrayModule{
    DtwStringArray *(*newStringArray)();

    void (*set_value)(struct DtwStringArray *self,int index,const char *value);

    void (*append)(struct DtwStringArray *self,const char *string);

    void (*pop)(struct DtwStringArray *self, int position);

    void (*merge)(struct DtwStringArray *self, struct DtwStringArray *other);

    void (*represent)(struct DtwStringArray *self);

    int (*find_position)(struct DtwStringArray *self,const char *string);

    void (*sort)(struct DtwStringArray *self);

    void (*free)(struct DtwStringArray *self);


}DtwStringArrayModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwActionTransactionModule{

    DtwActionTransaction *(*newAction)();

    DtwActionTransaction * (*write_any)(const char *source,unsigned  char *content,long size,bool is_binary);

    DtwActionTransaction * (*move_any)(const char *source, const char *dest);
    DtwActionTransaction * (*move_any_merging)(const char *source, const char *dest);
    DtwActionTransaction * (*copy_any_merging)(const char *source, const char *dest);

    DtwActionTransaction * (*copy_any)(const char *source, const char *dest);

    DtwActionTransaction * (*delete_any)(const char *source);

    short (*convert_action_to_integer)(char *action);

    const char * (*convert_action_to_string)(int action);

    void (*commit)(DtwActionTransaction* self,const char *path);

    void (*represent)(DtwActionTransaction* self);

    void (*free)(DtwActionTransaction* self);

}DtwActionTransactionModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwJsonTransactionErrorModule{
    void (*represent)(struct DtwJsonTransactionError *self);
    void (*free)(struct DtwJsonTransactionError *self);

}DtwJsonTransactionErrorModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwTransactionModule{
    DtwTransaction *(*newTransaction)();
    DtwTransaction * (*newTransaction_from_json)(cJSON *json_entry);
    DtwTransaction * (*newTransaction_from_json_file)(const char *filename);
    DtwJsonTransactionError * (*validate_json_transaction_file)(const char *filename);
    void (*set_encryption)(DtwTransaction *self,DtwEncriptionInterface *encryption,short encryption_mode);

    void (*remove_from_index)(DtwTransaction *self,long index);
    void (*remove_from_source)(DtwTransaction *self,const char *source);
    void (*filter)(DtwTransaction *self,bool (*callback)(DtwActionTransaction *action));

    void (*append_action)(struct DtwTransaction *self,struct DtwActionTransaction  *action);
    void (*write_any)(struct DtwTransaction *self,const char *path,unsigned char *content, long size,bool is_binary);
    void (*write_string)(struct DtwTransaction *self,const char *path,const char *content);

    void (*write_long)(struct DtwTransaction *self,const char *path,long value);
    void (*write_bool)(struct DtwTransaction *self,const char *path,bool value);
    void (*write_double)(struct DtwTransaction *self,const char *path,double value);

    void (*move_any_merging)(struct DtwTransaction *self,const char *source,const char *dest);
    void (*copy_any_merging)(struct DtwTransaction *self,const char *source,const char *dest);


    void (*move_any)(struct DtwTransaction *self,const char *source,const char *dest);
    void (*copy_any)(struct DtwTransaction *self,const char *source,const char *dest);
    void (*delete_any)(struct DtwTransaction *self,const char *source);

    cJSON *(*dumps_transaction_to_json)(struct DtwTransaction *self);
    void (*dumps_transaction_to_json_file)(struct DtwTransaction *self,const char *filename);

    void (*commit)(struct DtwTransaction *self,const char *source);
    void (*represent)(struct DtwTransaction *self);
    void (*free)(struct DtwTransaction *self);

    DtwActionTransactionModule action;
    DtwJsonTransactionErrorModule json_error;


}DtwTransactionModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwJsonTreeErrorModule{

    DtwJsonTreeError * (*validate_json_tree_by_cJSON)(cJSON *json_tree);
    DtwJsonTreeError * (*validate_json_tree_by_content)(const char *content);
    void (*free)(struct DtwJsonTreeError *self);
    void (*represent)(struct DtwJsonTreeError *self);

}DtwJsonTreeErrorModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct  DtwTreeTransactionReportModule{

    void (*represent)(struct DtwTreeTransactionReport *report);
    void (*free)(struct DtwTreeTransactionReport *report);

}DtwTreeTransactionReportModule;

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



typedef struct DtwTreePartModule{

    DtwTreePart  *(*newPart)(const char *path, DtwTreeProps props);
    DtwTreePart  *(*newPartEmpty)(const char *path);
    DtwTreePart * (*newPartLoading)(const char *path);

    char *(*get_content_string_by_reference)(struct DtwTreePart *self);
    unsigned char *(*get_content_binary_by_reference)(struct DtwTreePart *self);

    char *(*get_content_sha)(struct DtwTreePart *self);
    void (*set_any_content)(struct DtwTreePart *self,unsigned char *content,long content_size,bool is_binary);
    void (*set_string_content)(struct DtwTreePart *self,const char *content);
    void (*set_binary_content)(struct DtwTreePart *self,unsigned char *content,long content_size);
    void (*load_content_from_hardware)(struct DtwTreePart *self);
    void (*free_content)(struct DtwTreePart *self);
    void(*represent)(struct DtwTreePart *self);

    bool(*hardware_remove)(struct DtwTreePart *self, int transaction);
    bool(*hardware_write)(struct DtwTreePart *self, int transaction);
    bool(*hardware_modify)(struct DtwTreePart *self, int transaction);
    bool(*hardware_commit)(struct DtwTreePart *self);

    void (*free)(struct DtwTreePart *self);
    struct DtwTreePart *(*self_copy)(struct DtwTreePart *self);
}DtwTreePartModule;

#endif

#ifndef doTHeWorld_typesj
#define doTHeWorld_typesj
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


typedef struct DtwTreeModule{

    DtwTree  *(*newTree)();
    void (*add_tree_part_by_copy)(
             DtwTree *self,
             DtwTreePart *tree_part
    );

    void (*remove_tree_part)(
             DtwTree *self,
            int position
    );

    void (*add_tree_part_getting_owenership)(
             DtwTree *self,
             DtwTreePart *tree_part
    );
    void (*add_tree_part_referencing)(
            DtwTree *self,
            DtwTreePart *tree_part
    );
        void (*add_tree_parts_from_string_array)(
            struct DtwTree *self,
            struct DtwStringArray *paths,
            DtwTreeProps props
    );

    struct DtwTree *(*get_sub_tree)(
            struct DtwTree *self,
            const char *path,
            bool copy_content
    );

    void (*add_tree_from_hardware)(
            struct DtwTree *self,
            const char *path,
            DtwTreeProps props
    );
    //Listage Functions

    DtwTreePart *(*find_tree_part_by_function)(
            struct DtwTree *self,
            bool (*caller)(struct  DtwTreePart *part,void *args),
            void *args
    );

    DtwTree *(*filter)(
            struct DtwTree *self,
            bool (*caller)(struct  DtwTreePart *part)
    );

    DtwTree *(*map)(
            struct DtwTree *self,
            struct  DtwTreePart*(*caller)(struct  DtwTreePart *part)
    );


    DtwStringArray * (*list_files)(struct DtwTree *self, const char *path,bool concat_path);
    DtwStringArray * (*list_dirs)(struct DtwTree *self, const char *path,bool concat_path);
    DtwStringArray * (*list_all)(struct DtwTree *self, const char *path,bool concat_path);

    DtwStringArray * (*list_files_recursively)(struct DtwTree *self, const char *path,bool concat_path);
    DtwStringArray * (*list_dirs_recursively)(struct DtwTree *self, const char *path,bool concat_path);
    DtwStringArray * (*list_all_recursively)(struct DtwTree *self, const char *path,bool concat_path);


    struct DtwTreePart *(*find_tree_part_by_name)( struct DtwTree *self,const char *name);
    struct DtwTreePart *(*find_tree_part_by_path)(   struct DtwTree *self,const char *path);


    struct DtwTreeTransactionReport * (*create_report)(struct DtwTree *self);

    bool (*loads_json_tree)(
            struct DtwTree *self,
            const char *content
    );


    bool (*loads_json_tree_from_file)(
            struct DtwTree *self,
            const char *path
    );

    char *(*dumps_json_tree)(
            struct DtwTree *self,
            DtwTreeProps props
    );

    void (*dumps_json_tree_to_file)(
            struct DtwTree *self,
            const char *path,
            DtwTreeProps  props
    );

    void (*represent)(struct DtwTree *self);
    void (*insecure_hardware_remove_tree)(struct DtwTree *self);
    void (*insecure_hardware_write_tree)(struct DtwTree *self);
    void (*hardware_commit_tree)(struct DtwTree *self);
    void (*free)(struct DtwTree *self);

    DtwTreeTransactionReportModule transaction_report;

    DtwTreePartModule part;
    DtwJsonTreeErrorModule json_error;

}DtwTreeModule;

#endif

#ifndef doTHeWorld_typesm
#define doTHeWorld_typesm
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




typedef struct DtwNamespace{
    //IO
    void (*create_dir_recursively)(const char *path);

    bool (*remove_any)(const char* path);

    char *(*get_current_dir)();

    unsigned char *(*load_any_content)(const char * path,long *size,bool *is_binary);

    char *(*get_absolute_path)(const char *path);

    char *(*load_string_file_content)(const char * path);

    unsigned char *(*load_binary_content)(const char * path,long *size);

    bool (*write_any_content)(const char *path,unsigned  char *content,long size);

    bool (*write_string_file_content)(const char *path,const char *content);

    int (*entity_type)(const char *path);

    int (*complex_entity_type)(const char *path);

    const char *(*convert_entity)(int entity_type);

    bool (*copy_any)(const char* src_path,const  char* dest_path,bool merge);

    bool (*move_any)(const char* src_path, const char* dest_path,bool merge);

    //numeral io

    long (*load_long_file_content)(const char * path);

    double (*load_double_file_content)(const char * path);

    bool (*load_bool_file_content)(const char * path);



    void (*write_long_file_content)(const char *path, long value);

    void (*write_bool_file_content)(const char *path, bool value);

    void (*write_double_file_content)(const char *path,double value);



    //listage

    DtwStringArray * (*list_files)(const char *path, bool concat_path);
    DtwStringArray * (*list_dirs)(const char *path, bool concat_path);

    DtwStringArray *  (*list_all)(const char *path,  bool concat_path);
    DtwStringArray * (*list_dirs_recursively)(const char *path,bool concat_path);
    DtwStringArray *  (*list_files_recursively)(const char *path,bool concat_path);
    DtwStringArray * (*list_all_recursively)(const char *path,bool concat_path);


    //extras

    char * (*generate_sha_from_file)(const char *path);

    char * (*generate_sha_from_string)(const char *string);

    char * (*generate_sha_from_any)(void *anything , long size);

    long int (*get_entity_last_motification_in_unix)(const char *path);

    char * (*convert_unix_time_to_string)(long int unix_time);

    char * (*get_entity_last_motification_in_string)(const char *path);

    char *(*concat_path)(const char *path1, const char *path2);


    //base64

    char *(*base64_encode)(unsigned char *data, long input_length);

    unsigned char *(*base64_decode)(const char *data, long *output_length);

    char *(*convert_binary_file_to_base64)(const char *path);
    //string array

    DtwStringArrayModule string_array;
    DtwEncryptionNamespace encryption;
    DtwPathModule path;

    DtwLockerModule locker;

    DtwSchemaModule schema;
    DtwDatabaseSchemaModule database_schema;
    DtwTreeModule tree;
    DtwHashModule  hash;
    DtwTransactionModule transaction;

    DtwResourceModule resource;
    DtwRandonizerModule randonizer;

}DtwNamespace;

#endif

#ifndef doTHeWorld_fdeclare
#define doTHeWorld_fdeclare
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



char *dtw_base64_encode(unsigned char *data, long input_length);


unsigned char *dtw_base64_decode(const char *data, long *output_length);


char *dtw_convert_binary_file_to_base64(const char *path);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


void privteDtwAES_CBC_EncryptionInterface_encrypt_buffer(privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length);


void privteDtwAES_CBC_EncryptionInterface_decrypt_buffer(privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length);
DtwEncriptionInterface *newDtwAES_CBC_EncryptionInterface(const uint8_t* key,int key_size,const uint8_t *iv, int iv_size);

DtwEncriptionInterface *newDtwAES_CBC_EncryptionInterface_str(const char* key,const char *iv);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


void privteDtwAES_ECB_EncryptionInterface_encrypt_buffer(privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length);

void privteDtwAES_ECB_EncryptionInterface_decrypt_buffer(privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length);

DtwEncriptionInterface *newDtwAES_ECB_EncryptionInterface(const uint8_t* key,int key_size);

DtwEncriptionInterface *newDtwAES_ECB_EncryptionInterface_str(const char* key);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


unsigned char * privateDtwAES_RAW_EncryptionInterface_encrypt_buffer(void *obj, unsigned char *value,long size,long *out_size);

unsigned char *privateDtwAES_RAW_EncryptionInterface_decrypt_buffer(void *obj, unsigned char *encrypted_value,long size,long *out_size);

void  privateDtwAES_RAW_EncryptionInterface_free_obj(void *obj);

DtwEncriptionInterface *newDtwAES_RAW_EncryptionInterface(const uint8_t* key,int key_size);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

char *DtwEncriptionInterface_encrypt_buffer_b64(DtwEncriptionInterface *self, unsigned char *value,long size);


unsigned char *DtwEncriptionInterface_decrypt_buffer_b64(DtwEncriptionInterface *self, const   char *encrypted_value,long *out_size,bool *is_binary);


bool DtwEncriptionInterface_write_any_content_b64(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size);

bool DtwEncriptionInterface_write_string_file_content_b64(DtwEncriptionInterface *self,const char *file_name,const char *value);

unsigned char *DtwEncriptionInterface_load_any_content_b64(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary);

char *DtwEncriptionInterface_load_string_file_content_b64(DtwEncriptionInterface *self,const char *file_name);


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


DtwEncriptionInterface *newDtwEncriptionInterface_raw(void *obj,    unsigned char *(*encrypt_buffer)(void *obj, unsigned char *value,long size,long *out_size), unsigned char *(*decrypt_buffer)(void *obj, unsigned char *encrypted_value,long size,long *out_size), void (*free_obj)(void *obj));

unsigned char *DtwEncriptionInterface_encrypt_buffer(DtwEncriptionInterface *self, unsigned char *value,long size,long *out_size);

unsigned char *DtwEncriptionInterface_decrypt_buffer(DtwEncriptionInterface *self, unsigned char *encrypted_value,long size,long *out_size,bool *is_binary);


void DtwEncriptionInterface_free(DtwEncriptionInterface *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end








bool DtwEncriptionInterface_write_any_content(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size);



bool DtwEncriptionInterface_write_string_file_content(DtwEncriptionInterface *self,const char *file_name,const char *value);


unsigned char *DtwEncriptionInterface_load_any_content(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary);


char *DtwEncriptionInterface_load_string_file_content(DtwEncriptionInterface *self,const char *file_name);




//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

char *DtwEncriptionInterface_encrypt_buffer_hex(DtwEncriptionInterface *self, unsigned char *value,long size);


unsigned char *DtwEncriptionInterface_decrypt_buffer_hex(DtwEncriptionInterface *self, const   char *encrypted_value,long *out_size,bool *is_binary);


bool DtwEncriptionInterface_write_any_content_hex(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size);

bool DtwEncriptionInterface_write_string_file_content_hex(DtwEncriptionInterface *self,const char *file_name,const char *value);

unsigned char *DtwEncriptionInterface_load_any_content_hex(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary);

char *DtwEncriptionInterface_load_string_file_content_hex(DtwEncriptionInterface *self,const char *file_name);


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


bool private_DtwEncriptionInterface_write_any_content_custom_mode(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size,short mode);

unsigned char *private_DtwEncriptionInterface_load_any_content_custom_mode(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary,short mode);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



char * dtw_generate_sha_from_file(const char *path);
char * dtw_generate_sha_from_string(const char *string);
char * dtw_generate_sha_from_any(void *anything , long size);

long int dtw_get_entity_last_motification_in_unix(const char *path);
char * dtw_convert_unix_time_to_string(long int unix_time);
char * dtw_get_entity_last_motification_in_string(const char *path);
const char * private_dtw_convert_action_to_string(short action);
short private_dtw_convert_string_to_action(const char *action);
void private_dtw_add_end_bar_to_dirs_string_array(struct DtwStringArray * dirs);

long private_dtw_convert_index(long index,long size);


long dtw_get_time();

char *dtw_convert_binary_to_hex(unsigned char *value,long size);
unsigned char *dtw_convert_hex_to_binary(const char *value,long *out_size);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





DtwHash * newDtwHash();

bool  DtwHash_digest_any(DtwHash *self,unsigned char *content,long size);

bool DtwHash_digest_string(DtwHash * self, const char *content);

void DtwHash_digest_long(DtwHash * self,long content);

void DtwHash_digest_double(DtwHash * self,double content);

void DtwHash_digest_bool(DtwHash * self,bool content);

bool  DtwHash_digest_file(DtwHash * self, const char *path);

bool DtwHash_digest_entity_last_modification(DtwHash * self, const char *path);

bool DtwHash_digest_folder_by_last_modification(DtwHash *self,const char *path);

bool DtwHash_digest_folder_by_content(DtwHash *self,const char *path);


bool DtwHash_digest_string_array(DtwHash *self,DtwStringArray *element);

bool DtwHash_digest_string_array_last_modifications(DtwHash *self,DtwStringArray *element);

bool DtwHash_digest_string_array_last_modifications_adding_name(DtwHash *self,DtwStringArray *element);


bool DtwHash_digest_string_array_content(DtwHash *self,DtwStringArray *element);

bool DtwHash_digest_string_array_content_adding_name(DtwHash *self,DtwStringArray *element);


void  DtwHash_free(DtwHash *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void dtw_create_dir_recursively(const char *path);

bool dtw_remove_any(const char* path);

char *dtw_get_current_dir();

long dtw_get_total_itens_of_dir(const char *path);

unsigned char *dtw_load_any_content(const char * path,long *size,bool *is_binary);

char *dtw_get_absolute_path(const char *path);

char *dtw_load_string_file_content(const char * path);

unsigned char *dtw_load_binary_content(const char * path,long *size);


bool dtw_write_any_content(const char *path,unsigned  char *content,long size);
bool dtw_write_string_file_content(const char *path,const char *content);



int dtw_entity_type(const char *path);



int dtw_complex_entity_type(const char *path);

const char *dtw_convert_entity(int entity_type);


bool dtw_copy_any(const char* src_path,const  char* dest_path,bool merge);



bool dtw_move_any(const char* src_path, const char* dest_path,bool merge);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




 DtwStringArray * dtw_list_files(const char *path, bool concat_path);
DtwStringArray * dtw_list_dirs(const char *path, bool concat_path);

DtwStringArray *  dtw_list_all(const char *path,  bool concat_path);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#ifdef __linux__


DtwFlockLocker * newFlockLocker();

void private_FlockLocker_unlock_by_index(DtwFlockLocker *self, int index);

void DtwFlockLocker_unlock(DtwFlockLocker *self, const char *filename);

int DtwFlockLocker_lock(DtwFlockLocker *self, const char *filename);

void  DtwFlockLocker_represent(DtwFlockLocker *self);

void  DtwFlockLocker_free(DtwFlockLocker *self);
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




#ifdef __linux__



privateDtwFlockArray * private_new_privateFlockArray();

int  privateDtwFlockArray_index_of(privateDtwFlockArray *self, const char *filename);

void privateDtwFlockArray_append(privateDtwFlockArray *self, const char *filename, int file_descriptor);

void privateDtwFlockArray_destroy_by_index(privateDtwFlockArray *self, int position);

void privateDtwFlockArray_represent(privateDtwFlockArray *self);

void privateDtwFlockArray_free(privateDtwFlockArray *self);
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifdef __linux__


privateDtwFlockLockedElement * private_new_privateDtwFlockLockedElement(const char *filename, int file_descriptor);

void privateDtwFlockLockedElement_represent(privateDtwFlockLockedElement *self);

void privateDtwFlockLockedElement_free(privateDtwFlockLockedElement *self);
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwLocker *newDtwLocker();

int DtwLocker_lock(DtwLocker *self, const  char *element);

void DtwLocker_unlock(DtwLocker *self, const  char *element);

void DtwLocker_represemt(DtwLocker *self);

void DtwLocker_free(DtwLocker *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwMultiFileLocker *newDtwMultiFileLocker();

int DtwMultiFIleLocker_lock(DtwMultiFileLocker *self, const  char *element);

void DtwMultifileLocker_unlock(DtwMultiFileLocker *self, const  char *element);

void DtwMultiFileLocker_represemt(DtwMultiFileLocker *self);

void DtwMultiFileLocker_free(DtwMultiFileLocker *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#ifdef __linux__

bool private_dtw_verify_if_add(const int expected_type, int d_type);
bool private_dtw_verify_if_skip(struct dirent *entry);

#endif


#ifdef _WIN32

bool private_dtw_verify_if_add(const int expected_type, WIN32_FIND_DATAA entry);
bool private_dtw_verify_if_skip(WIN32_FIND_DATAA *entry);
#endif



struct DtwStringArray * dtw_list_basic(const char *path,int expected_type,bool concat_path);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



 DtwStringArray * dtw_list_dirs_recursively(const char *path,bool concat_path);


 DtwStringArray *  dtw_list_files_recursively(const char *path,bool concat_path);


 DtwStringArray * dtw_list_all_recursively(const char *path,bool concat_path);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwDatabaseSchemaModule newDtwDatabaseSchemaModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


DtwEncryptionNamespace newDtwEncryptionNamespace();
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwHashModule newDtwHashModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwLockerModule newDtwLockerModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwNamespace newDtwNamespace();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwPathModule newDtwPathModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwRandonizerModule newDtwRandonizerModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResourceArrayModule newDtwResourceArrayModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResourceModule newDtwResourceModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwSchemaModule newDtwSchemaModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwStringArrayModule newDtwStringArrayModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwActionTransactionModule newDtwActionTransactionModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwJsonTransactionErrorModule newDtwJsonTransactionErrorModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwTransactionModule newDtwTransactionModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwJsonTreeErrorModule newDtwJsonTreeErrorModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwTreeTransactionReportModule newDtwTreeTransactionReportModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwTreeModule newDtwTreeModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwTreePartModule newDtwTreePartModule();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





long dtw_load_long_file_content_setting_error(const char *path,int *error);

long dtw_load_long_file_content(const char * path);

double dtw_load_double_file_content_setting_error(const char * path, int *error);

double dtw_load_double_file_content(const char * path);

bool dtw_load_bool_file_content_setting_error(const char * path, int *error);


bool dtw_load_bool_file_content(const char * path);


void dtw_write_long_file_content(const char *path, long value);

void dtw_write_bool_file_content(const char *path, bool value);

void dtw_write_double_file_content(const char *path,double value);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwPath * newDtwPath(const char *path);

bool DtwPath_changed(struct DtwPath *self);




void DtwPath_represent(struct DtwPath *self);



void DtwPath_free(struct DtwPath *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




char * DtwPath_get_name(DtwPath *self);

char * DtwPath_get_extension(struct DtwPath *self);


char * DtwPath_get_full_name(struct DtwPath *self);


char * DtwPath_get_dir(struct DtwPath *self);


char * DtwPath_get_path(struct DtwPath *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



int DtwPath_get_total_dirs(DtwPath *self);

char *DtwPath_get_sub_dirs_from_index(DtwPath *self, int start, int end);


int private_dtw_count_dirs_before(const char *dirs,int index);

void DtwPath_insert_dir_at_index(DtwPath *self, int index, const char *dir);

void DtwPath_remove_sub_dirs_at_index(DtwPath *self, int start, int end);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void DtwPath_insert_dir_after(DtwPath *self,const char *str,const char *dir);


void DtwPath_insert_dir_before(DtwPath *self,const char *str,const char *dir);


void DtwPath_remove_sub_dirs_at(DtwPath *self,const char *str);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void DtwPath_set_extension(struct DtwPath *self, const char *extension);


void DtwPath_set_name(struct DtwPath * self, const char * name);


void DtwPath_set_full_name(struct DtwPath * self, const char * full_name);


void DtwPath_set_dir(struct DtwPath *self, const char *dir);



void DtwPath_set_path(struct DtwPath *self, const char *target_path);


void DtwPath_add_start_dir(struct DtwPath *self, const char *start_dir);


void DtwPath_add_end_dir(struct DtwPath *self, const char *end_dir);


void DtwPath_replace_dirs(DtwPath *self,const char *str,const char *dir);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end







DtwRandonizer * newDtwRandonizer();

int DtwRandonizer_generate_num(DtwRandonizer *self,int max);

char * DtwRandonizer_generate_token(struct DtwRandonizer*self, int size);
void DtwRandonizer_free(struct DtwRandonizer *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end







DtwDatabaseSchema *private_newDtwDtatabaseSchema();

DtwSchema * privateDtwDtatabaseSchema_get_sub_schema(DtwDatabaseSchema *self,const char *name);

DtwSchema * DtwDtatabaseSchema_new_subSchema(DtwDatabaseSchema *self,const char *name);

void private_new_DtwDtatabaseSchema_free(DtwDatabaseSchema *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResource *new_DtwResource(const char *path);

DtwResource * DtwResource_sub_resource(DtwResource *self,const  char *format, ...);

DtwResource * DtwResource_sub_resource_ensuring_not_exist(DtwResource *self,const  char *format, ...);

void DtwResource_free(DtwResource *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResource * DtwResource_sub_resource_next(DtwResource *self, const char *end_path);


DtwResource * DtwResource_sub_resource_now(DtwResource *self, const char *end_path);

DtwResource * DtwResource_sub_resource_now_in_unix(DtwResource *self, const char *end_path);

DtwResource * DtwResource_sub_resource_random(DtwResource *self, const char *end_path);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void private_DtwResurce_destroy_primary_key(DtwResource *self);


void private_DtwResource_destroy_all_primary_keys(DtwResource *self);

void DtwResource_destroy(DtwResource *self);


void DtwResource_destroy_sub_resource(DtwResource *self, const char *key);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





bool DtwResource_error(DtwResource *self);

int DtwResource_get_error_code(DtwResource *self);

void DtwResource_set_encryption(DtwResource *self,DtwEncriptionInterface *encryption_interface,short mode);

char * DtwResource_get_error_message(DtwResource *self);

char * DtwResource_get_error_path(DtwResource *self);

void  DtwResource_clear_errors(DtwResource *self);


void  private_DtwResource_raise_error(DtwResource *self, int error_code, const char *format,...);

void DtwResource_rename(DtwResource *self,const char *new_name);

void DtwResource_rename_sub_resource(DtwResource *self,const char *old_name,const  char *new_name);

int DtwResource_lock(DtwResource *self);

void DtwResource_unlock(DtwResource *self);


void DtwResource_commit(DtwResource *self);

long DtwResource_size(DtwResource *self);



DtwStringArray *DtwResource_list_names(DtwResource *self);

int DtwResource_type(DtwResource *self);

bool DtwResource_is_file(DtwResource *self);


const char * DtwResource_type_in_str(DtwResource *self);

void DtwResource_represent(DtwResource *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



unsigned char *DtwResource_get_any(DtwResource *self, long *size, bool *is_binary);


unsigned char *DtwResource_get_any_from_sub_resource(DtwResource *self, long *size, bool *is_binary,const char *format,...);

unsigned char *DtwResource_get_binary(DtwResource *self, long *size);

unsigned char *DtwResource_get_binary_from_sub_resource(DtwResource *self, long *size,const char *format,...);

char *DtwResource_get_string(DtwResource *self);

char *DtwResource_get_string_from_sub_resource(DtwResource *self,const char *format,...);


long DtwResource_get_long(DtwResource *self);



long DtwResource_get_long_from_sub_resource(DtwResource *self,const char *format,...);


double DtwResource_get_double(DtwResource *self);

double DtwResource_get_double_from_sub_resource(DtwResource *self,const char *format,...);

bool DtwResource_get_bool(DtwResource *self);

bool DtwResource_get_bool_from_sub_resource(DtwResource *self,const char *format,...);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwResourceForeachProps DtwResource_create_foreach_props( void(*callback)(DtwResource *item, void *args));

void DtwResource_foreach(DtwResource *self,DtwResourceForeachProps props);

void DtwResource_schema_foreach(DtwResource *self,DtwResourceForeachProps props);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef DTW_ALLOW_CHASH


DtwResourceCHashrrayMapProps  DtwResource_create_CHashrrayMapProps(    CHash *(*callback)(DtwResource *item, void *args));

CHashArray *DtwResource_map_CHashArray(DtwResource *self,DtwResourceCHashrrayMapProps props);

CHashArray *DtwResource_schema_map_CHashArray(DtwResource *self,DtwResourceCHashrrayMapProps props);

void  *private_dtw_CHashArray_callback(DtwResource *item,void *args);

bool private_dtw_CHashArray_filtrage(DtwResource *item,void *args);

int private_dtw_CHashArray_ordenation(DtwResource *item1,DtwResource *item2,void *args);

void privateDtwResource_add_to_item_to_CHashArray_array(void* array, void *item);
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifdef DTW_ALLOW_CHASH


DtwResourceCHashObjectMapProps DtwResource_createCHashObjectMapProps(
    CHash *(*callback)(DtwResource *item, void *args),
    char *(*filtrage_callback)(DtwResource *item, void *args_filter)
);

CHash *DtwResource_map_CHashObject(DtwResource *self,DtwResourceCHashObjectMapProps props);

CHash *DtwResource_schema_map_CHashObject(DtwResource *self,DtwResourceCHashObjectMapProps props);

void  *private_dtw_CHashArray_callback(DtwResource *item,void *args);

bool private_dtw_CHashArray_filtrage(DtwResource *item,void *args);

int private_dtw_CHashArray_ordenation(DtwResource *item1,DtwResource *item2,void *args);

void privateDtwResource_add_to_item_to_CHashObject(void* object, void *item);
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResourcecJSONArrayMapProps DtwResource_create_cJSONArrayMapProps(cJSON *(*callback)(DtwResource *item, void *args));

cJSON *DtwResource_map_cJSONArray(DtwResource *self,DtwResourcecJSONArrayMapProps props);

cJSON *DtwResource_schema_map_cJSONArray(DtwResource *self,DtwResourcecJSONArrayMapProps props);

void  *private_dtw_cJSONArray_callback(DtwResource *item,void *args);

bool private_dtw_cJSONArray_filtrage(DtwResource *item,void *args);

int private_dtw_cJSONArray_ordenation(DtwResource *item1,DtwResource *item2,void *args);

void privateDtwResource_add_to_item_to_cJSONArray_array(void* array, void *item);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





DtwResourcecJSONObjectMapProps DtwResource_create_cJSONObjectProps(
    cJSON *(*callback)(DtwResource *item, void *args),
    char *(*key_provider_callback)(DtwResource *item,void *args)
);

cJSON *DtwResource_map_cJSONObject(DtwResource *self,DtwResourcecJSONObjectMapProps props);

cJSON *DtwResource_schema_map_cJSONObject(DtwResource *self,DtwResourcecJSONObjectMapProps props);

void  *private_dtw_cJSONArray_callback(DtwResource *item,void *args);

bool private_dtw_cJSONArray_filtrage(DtwResource *item,void *args);

int private_dtw_cJSONArray_ordenation(DtwResource *item1,DtwResource *item2,void *args);

void privateDtwResource_add_to_item_to_cJSONObject(void* object, void *item);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



int  private_dtwResource_compare(const void *item1,const void*item2);

DtwResourceMapProps DtwResource_create_map_props(
    void *main_array,
    void(*append)(void *main_array_arg, void *item),
    void *(*callback)(DtwResource *item, void *args)
);

void DtwResource_map(DtwResource *self,DtwResourceMapProps props);

void DtwResource_schema_map(DtwResource *self,DtwResourceMapProps props);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




void DtwResource_unload(DtwResource *self);


void DtwResource_load(DtwResource *self);

void DtwResource_load_if_not_loaded(DtwResource *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResourceArray * DtwResource_get_schema_values(DtwResource *self);

DtwResourceArray * DtwResource_sub_resources(DtwResource *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



bool private_DtwResource_its_a_pk(DtwResource *self);

void privateDtwResource_ensure_its_possible_to_sub_resource(DtwResource *self);

DtwResource * DtwResource_new_schema_insertion(DtwResource *self);

DtwResource  *DtwResource_find_by_name_id(DtwResource *self, const char *name);

DtwResource * DtwResource_find_by_primary_key_with_binary(DtwResource *self, const char *primary_key, unsigned  char *value, long size);

DtwResource * DtwResource_find_by_primary_key_with_string(DtwResource *self, const char *key, const char *value);

void DtwResource_dangerous_remove_schema_prop(DtwResource*self,const char *prop);

void DtwResource_dangerous_rename_schema_prop(DtwResource*self,const char *prop,const char *new_name);



DtwDatabaseSchema * DtwResource_newDatabaseSchema(DtwResource *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




void private_dtw_resource_set_primary_key(DtwResource *self, unsigned  char *element, long size);

void DtwResource_set_any(DtwResource *self, unsigned char *element, long size,bool is_binary);

void DtwResource_set_binary(DtwResource *self, unsigned char *element, long size);


void DtwResource_set_string(DtwResource *self,const  char *element);

void DtwResource_set_binary_sha(DtwResource *self, unsigned  char *value, long size);


void DtwResource_set_string_sha(DtwResource *self,const char *value);


void DtwResource_set_long(DtwResource *self,long element);


void DtwResource_set_double(DtwResource *self,double element);

void DtwResource_set_bool( DtwResource *self,bool element);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void DtwResource_set_any_in_sub_resource(DtwResource *self,const char *key, unsigned char *element, long size,bool is_binary);


void DtwResource_set_binary_in_sub_resource(DtwResource *self,const char *key, unsigned char *element, long size);


void DtwResource_set_binary_sha_in_sub_resource(DtwResource *self, const char *key, unsigned  char *value, long size);


void DtwResource_set_string_sha_in_sub_resource(DtwResource *self, const char *key, const char *value);

void DtwResource_set_string_in_sub_resource(DtwResource *self, const char *key, const  char *element);

void DtwResource_set_long_in_sub_resource(DtwResource *self, const char *key, long element);

void DtwResource_set_double_in_sub_resource(DtwResource *self, const char *key, double element);

void DtwResource_set_bool_in_sub_resource(DtwResource *self,const char *key, bool element);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResourceArray * newDtwResourceArray();

void DtwResourceArray_append(DtwResourceArray *self, DtwResource *element);


DtwResource * DtwResourceArray_get_by_name(DtwResourceArray *self, const char *name);




void DtwResourceArray_represent(DtwResourceArray *self);

void DtwResourceArray_free(DtwResourceArray *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




privateDtwResourceRootProps *private_newDtwResourceRootProps();


void privateDtwResourceRootProps_free(privateDtwResourceRootProps *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwSchema *private_newDtwSchema(const char *name);

DtwSchema * privateDtwSchema_get_sub_schema(DtwSchema *self,const char *name);


DtwSchema * (DtwSchema_new_subSchema)(DtwSchema *self,const char *name);

void DtwSchema_add_primary_key(DtwSchema *self,const char *name);

void private_newDtwSchema_free(DtwSchema *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



char * calc_sha_256_returning_string(const void *input, size_t len);

void calc_sha_256_from_string(uint8_t hash[SIZE_OF_SHA_256_HASH], const char *input);

int calc_sha_256_from_file(uint8_t hash[SIZE_OF_SHA_256_HASH], const char *filename);

char * calc_sha_256_from_string_returning_string(const char *input);

char * calc_sha_256_from_file_returning_string(const char *filename);

char * sha256_open_file(const char *filename, int *size);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



// End the structure with a semicolon
int  DtwStringArray_find_position( DtwStringArray *self, const char *string);


void DtwStringArray_append_getting_ownership( DtwStringArray *self, char *string);

void DtwStringArray_append( DtwStringArray *self, const char *string);

void DtwStringArray_pop( DtwStringArray *self, int position);

void DtwStringArray_merge( DtwStringArray *self,  DtwStringArray *other);
void DtwStringArray_represent( DtwStringArray *self);
void DtwStringArray_free( DtwStringArray *self);

int private_dtw_string_cmp(const void *a, const void *b);
void DtwStringArray_sort( DtwStringArray *self);

void DtwStringArray_set_value( DtwStringArray *self, int index, const char *value);

 DtwStringArray * newDtwStringArray();

char * privateDtwStringArray_append_if_not_included(DtwStringArray *self,char *value);

DtwStringArray * DtwStringArray_clone(DtwStringArray *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




char *dtw_concat_path(const char *path1, const char *path2);

DtwStringArray* private_dtw_remove_start_path(struct DtwStringArray *paths,const char *path_to_remove);

char *private_dtw_format_path(const char *path);

void private_dtw_remove_double_bars_from_string_array(struct DtwStringArray*path);

char * private_dtw_format_vaarg(const char *expresion, va_list args);

char *private_dtw_realoc_formatting(char *ptr,const char *format,...);

char *private_dtw_formatt(const char *format,...);

char * private_dtw_sub_str(const char *str, long start,long end);

bool dtw_is_string_at_point(
        const char *str,
        long str_size,
        const char *target,
        long target_size,
        long target_point
);

long  dtw_index_of_string(const char *str,const char *element);

bool dtw_starts_with(const char *string, const char *prefix);
bool dtw_ends_with(const char *string, const char *suffix);
char *private_dtw_replace_string_once(const char *target, const char *old_element, const char *new_element);
char* dtw_replace_string(const char *target, const char *old_element, const char *new_element);

char *private_dtw_change_beginning_of_string(const char *target,int start_element_to_remove_size, const char *new_element);

double private_dtw_convert_string_to_number(const char *num, bool *its_a_number);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwActionTransaction *newDtwActionTransaction();

DtwJsonTransactionError * private_dtw_validate_json_action_transaction(cJSON *json_obj);


DtwActionTransaction * private_DtwActionTransaction_parse_json_object(cJSON *json_obj);


DtwActionTransaction * DtwActionTransaction_write_any(const char *source,unsigned  char *content,long size,bool is_binary);

DtwActionTransaction * DtwActionTransaction_move_any(const char *source, const char *dest);

DtwActionTransaction * DtwActionTransaction_copy_any(const char *source, const char *dest);

DtwActionTransaction * DtwActionTransaction_move_any_merging(const char *source, const char *dest);

DtwActionTransaction * DtwActionTransaction_copy_any_merging(const char *source, const char *dest);

DtwActionTransaction * DtwActionTransaction_delete_any(const char *source);

short DtwActionTransaction_convert_action_to_integer(char *action);


const char * DtwActionTransaction_convert_action_to_string(int action);


cJSON *  private_DtwActionTransaction_create_json_object(DtwActionTransaction* self);


void DtwActionTransaction_commit(DtwActionTransaction* self,const char *path);

void DtwActionTransaction_represent(DtwActionTransaction* self);

void DtwActionTransaction_free(DtwActionTransaction* self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwJsonTransactionError * private_new_DtwJsonTransactionError( int code,const char *mensage,const  char *path);

void DtwJsonTransactionError_represent(struct DtwJsonTransactionError *self);

void DtwJsonTransactionError_prepend_path(struct DtwJsonTransactionError *self,char *path);

void DtwJsonTransactionError_free(struct DtwJsonTransactionError *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwTransaction * newDtwTransaction();

DtwTransaction * newDtwTransaction_from_json(cJSON *json_entry);

DtwJsonTransactionError * dtw_validate_json_transaction(cJSON *json_entry);

DtwJsonTransactionError * dtw_validate_json_transaction_file(const char *filename);


DtwTransaction * newDtwTransaction_from_json_file(const char *filename);

void DtwTransaction_set_encryption(DtwTransaction *self,DtwEncriptionInterface *encryption,short encryption_mode);

void DtwTransaction_remove_from_index(DtwTransaction *self,long index);

void DtwTransaction_remove_from_source(DtwTransaction *self,const char *source);

void DtwTransaction_filter(DtwTransaction *self,bool (*callback)(DtwActionTransaction *action));

void DtwTransaction_append_action(struct DtwTransaction *self,struct DtwActionTransaction  *action);

void DtwTransaction_write_any(struct DtwTransaction *self,const char *path,unsigned char *content, long size,bool is_binary);

void DtwTransaction_write_string(struct DtwTransaction *self,const char *path,const char *content);

void DtwTransaction_write_long(struct DtwTransaction *self,const char *path,long value);

void DtwTransaction_write_bool(struct DtwTransaction *self,const char *path,bool value);

void DtwTransaction_write_double(struct DtwTransaction *self,const char *path,double value);

void DtwTransaction_move_any(struct DtwTransaction *self,const char *source,const char *dest);

void DtwTransaction_move_any_merging(struct DtwTransaction *self,const char *source,const char *dest);

void DtwTransaction_copy_any_merging(struct DtwTransaction *self,const char *source,const char *dest);

void DtwTransaction_copy_any(struct DtwTransaction *self,const char *source,const char *dest);

void DtwTransaction_delete_any(struct DtwTransaction *self,const char *source);

cJSON * DtwTransaction_dumps_to_json(struct DtwTransaction *self);

void DtwTransaction_dumps_to_json_file(struct DtwTransaction *self,const char *filename);

void DtwTransaction_commit(struct DtwTransaction *self,const char *path);

void DtwTransaction_represent(struct DtwTransaction *self);


void DtwTransaction_free(struct DtwTransaction *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





DtwJsonTreeError * newDtwJsonError();

DtwJsonTreeError * DtwJsonTreeError_validate_json_tree_by_cJSON(cJSON *json_tree);

DtwJsonTreeError * DtwJsonTreeError_validate_json_tree_by_content(const char *content);

void DtwJsonTreeError_represent(struct DtwJsonTreeError *self);

void DtwJsonTreeError_free(struct DtwJsonTreeError *self);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



struct DtwTreeTransactionReport * newDtwTreeTransactionReport();
void  DtwTreeTransactionReport_represent(struct DtwTreeTransactionReport *report);
void  DtwTreeTransactionReport_free(struct DtwTreeTransactionReport *report);
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






 DtwTree *DtwTree_get_sub_tree(
     DtwTree *self,
    const char *path,
    bool copy_content
);

 DtwTreePart *DtwTree_find_tree_part_by_function(
     DtwTree *self,
     bool (*caller)(  DtwTreePart *part,void *args),
     void *args
 );


 DtwTree *DtwTree_map(DtwTree *self, DtwTreePart* (*caller)( DtwTreePart *part));


 DtwTree *DtwTree_filter(DtwTree *self,bool (*caller)(struct  DtwTreePart *part));


 DtwTreePart *DtwTree_find_tree_part_by_name( DtwTree *self, const char *name);
 DtwTreePart *DtwTree_find_tree_part_by_path( DtwTree *self, const char *path);

//listages
 DtwStringArray *DtwTree_list_files( DtwTree *self, const char *path,bool concat_path);

 DtwStringArray *DtwTree_list_dirs( DtwTree *self, const char *path,bool concat_path);

 DtwStringArray *DtwTree_list_all( DtwTree *self, const char *path,bool concat_path);

 DtwStringArray *DtwTree_list_files_recursively( DtwTree *self, const char *path,bool concat_path);

 DtwStringArray *DtwTree_list_dirs_recursively( DtwTree *self, const char *path,bool concat_path);

 DtwStringArray *DtwTree_list_all_recursively( DtwTree *self, const char *path,bool concat_path);


void DtwTree_remove_tree_part( DtwTree *self, int position);

void DtwTree_add_tree_part_copy( DtwTree *self,  DtwTreePart *tree_part);

void DtwTree_add_tree_part_getting_onwership( DtwTree *self,  DtwTreePart *tree_part);

void DtwTree_add_tree_part_referencing( DtwTree *self,  DtwTreePart *tree_part);

void DtwTree_free( DtwTree *self);
void DtwTree_represent( DtwTree *self);

void DtwTree_add_tree_parts_from_string_array(DtwTree *self,DtwStringArray *paths,DtwTreeProps props);

void DtwTree_add_tree_from_hardware(DtwTree *self,const char *path,DtwTreeProps props);

 DtwTreeTransactionReport * DtwTree_create_report( DtwTree *self);



void DtwTree_insecure_hardware_remove_tree( DtwTree *self);

void DtwTree_insecure_hardware_write_tree( DtwTree *self);

void DtwTree_hardware_commit_tree( DtwTree *self);

bool DtwTree_loads_json_tree( DtwTree *self, const char *content);

bool DtwTree_loads_json_tree_from_file( DtwTree *self, const char *path);

char * DtwTree_dumps_tree_json(DtwTree *self,DtwTreeProps  props);

void DtwTree_dumps_tree_json_to_file(DtwTree *self,const char *path,DtwTreeProps  props);

  DtwTree * newDtwTree();

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




void private_DtwTreePart_set_last_modification(DtwTreePart *self,long last_modification);

char *DtwTreePart_get_content_string_by_reference( DtwTreePart *self);
unsigned char *DtwTreePart_get_content_binary_by_reference( DtwTreePart *self);
char *DtwTreePart_get_content_sha( DtwTreePart *self);
void DtwTreePart_set_any_content( DtwTreePart *self, unsigned char *content, long content_size, bool is_binary);
void DtwTreePart_set_string_content( DtwTreePart *self, const char *content);
void DtwTreePart_set_binary_content( DtwTreePart *self, unsigned char *content, long content_size);
void DtwTreePart_load_content_from_hardware( DtwTreePart *self);
void DtwTreePart_free_content( DtwTreePart *self);
void DtwTreePart_represent( DtwTreePart *self);

bool DtwTreePart_hardware_remove( DtwTreePart *self,int transaction);
bool DtwTreePart_hardware_write( DtwTreePart *self,int transaction);
bool DtwTreePart_hardware_modify( DtwTreePart *self,int transaction);


bool DtwTreePart_hardware_commit(struct DtwTreePart *self);

void DtwTreePart_free(struct DtwTreePart *self);
struct DtwTreePart * DtwTreePart_self_copy(struct DtwTreePart *self);

struct DtwTreePart * newDtwTreePart(const char *path, DtwTreeProps props);
struct DtwTreePart * newDtwTreePartEmpty(const char *path);
struct DtwTreePart * newDtwTreePartLoading(const char *path);

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwTreeProps DtwTreeProps_format_props(DtwTreeProps props);

#endif

#ifndef doTHeWorld_fdefine
#define doTHeWorld_fdefine
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

char *dtw_base64_encode(unsigned char *data, long input_length) {
    // Base64 character table
    static const char base64_chars[] = 
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    
    // Parameter validation
    if (data == NULL || input_length < 0) {
        return NULL;
    }
    
    // Calculate required output size
    size_t output_length = 4 * ((input_length + 2) / 3);
    
    // Allocate memory for output string (including space for null terminator)
    char *encoded_data = (char *)malloc(output_length + 1);
    if (encoded_data == NULL) {
        return NULL; // Memory allocation failure
    }
    
    // Encoding process
    size_t i = 0;
    size_t j = 0;
    unsigned int triple;
    
    // Process full triplets of bytes (3 bytes at a time)
    for (i = 0, j = 0; i + 2 < input_length; i += 3) {
        triple = (data[i] << 16) | (data[i + 1] << 8) | data[i + 2];
        
        encoded_data[j++] = base64_chars[(triple >> 18) & 0x3F];
        encoded_data[j++] = base64_chars[(triple >> 12) & 0x3F];
        encoded_data[j++] = base64_chars[(triple >> 6) & 0x3F];
        encoded_data[j++] = base64_chars[triple & 0x3F];
    }
    
    // Handle remaining bytes with padding
    if (i < input_length) {
        // One or two bytes remain
        if (i + 1 < input_length) {
            // Two bytes remain
            triple = (data[i] << 16) | (data[i + 1] << 8);
            
            encoded_data[j++] = base64_chars[(triple >> 18) & 0x3F];
            encoded_data[j++] = base64_chars[(triple >> 12) & 0x3F];
            encoded_data[j++] = base64_chars[(triple >> 6) & 0x3F];
            encoded_data[j++] = '=';
        } else {
            // One byte remains
            triple = data[i] << 16;
            
            encoded_data[j++] = base64_chars[(triple >> 18) & 0x3F];
            encoded_data[j++] = base64_chars[(triple >> 12) & 0x3F];
            encoded_data[j++] = '=';
            encoded_data[j++] = '=';
        }
    }
    
    // Add null terminator
    encoded_data[j] = '\0';
    
    return encoded_data;
}


unsigned char *dtw_base64_decode(const char *data, long *output_length) {
    // Base64 decoding table (value for each character)
    static const unsigned char decoding_table[256] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63,
        52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 0, 0, 0, 0, 0, 0,
        0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
        15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0, 0, 0, 0, 0,
        0, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    
    // Parameter validation
    if (data == NULL || output_length == NULL) {
        return NULL;
    }
    
    long input_length = strlen(data);
    
    // Check if length is a multiple of 4
    if (input_length % 4 != 0) {
        return NULL;
    }
    
    // Calculate output size
    *output_length = input_length / 4 * 3;
    
    // Adjust size if padding is present
    if (input_length > 0) {
        if (data[input_length - 1] == '=') (*output_length)--;
        if (input_length >= 2 && data[input_length - 2] == '=') (*output_length)--;
    }
    
    // Allocate memory for decoded data
    unsigned char *decoded_data = (unsigned char*)malloc(*output_length + 1);
    if (decoded_data == NULL) {
        return NULL; // Memory allocation failure
    }
    
    // Decoding process
    size_t i = 0;
    size_t j = 0;
    
    while (i < input_length) {
        // Get 4 characters from Base64 string
        unsigned char a = data[i] == '=' ? 0 : decoding_table[(unsigned char)data[i]]; i++;
        unsigned char b = data[i] == '=' ? 0 : decoding_table[(unsigned char)data[i]]; i++;
        unsigned char c = data[i] == '=' ? 0 : decoding_table[(unsigned char)data[i]]; i++;
        unsigned char d = data[i] == '=' ? 0 : decoding_table[(unsigned char)data[i]]; i++;
        
        // Combine 4 groups of 6 bits into 3 bytes
        unsigned int triple = (a << 18) | (b << 12) | (c << 6) | d;
        
        if (j < *output_length) decoded_data[j++] = (triple >> 16) & 0xFF;
        if (j < *output_length) decoded_data[j++] = (triple >> 8) & 0xFF;
        if (j < *output_length) decoded_data[j++] = triple & 0xFF;
    }
    
    // Add null terminator
    decoded_data[*output_length] = '\0';
    
    return decoded_data;
}



char *dtw_convert_binary_file_to_base64(const char *path){
     long size;
     unsigned char *data  = dtw_load_binary_content(path, &size);
    char *b64   = dtw_base64_encode(data, size);
    free(data);
    return b64;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void privteDtwAES_CBC_EncryptionInterface_encrypt_buffer(privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length){
    AES_CBC_encrypt_buffer(&self->ctx, buf, length);
    AES_ctx_set_iv(&self->ctx,self->iv);
    
}

void privteDtwAES_CBC_EncryptionInterface_decrypt_buffer(privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length){
    AES_CBC_decrypt_buffer(&self->ctx, buf, length);
    AES_ctx_set_iv(&self->ctx,self->iv);
    
}

DtwEncriptionInterface *newDtwAES_CBC_EncryptionInterface(const uint8_t* key,int key_size,const uint8_t *iv, int iv_size){
    

    if(iv_size > 16){
        return NULL;
    }

    DtwEncriptionInterface *obj = newDtwAES_RAW_EncryptionInterface(key,key_size);
    if(obj == NULL){
        return NULL;
    }

    privateDtwAES_RAW_EncryptionInterface *self = (privateDtwAES_RAW_EncryptionInterface *)obj->obj;
  
    if(iv_size > 0){
        memcpy(self->iv,iv,iv_size);
        AES_init_ctx_iv(&self->ctx,self->key,self->iv); 
    }
    else{
        AES_init_ctx_iv(&self->ctx,self->key,self->iv); 
    }


    self->encrypt_buffer = privteDtwAES_CBC_EncryptionInterface_encrypt_buffer;
    self->decrypt_buffer = privteDtwAES_CBC_EncryptionInterface_decrypt_buffer;
    return obj;
}
DtwEncriptionInterface *newDtwAES_CBC_EncryptionInterface_str(const char* key,const char *iv){
    if (iv){
    return newDtwAES_CBC_EncryptionInterface((uint8_t*)key,strlen(key),(uint8_t*)iv,strlen(iv));
    }
    return newDtwAES_CBC_EncryptionInterface((uint8_t*)key,strlen(key),NULL,0);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwEncriptionInterface *newDtwAES_Custom_CBC_v1_interface(const char *key){
    if(key == NULL){
        return NULL;
    }
    DtwHash *hash = newDtwHash();
    DtwHash_digest_string(hash,"isiojerjwj92392-10i4i5i3954ii2323-2");
    DtwHash_digest_string(hash,key);
    char *sha1 = strdup(hash->hash);
    DtwHash_digest_string(hash,"is439i023203bjgffgfokk,fiwjj2342124432");
    char *sha2 = strdup(hash->hash);
    DtwEncriptionInterface *self = newDtwAES_CBC_EncryptionInterface((uint8_t*)sha1,16,(uint8_t*)sha2,16);
    free(sha1);
    free(sha2);
    DtwHash_free(hash);
    return self;

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

void privteDtwAES_ECB_EncryptionInterface_encrypt_buffer(privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length){
    
    for(int i = 0; i < length; i+=16){
        AES_ECB_encrypt(&self->ctx, buf+i);
    }
}

void privteDtwAES_ECB_EncryptionInterface_decrypt_buffer(privateDtwAES_RAW_EncryptionInterface *self,uint8_t* buf, uint32_t length){
    for(int i = 0; i < length; i+=16){
        AES_ECB_decrypt(&self->ctx, buf+i);
    }
}

DtwEncriptionInterface *newDtwAES_ECB_EncryptionInterface(const uint8_t* key,int key_size){
    DtwEncriptionInterface *obj = newDtwAES_RAW_EncryptionInterface(key,key_size);
    if(obj == NULL){
        return NULL;
    }
    
   privateDtwAES_RAW_EncryptionInterface *self = (privateDtwAES_RAW_EncryptionInterface *)obj->obj;
    AES_init_ctx(&self->ctx,key);
   self->encrypt_buffer = privteDtwAES_ECB_EncryptionInterface_encrypt_buffer;
   self->decrypt_buffer = privteDtwAES_ECB_EncryptionInterface_decrypt_buffer;
   return obj;
}

DtwEncriptionInterface *newDtwAES_ECB_EncryptionInterface_str(const char* key){
    return newDtwAES_ECB_EncryptionInterface((uint8_t*)key,strlen(key));
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


unsigned char * privateDtwAES_RAW_EncryptionInterface_encrypt_buffer(void *obj, unsigned char *value,long entry_size,long *out_size){

    privateDtwAES_RAW_EncryptionInterface *self = (privateDtwAES_RAW_EncryptionInterface *)obj;
    long size = entry_size;

    *out_size  =  size + (16 - size % 16);
  
    unsigned char *result = (unsigned char*)malloc( *out_size   + 2);
    memcpy(result,value,size);
    bool is16multiple = size % 16 == 0;
        //means the block its complete and we need to add a full extra block filled with 16 bytes
    if(is16multiple){
        printf("$out_size %ld\n",*out_size);        
        memset(result+size,16,16);
    }
    //means the last block is not complete and we need to add the missing bytes
    //the total of empty bytes that we dont sent 
    if(!is16multiple){

        int missing_send_bytes_to_last_block =  *out_size   - size;
        memset(result+size,missing_send_bytes_to_last_block,missing_send_bytes_to_last_block);
    }

    self->encrypt_buffer(self, ( uint8_t*)result, *out_size);
    return result;
}

unsigned char *privateDtwAES_RAW_EncryptionInterface_decrypt_buffer(void *obj, unsigned char *encrypted_value,long entry_size,long *out_size){
    privateDtwAES_RAW_EncryptionInterface *self = (privateDtwAES_RAW_EncryptionInterface *)obj;
    long size = entry_size;
    
    bool is16multiple = size % 16 == 0;
    if(!is16multiple){
        *out_size = 0;        
        return NULL;
    }
    
    unsigned char *result = (unsigned char *)calloc(size + 2,sizeof(unsigned char));
    memcpy(result,encrypted_value,size);
    self->decrypt_buffer(self, ( uint8_t*)result,size);
    int remaning_bytes = result[size-1];
    *out_size = size - remaning_bytes;
    return result;
}

void  privateDtwAES_RAW_EncryptionInterface_free_obj(void *obj){
    privateDtwAES_RAW_EncryptionInterface *self = (privateDtwAES_RAW_EncryptionInterface *)obj;
    free(self);
}


DtwEncriptionInterface *newDtwAES_RAW_EncryptionInterface(const uint8_t* key,int key_size){
   
    if(key_size == 0){
        return NULL;
    }
    if(key_size > 16){
        return NULL;
    }
    privateDtwAES_RAW_EncryptionInterface *self = (privateDtwAES_RAW_EncryptionInterface *)malloc(sizeof(privateDtwAES_RAW_EncryptionInterface));
    *self = (privateDtwAES_RAW_EncryptionInterface){0};
    memcpy(self->key,key,key_size);

    return newDtwEncriptionInterface_raw(self,privateDtwAES_RAW_EncryptionInterface_encrypt_buffer,privateDtwAES_RAW_EncryptionInterface_decrypt_buffer,privateDtwAES_RAW_EncryptionInterface_free_obj);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


char *DtwEncriptionInterface_encrypt_buffer_b64(DtwEncriptionInterface *self, unsigned char *value,long size){
    long encrypted_size = 0;
    unsigned char * encrypted = DtwEncriptionInterface_encrypt_buffer(self,value,size,&encrypted_size);
    if(encrypted == NULL){
        return NULL;
    }
    char *b64 = dtw_base64_encode(encrypted,encrypted_size);
    free(encrypted);
    return b64;
}

unsigned char *DtwEncriptionInterface_decrypt_buffer_b64(DtwEncriptionInterface *self, const   char *encrypted_value,long *out_size,bool *is_binary){
    
    long b64_out_size;
    unsigned char *decoded = dtw_base64_decode(encrypted_value,&b64_out_size);
    if(decoded == NULL){
        *is_binary = false;
        *out_size = 0;
        return NULL;
    }
    unsigned char * decrypted =  DtwEncriptionInterface_decrypt_buffer(self,decoded,b64_out_size,out_size,is_binary);
    free(decoded);
    return decrypted;
}


bool DtwEncriptionInterface_write_any_content_b64(DtwEncriptionInterface *self,const char *file_name,unsigned char *value,long size){
    char *b64 = DtwEncriptionInterface_encrypt_buffer_b64(self,(unsigned char *)value,size);
    if(b64 == NULL){
        return false;
    }
    bool result = dtw_write_string_file_content(file_name,b64);
    free(b64);
    return result;
}



bool DtwEncriptionInterface_write_string_file_content_b64(DtwEncriptionInterface *self,const char *file_name,const char *value){
    return DtwEncriptionInterface_write_any_content_b64(self,file_name,(unsigned char *)value,strlen(value));
}



unsigned char *DtwEncriptionInterface_load_any_content_b64(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary){
    char *loaded = dtw_load_string_file_content(file_name);
    if(loaded == NULL){
        *is_binary = false;
        *out_size = 0;
        return NULL;
    }
    unsigned char *decrypted = DtwEncriptionInterface_decrypt_buffer_b64(self,(const char *)loaded,out_size,is_binary);
    free(loaded);
    return decrypted;
}




char *DtwEncriptionInterface_load_string_file_content_b64(DtwEncriptionInterface *self,const char *file_name){
    long size;
    bool is_binary;
    unsigned char *content = DtwEncriptionInterface_load_any_content_b64(self,file_name,&size,&is_binary);

    if(content == NULL){
        return NULL;
    }
    if(is_binary){
        free(content);
        return NULL;
    }
    return (char*)content;
}


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


DtwEncriptionInterface *newDtwEncriptionInterface_raw(void *obj,    unsigned char *(*encrypt_buffer)(void *obj, unsigned char *value,long size,long *out_size), unsigned char *(*decrypt_buffer)(void *obj, unsigned char *encrypted_value,long size,long *out_size), void (*free_obj)(void *obj)){
    DtwEncriptionInterface *self = (DtwEncriptionInterface *)malloc(sizeof(DtwEncriptionInterface));
    self->obj = obj;
    self->encrypt_buffer = encrypt_buffer;
    self->decrypt_buffer = decrypt_buffer;
    self->free_obj = free_obj;
    return self;
}

unsigned char *DtwEncriptionInterface_encrypt_buffer(DtwEncriptionInterface *self, unsigned char *value,long size,long *out_size){
    *out_size = 0;
    unsigned char *encrypted = self->encrypt_buffer(self->obj,value,size,out_size);
    encrypted[*out_size] = '\0';
    return encrypted;
}


unsigned char *DtwEncriptionInterface_decrypt_buffer(DtwEncriptionInterface *self, unsigned char *encrypted_value,long size,long *out_size,bool *is_binary){
    *is_binary = false;
    *out_size = 0;
    unsigned char *content =  self->decrypt_buffer(self->obj,encrypted_value,size,out_size);
    if(content == NULL){
        return NULL;
    }
    content[*out_size] = '\0';
    for(int i= 0; i < *out_size; i++){
        if(content[i] == '\0'){
            *is_binary = true;
            break;
        }    
    }
    return content;
}

void DtwEncriptionInterface_free(DtwEncriptionInterface *self){
    self->free_obj(self->obj);
    free(self);
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



bool DtwEncriptionInterface_write_any_content(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size){
    long encrypted_size = 0;
    unsigned char * encrypted = DtwEncriptionInterface_encrypt_buffer(self,(unsigned char *)value,size,&encrypted_size);
    if(encrypted == NULL){
        return false;
    }
    bool result = dtw_write_any_content(file_name,(unsigned char *)encrypted,encrypted_size);
    free(encrypted);
    return result;
}


bool DtwEncriptionInterface_write_string_file_content(DtwEncriptionInterface *self,const char *file_name,const char *value){
    return DtwEncriptionInterface_write_any_content(self,file_name,(unsigned char *)value,strlen(value));
}


unsigned char *DtwEncriptionInterface_load_any_content(DtwEncriptionInterface *self,const char *file_name,long *out_size,bool *is_binary){
    
    long raw_size;
    unsigned char *loaded = dtw_load_binary_content(file_name,&raw_size);
    if(loaded == NULL){
        *is_binary = false;
        *out_size = 0;
        return NULL;
    }
    unsigned char *decrypted = DtwEncriptionInterface_decrypt_buffer(self,loaded,raw_size,out_size,is_binary);
    free(loaded);
    return decrypted;
}




char *DtwEncriptionInterface_load_string_file_content(DtwEncriptionInterface *self,const char *file_name){
    bool is_binary;
    long out_size;
    unsigned char *loaded = DtwEncriptionInterface_load_any_content(self,file_name,&out_size,&is_binary);
    if(loaded == NULL){
        return NULL;
    }
    if(is_binary){
        free(loaded);
        return NULL;
    }
    
    return (char *)loaded;
}


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





char *DtwEncriptionInterface_encrypt_buffer_hex(DtwEncriptionInterface *self, unsigned char *value,long size){
    
    long encrypted_size;
    unsigned char *encrypted = DtwEncriptionInterface_encrypt_buffer(self,value,size,&encrypted_size);
    if(encrypted == NULL){
        return NULL;
    }
    char *hex = dtw_convert_binary_to_hex(encrypted,encrypted_size);
    free(encrypted);

    return hex;
}



unsigned char *DtwEncriptionInterface_decrypt_buffer_hex(DtwEncriptionInterface *self, const   char *encrypted_value,long *out_size,bool *is_binary){
    long hex_size;
    unsigned char *binary = dtw_convert_hex_to_binary(encrypted_value,&hex_size);
    unsigned char *decrypted = DtwEncriptionInterface_decrypt_buffer(self,binary,hex_size,out_size,is_binary);
    free(binary);
    return decrypted;
}


bool DtwEncriptionInterface_write_any_content_hex(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size){

    char *data = DtwEncriptionInterface_encrypt_buffer_hex(self,value,size);
    if(data == NULL){
        return false;
    }
    bool result = dtw_write_string_file_content(file_name,data);
    free(data);
    return result;
}

bool DtwEncriptionInterface_write_string_file_content_hex(DtwEncriptionInterface *self,const char *file_name,const char *value){
    return DtwEncriptionInterface_write_any_content_hex(self,file_name,(unsigned char *)value,strlen(value));
}

unsigned char *DtwEncriptionInterface_load_any_content_hex(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary){
    char *data = dtw_load_string_file_content(file_name);
    if(data == NULL){
        *is_binary = false;
        *out_size = 0;
        return NULL;
    }

    unsigned char *decrypted = DtwEncriptionInterface_decrypt_buffer_hex(self,data,out_size,is_binary);
    free(data);
    return decrypted;
}

char *DtwEncriptionInterface_load_string_file_content_hex(DtwEncriptionInterface *self,const char *file_name){
    long size;
    bool is_binary;
    unsigned char *decrypted = DtwEncriptionInterface_load_any_content_hex(self,file_name,&size,&is_binary);
    if(is_binary){
        free(decrypted);
        return NULL;
    }
    return (char *)decrypted;
}


//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


bool private_DtwEncriptionInterface_write_any_content_custom_mode(DtwEncriptionInterface *self,const char *file_name,unsigned char  *value,long size,short mode){
    if(mode == DTW_RAW_MODE){
        return DtwEncriptionInterface_write_any_content(self,file_name,value,size);
    }
    if(mode == DTW_B64_MODE){
        return DtwEncriptionInterface_write_any_content_b64(self,file_name,value,size);
    }
    if(mode == DTW_HEX_MODE){
        return DtwEncriptionInterface_write_any_content_hex(self,file_name,value,size);
    }
    return false;
}


unsigned char *private_DtwEncriptionInterface_load_any_content_custom_mode(DtwEncriptionInterface *self,const  char *file_name,long *out_size,bool *is_binary,short mode){
    if(mode == DTW_RAW_MODE){
        return DtwEncriptionInterface_load_any_content(self,file_name,out_size,is_binary);
    }
    if(mode == DTW_B64_MODE){
        return DtwEncriptionInterface_load_any_content_b64(self,file_name,out_size,is_binary);
    }
    if(mode == DTW_HEX_MODE){
        return DtwEncriptionInterface_load_any_content_hex(self,file_name,out_size,is_binary);
    }
    *is_binary = false;
    *out_size = 0;
    return NULL;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



char * dtw_generate_sha_from_file(const char *path){
    return calc_sha_256_from_file_returning_string(path);
}

char * dtw_generate_sha_from_any(void *anything , long size){
    if(anything ==NULL) {
        return NULL;
    }
    return calc_sha_256_returning_string(anything,size);
}

char * dtw_generate_sha_from_string(const char *string){
    if(string == NULL) {
        return  NULL;
    }
    return calc_sha_256_from_string_returning_string(string);
}


long int dtw_get_entity_last_motification_in_unix(const char *path){
    struct stat attr;
    if(stat(path, &attr) != 0) {
        return -1;
    }

    time_t last_modification_in_unix = attr.st_mtime;

    return last_modification_in_unix;
}

char * dtw_convert_unix_time_to_string(long int unix_time){
    struct tm * timeinfo;
    #ifdef _WIN32
        //get timeinfo from windows
        time_t rawtime = unix_time;
        timeinfo = localtime(&rawtime);
    #else
        timeinfo = localtime(&unix_time);
    #endif
    char *time_string = (char *)malloc(100);
    strftime(time_string, 100, "%Y-%m-%d %H:%M:%S", timeinfo);
    return time_string;
}

char * dtw_get_entity_last_motification_in_string(const char *path){
    long int last_modification_in_unix = dtw_get_entity_last_motification_in_unix(path);
    char *last_modification_in_string = dtw_convert_unix_time_to_string(last_modification_in_unix);
    return last_modification_in_string;
}

const char * private_dtw_convert_action_to_string(short action){
    switch (action){
        case DTW_REMOVE:
            return "remove";
        case DTW_WRITE:
            return "write";
        case DTW_MODIFY:
            return "modify";
    }
    return NULL;
}

short private_dtw_convert_string_to_action(const char *action){
    if(strcmp(action,"remove") == 0){
        return DTW_REMOVE;
    }
    if(strcmp(action,"write") == 0){
        return DTW_WRITE;
    }
    if(strcmp(action,"modify") == 0){
        return DTW_MODIFY;
    }
    return -1;
}

void private_dtw_add_end_bar_to_dirs_string_array(struct DtwStringArray * dirs){
    for(int i = 0; i < dirs->size; i++){

        if(!dtw_ends_with(dirs->strings[i], "/") || !dtw_ends_with(dirs->strings[i],"\\")){
            char *formated_dir =  (char*)malloc(strlen(dirs->strings[i]) + 3);
            sprintf(formated_dir,"%s/",dirs->strings[i]);
            DtwStringArray_set_value(dirs, i, formated_dir);
            free(formated_dir);
        }


    }
}



struct DtwStringArray* private_dtw_remove_start_path(struct DtwStringArray *paths,const char *rm_path){

    char *path_to_remove = dtw_replace_string(rm_path,"//","/");

    int size_to_remove = strlen(path_to_remove) +1;

    if(dtw_ends_with(path_to_remove,"/")){
        size_to_remove-=1;
    }


    struct DtwStringArray *new_array = newDtwStringArray();

    for(int i =0; i < paths->size; i++){

        char *current_path_string = paths->strings[i];
        int current_path_string_size = strlen(current_path_string);

        char *new_string = (char*)malloc(current_path_string_size +2);
        new_string[current_path_string_size] =0;

        strcpy(new_string,current_path_string);
        memmove(
                new_string,
                current_path_string+size_to_remove,
                strlen(current_path_string) - size_to_remove +1
        );
        if(strcmp(new_string,"/") == 0  || strcmp(new_string,"") == 0){
            free(new_string);
            continue;
        }

        DtwStringArray_append(new_array, new_string);
        free(new_string);

    }
    free(path_to_remove);
    return new_array;
}


long dtw_get_time(){
#ifdef DTW_DEBUG_TIME
    return 0;
#endif
    return time(NULL);
}
long private_dtw_convert_index(long index,long size){

    long converted_index = index;

    if(converted_index < 0){
        converted_index = size + converted_index;
    }

    if(converted_index >= size){
       return -1;
    }

    if(converted_index < 0){
        return -1;
    }

    return converted_index;
}

char *dtw_convert_binary_to_hex(unsigned char *value,long size){
    char *hex = (char *)malloc(size * 2 + 1);
    for(int i = 0; i < size; i++){
        sprintf(hex + i * 2, "%02x", value[i]);
    }
    hex[size * 2] = 0;
    return hex;
}


unsigned char *dtw_convert_hex_to_binary(const char *value,long *out_size){
    int len = strlen(value);
    if(len % 2 != 0){
        return NULL;
    }
    *out_size = len / 2;
    unsigned char *binary = (unsigned char *)malloc(*out_size);
    for(int i = 0; i < *out_size; i++){
        sscanf(value + i * 2, "%2hhx", &binary[i]);
    }
    return binary;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end








DtwHash * newDtwHash(){
    DtwHash *self = (DtwHash*) malloc(sizeof(DtwHash));
    self->hash = dtw_generate_sha_from_string("");

    return self;
}

bool  DtwHash_digest_any(DtwHash *self,unsigned char *content,long size){
    if(content == NULL){
        return false;
    }
    
    char *generated = dtw_generate_sha_from_any(content,size);
    char result[300] ={0};
    sprintf(result,"%s%s",self->hash,generated);
    free(generated);
    free(self->hash);
    self->hash = dtw_generate_sha_from_string(result);
    return true;
}

bool  DtwHash_digest_string(DtwHash * self, const char *content){
    return DtwHash_digest_any(self,(unsigned char *)content, (long)strlen(content));
}

void DtwHash_digest_long(DtwHash * self,long content){
    char formated[20] ={0};
    sprintf(formated,"%ld",content);
    DtwHash_digest_string(self,formated);
}

void DtwHash_digest_double(DtwHash * self,double content){
    char formated[20] ={0};
    sprintf(formated,"%lf",content);
    DtwHash_digest_string(self,formated);
}

void DtwHash_digest_bool(DtwHash * self,bool content){
    char formated[20] ={0};
    sprintf(formated,"%d",(bool)content);
    DtwHash_digest_string(self,formated);
}

bool  DtwHash_digest_file(DtwHash * self, const char *path){

    long size;
    unsigned  char *content = dtw_load_binary_content(path,&size);
    if(!content){
        return false;
    }
    DtwHash_digest_any(self,content,size);
    free(content);
    return true;
}

bool  DtwHash_digest_entity_last_modification(DtwHash * self, const char *path){
    long last_modification = dtw_get_entity_last_motification_in_unix(path);
    if(last_modification == -1){
        return false;
    }
    DtwHash_digest_long(self,last_modification);
    return true;
}


bool  DtwHash_digest_string_array(DtwHash *self,DtwStringArray *element){
    if(element->size == 0){
        return false;
    }
    DtwStringArray  *clone = DtwStringArray_clone(element);
    DtwStringArray_sort(clone);

    for(int i =0 ; i < clone->size; i++){
        DtwHash_digest_string(self,clone->strings[i]);
    }
    DtwStringArray_free(clone);
    return  true;
}

bool  DtwHash_digest_string_array_last_modifications(DtwHash *self,DtwStringArray *element){
    if(element->size == 0){
        return false;
    }
    DtwStringArray  *clone = DtwStringArray_clone(element);
    DtwStringArray_sort(clone);
    for(int i =0 ; i < clone->size; i++){
        DtwHash_digest_entity_last_modification(self, clone->strings[i]);
    }
    DtwStringArray_free(clone);
    return true;
}

bool DtwHash_digest_string_array_last_modifications_adding_name(DtwHash *self,DtwStringArray *element){
    if(element->size == 0){
        return false;
    }
    DtwStringArray  *clone = DtwStringArray_clone(element);
    DtwStringArray_sort(clone);
    for(int i =0 ; i < clone->size; i++){
        DtwHash_digest_string(self,clone->strings[i]);
        DtwHash_digest_entity_last_modification(self, clone->strings[i]);
    }
    DtwStringArray_free(clone);
    return true;
}


bool DtwHash_digest_string_array_content(DtwHash *self,DtwStringArray *element){
    if(element->size == 0){
        return false;
    }
    DtwStringArray  *clone = DtwStringArray_clone(element);
    DtwStringArray_sort(clone);
    for(int i =0 ; i < clone->size; i++){
        DtwHash_digest_file(self,clone->strings[i]);
    }
    DtwStringArray_free(clone);
    return true;
}

bool DtwHash_digest_string_array_content_adding_name(DtwHash *self,DtwStringArray *element){
    if(element->size == 0){
        return false;
    }
    DtwStringArray  *clone = DtwStringArray_clone(element);
    DtwStringArray_sort(clone);
    for(int i =0; i < clone->size; i++){
        DtwHash_digest_string(self,clone->strings[i]);
        DtwHash_digest_file(self,clone->strings[i]);
    }
    DtwStringArray_free(clone);
    return true;
}


bool DtwHash_digest_folder_by_last_modification(DtwHash *self,const char *path){
    DtwStringArray  *folder = dtw_list_all_recursively(path,DTW_NOT_CONCAT_PATH);
    if(folder->size == 0){
        DtwStringArray_free(folder);
        return false;
    }
    DtwStringArray_sort(folder);
    for(int i =0; i < folder->size; i++){
        DtwHash_digest_string(self,folder->strings[i]);
        char *formated_path = dtw_concat_path(path,folder->strings[i]);

        DtwHash_digest_entity_last_modification(self, formated_path);
        free(formated_path);
    }
    DtwStringArray_free(folder);
    return true;
}

bool DtwHash_digest_folder_by_content(DtwHash *self,const char *path){

    DtwStringArray  *folder = dtw_list_all_recursively(path,DTW_NOT_CONCAT_PATH);
    if(folder->size == 0){
        DtwStringArray_free(folder);
        return false;
    }
    DtwStringArray_sort(folder);
    for(int i =0; i < folder->size; i++){
        DtwHash_digest_string(self,folder->strings[i]);
        char *formated_path = dtw_concat_path(path,folder->strings[i]);
        DtwHash_digest_file(self,formated_path);
        free(formated_path);
    }
    DtwStringArray_free(folder);
    return true;
}

void  DtwHash_free(DtwHash *self){
    free(self->hash);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






void dtw_create_dir_recursively(const char *path){

    int entity =dtw_entity_type(path);

    if(entity == DTW_FOLDER_TYPE){
        return;
    }

    if(entity == DTW_FILE_TYPE){
        remove(path);
    }


    long size_path = strlen(path);
    for(int i=0;i <  size_path;i++){
        if((path[i] == '\\'  || path[i] == '/' )  &&( i != size_path - 1)){

            char * current_path = (char*)malloc(i + 1);
            current_path[i] = '\0';
            strncpy(current_path,path,i);

            if(dtw_entity_type(current_path) == DTW_FILE_TYPE){
                remove(current_path);
            }

            dtw_create_dir(current_path);

            free(current_path);
        }
    }

    dtw_create_dir(path);
}
char *dtw_get_absolute_path(const char *path){

    #ifdef __linux__
    char absolute_path[PATH_MAX] ={0};
     if (realpath(path, absolute_path) != NULL) {
         return strdup(absolute_path);
     }
     #endif
     #ifdef _WIN32
     char absolute_path[_MAX_PATH] ={0};
     if (_fullpath(absolute_path, path, _MAX_PATH) != NULL) {
            return strdup(absolute_path);
    }
     #endif

     return NULL;

}
char *dtw_get_current_dir(){
    char *path = (char*)malloc(1024);
    getcwd(path,1024);
    char*path_with_bar = (char*)malloc(strlen(path) + 2);
    sprintf(path_with_bar,"%s/",path);
    free(path);
    return path_with_bar;
}



bool dtw_remove_any(const char* path) {
    //means is an file
    if(remove(path) == 0){
        return true;
    }

    struct DtwStringArray *files = dtw_list_files_recursively(path,DTW_CONCAT_PATH);
    int files_size = files->size;
    for(int i = 0; i < files_size; i++){
        remove(files->strings[i]);
    }
    DtwStringArray_free(files);


    struct DtwStringArray *dirs = dtw_list_dirs_recursively(path,DTW_CONCAT_PATH);
    int dirs_size = dirs->size;
    for(int i = dirs->size -1; i >=0; i--){
        rmdir(dirs->strings[i]);
    }
    DtwStringArray_free(dirs);
    //remove / to the path
    if(files_size ||dirs_size){
        return true;
    }
    return false;


}



unsigned char *dtw_load_any_content(const char * path,long *size,bool *is_binary){

    *is_binary = false;
    *size = 0;

    int entity = dtw_entity_type(path);
    if(entity != DTW_FILE_TYPE){
        return NULL;
    }
    FILE  *file = fopen(path,"rb");

    if(file ==NULL){
        return NULL;
    }


    if(fseek(file,0,SEEK_END) == -1){
        fclose(file);
        return NULL;
    }


    *size = ftell(file);

    if(*size == -1){
        fclose(file);
        return NULL;
    }

    if(*size == 0){
        fclose(file);
        return (unsigned char*)strdup("");
    }


    if(fseek(file,0,SEEK_SET) == -1){
        fclose(file);
        return NULL;
    }

    unsigned char *content = (unsigned char*)malloc(*size +1);
    int bytes_read = fread(content,1,*size,file);
    if(bytes_read <=0 ){
        free(content);
        fclose(file);
        return NULL;
    }


    *is_binary = false;
    for(int i = 0;i < *size;i++){
        if(content[i] == 0){
            *is_binary = true;
            break;
        }
    }
    content[*size] = '\0';

    fclose(file);
    return content;
}


char *dtw_load_string_file_content(const char * path){
    long size;
    bool is_binary;
    unsigned char *element = dtw_load_any_content(path,&size,&is_binary);
    if(element == NULL){
        return NULL;
    }

    if(is_binary){
        free(element);
        return NULL;
    }
    return (char*)element;
}


unsigned char *dtw_load_binary_content(const char * path,long *size){
    bool is_binary;
    return dtw_load_any_content(path,size,&is_binary);
}


bool dtw_write_any_content(const char *path,unsigned  char *content,long size){
    //Iterate through the path and create directories if they don't exist
    int entity_type =dtw_entity_type(path);
    if(entity_type == DTW_FOLDER_TYPE){
        dtw_remove_any(path);
    }


    if(entity_type == DTW_NOT_FOUND){
        long path_size = (long)strlen(path);
        for(long i = path_size-1;i > 0;i--){
            //runs in negative mode til / or \ is found
            if(path[i] == '\\' || path[i] == '/'){
                char *dir_path =(char*)malloc(i +2);
                dir_path[i] = '\0';
                strncpy(dir_path,path,i);

                dtw_create_dir_recursively(dir_path);
                free(dir_path);

                break;
            }
        }
    }

    FILE *file = fopen(path,"wb");
    if(file == NULL){

        return false;
    }

    fwrite(content, sizeof(char),size, file);

    fclose(file);
    return true;
}


bool dtw_write_string_file_content(const char *path,const char *content){
    long size;
    if(content == NULL){
        size = 0;
    }
    else{
        size = (long)strlen(content);
    }
    return dtw_write_any_content(path,(unsigned char*)content,size);
}


int dtw_entity_type(const char *path){
    //returns 1 for file, 2 for directory, -1 for not found
    struct stat path_stat;
    #ifdef __linux__
    if(stat(path,&path_stat) == 0){
        if(S_ISREG(path_stat.st_mode)){
            return DTW_FILE_TYPE;
        }else if(S_ISDIR(path_stat.st_mode)){
            return DTW_FOLDER_TYPE;
        }
    }
    #endif
    #ifdef _WIN32
    if(stat(path,&path_stat) == 0){
        if(path_stat.st_mode & S_IFREG){
            return DTW_FILE_TYPE;
        }else if(path_stat.st_mode & S_IFDIR){
            return DTW_FOLDER_TYPE;
        }
    }
    #endif
    return DTW_NOT_FOUND;

}


int dtw_complex_entity_type(const char *path){
    int entity = dtw_entity_type(path);
    if(entity != DTW_FILE_TYPE){
        return entity;
    }
    long size;
    bool is_binary;
    char *data = (char*)dtw_load_any_content(path,&size,&is_binary);
    if(is_binary){
        free(data);
        return DTW_COMPLEX_BINARY;
    }

    if(
       strcmp(data,"t") == 0 ||
       strcmp(data,"f") == 0 ||
       strcmp(data,"true") == 0 ||
       strcmp(data,"false") == 0
       ){
        free(data);
        return DTW_COMPLEX_BOOL_TYPE;
    }


    double value;
    int result = sscanf(data,"%lf",&value);
    if(result == 0){
        free(data);
        return DTW_COMPLEX_STRING_TYPE;
    }
    for(int i = 0; i < size; i++){
        char current = data[i];
        if(current == '.'){
            free(data);
            return DTW_COMPLEX_DOUBLE_TYPE;
        }
    }
    free(data);
    return DTW_COMPLEX_LONG_TYPE;
}

long dtw_get_total_itens_of_dir(const char *path){

    #ifdef __linux__

        DIR *dir = opendir(path);
        if (dir == NULL) {
        return -1;
        }
        int i = 0;
        while ((readdir(dir)) != NULL){
            i++;
        }
        closedir(dir);
        return i -2;
    #endif
    #ifdef _WIN32
        WIN32_FIND_DATA findFileData;
            HANDLE hFind = FindFirstFile(path, &findFileData);

            if (hFind == INVALID_HANDLE_VALUE) {
                return -1;
            }

            int i = 0;
            do {
                if (!(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                    i++;
                }
            } while (FindNextFile(hFind, &findFileData) != 0);

            FindClose(hFind);
            return i;

    #endif
}

const char *dtw_convert_entity(int entity_type){
    if(entity_type == DTW_FILE_TYPE){
        return "file";
    }
    if(entity_type == DTW_FOLDER_TYPE){
        return "folder";
    }
    if(entity_type == DTW_NOT_FOUND){
        return "null";
    }
    if(entity_type == DTW_COMPLEX_BINARY){
        return "binary";
    }
    if(entity_type == DTW_COMPLEX_STRING_TYPE){
        return "string";
    }
    if(entity_type == DTW_COMPLEX_BOOL_TYPE){
        return "bool";
    }
    if(entity_type == DTW_COMPLEX_LONG_TYPE){
        return "long";
    }
    if(entity_type == DTW_COMPLEX_DOUBLE_TYPE){
        return "double";
    }
    return "invalid";
}

bool dtw_copy_any(const char* src_path,const  char* dest_path,bool merge) {

    //verify if is an file
    int type = dtw_entity_type(src_path);
    if(type == DTW_NOT_FOUND){
        return false;
    }

    if(type == DTW_FILE_TYPE){

        long size;
        bool is_binary;
        unsigned char *content = dtw_load_any_content(src_path,&size,&is_binary);
        bool result =  dtw_write_any_content(dest_path,content,size);
        free(content);
        return result;
    }
    //means is an directory

    //remove the previous directory if merge is false
    if(!merge){
        dtw_remove_any(dest_path);
    }
    //creating dirs
    struct DtwStringArray *dirs = dtw_list_dirs_recursively(src_path,DTW_CONCAT_PATH);

    int size = dirs->size;
    int src_path_size = strlen(src_path);

    for(int i = 0; i < size; i++){
        char *new_path_dir = private_dtw_change_beginning_of_string(dirs->strings[i],src_path_size,dest_path);
        dtw_create_dir_recursively(new_path_dir);
        free(new_path_dir);
    }
    DtwStringArray_free(dirs);


    struct DtwStringArray *files = dtw_list_files_recursively(src_path,DTW_CONCAT_PATH);

    for(int i = 0; i < files->size; i++){
        long file_size;
        bool is_binary;
        unsigned char *content = dtw_load_any_content(files->strings[i],&file_size,&is_binary);
        char *new_path = private_dtw_change_beginning_of_string(files->strings[i],src_path_size,dest_path);

        dtw_write_any_content(new_path,content,file_size);
        free(content);
        free(new_path);


    }

    DtwStringArray_free(files);

    return true;

}

bool dtw_move_any(const char* src_path, const char* dest_path,bool merge) {
    bool result = dtw_copy_any(src_path,dest_path,merge);
    dtw_remove_any(src_path);
    return result;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




 DtwStringArray * dtw_list_files(const char *path, bool concat_path){
    return dtw_list_basic(path,  DTW_FILE_TYPE, concat_path);
}

 DtwStringArray * dtw_list_dirs(const char *path, bool concat_path){
    return dtw_list_basic(path,DTW_FOLDER_TYPE, concat_path);
}

 DtwStringArray *  dtw_list_all(const char *path,  bool concat_path){
    return dtw_list_basic(path, DTW_ALL_TYPE, concat_path);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#ifdef __linux__

DtwFlockLocker * newFlockLocker(){

    DtwFlockLocker *self = (DtwFlockLocker*) malloc(sizeof (DtwFlockLocker));
    *self  = (DtwFlockLocker){0};
    self->locked_files = private_new_privateFlockArray();
    self->temp_folder = "/tmp/";

    return self;
}
int  DtwFlockLocker_lock(DtwFlockLocker *self, const char *filename) {
    if (privateDtwFlockArray_index_of(self->locked_files, filename) != -1) {
        return DTW_LOCKER_LOCKED;
    }

    char *file_sha = dtw_generate_sha_from_string(filename);
    const char *EXTENSION = "lock";
    char *formatted = (char *) malloc(
            strlen(file_sha) +
            strlen(self->temp_folder) +
            strlen(EXTENSION) +
            3
    );
    sprintf(formatted, "%s/%s.%s", self->temp_folder, file_sha, EXTENSION);

    free(file_sha);
    int fd = open(formatted, O_RDWR | O_CREAT, 0644);
    free(formatted);
    if (fd == -1) {
        return DTW_LOCKER_IMPOSSIBLE_TO_CREATE_FILE_DESCRIPTOR;
    }
    if (flock(fd, LOCK_EX) == -1) {
        close(fd);
        return DTW_LOCKER_FLCTL_FAIL;
    }
    privateDtwFlockArray_append(self->locked_files, filename, fd);
    return  DTW_LOCKER_LOCKED;
}

void private_FlockLocker_unlock_by_index(DtwFlockLocker *self, int index){
    privateDtwFlockLockedElement  *element = self->locked_files->elements[index];
    flock(element->file_descriptor, LOCK_UN);
    close(element->file_descriptor);
}
void DtwFlockLocker_unlock(DtwFlockLocker *self, const char *filename){
    int index = privateDtwFlockArray_index_of(self->locked_files, filename);
    if(index == -1){
        return;
    }
    private_FlockLocker_unlock_by_index(self,index);
}
void  DtwFlockLocker_represent(DtwFlockLocker *self){
    privateDtwFlockArray_represent(self->locked_files);
}
void  DtwFlockLocker_free(DtwFlockLocker *self){
    for(int i = 0 ; i < self->locked_files->size; i++){
        private_FlockLocker_unlock_by_index(self,i);
    }
    privateDtwFlockArray_free(self->locked_files);
    free(self);
}
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef __linux__


privateDtwFlockArray * private_new_privateFlockArray(){
    privateDtwFlockArray * self = (privateDtwFlockArray*) malloc(sizeof (privateDtwFlockArray));
    self->elements = (privateDtwFlockLockedElement **) malloc(0);
    self->size = 0;
    return self;
}


int  privateDtwFlockArray_index_of(privateDtwFlockArray *self, const char *filename){
    for(int i = 0 ; i <self->size;i++){
        privateDtwFlockLockedElement  *current = self->elements[i];
        if(strcmp(current->filename,filename) ==0){
            return  i;
        }
    }
    return  -1;
}
void privateDtwFlockArray_append(privateDtwFlockArray *self, const char *filename, int file_descriptor){

    self->elements = (privateDtwFlockLockedElement**) realloc(
            self->elements,
            sizeof(privateDtwFlockLockedElement**) * (self->size + 1)
            );
    privateDtwFlockLockedElement  *created = private_new_privateDtwFlockLockedElement(filename, file_descriptor);
    self->elements[self->size] = created;
    self->size+=1;
}

void privateDtwFlockArray_destroy_by_index(privateDtwFlockArray *self, int position){
    if(position >= self->size){
        return ;
    }
    privateDtwFlockLockedElement *finded = self->elements[position];
    privateDtwFlockLockedElement_free(finded);
    for(int i = position; i  < self->size-1; i++){
        self->elements[i] = self->elements[i+1];
    }
    self->size-=1;
}


void privateDtwFlockArray_represent(privateDtwFlockArray *self){
    for(int i = 0 ; i <self->size;i++){

        privateDtwFlockLockedElement  *current = self->elements[i];
        printf("=============================\n");
        privateDtwFlockLockedElement_represent(current);
    }
}

void privateDtwFlockArray_free(privateDtwFlockArray *self){
    for(int i = 0 ; i <self->size;i++){
        privateDtwFlockLockedElement  *current = self->elements[i];
        privateDtwFlockLockedElement_free(current);
    }
    free(self->elements);
    free(self);
}
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef __linux__



privateDtwFlockLockedElement * private_new_privateDtwFlockLockedElement(const char *filename, int file_descriptor){
    privateDtwFlockLockedElement *self = (privateDtwFlockLockedElement*) malloc(sizeof (privateDtwFlockLockedElement));
    self->filename = strdup(filename);
    self->file_descriptor = file_descriptor;
    return  self;
}

void privateDtwFlockLockedElement_represent(privateDtwFlockLockedElement *self){
    printf("file: %s\n",self->filename);
    printf("if: %d\n",self->file_descriptor);

}
void privateDtwFlockLockedElement_free(privateDtwFlockLockedElement *self){
    free(self->filename);
    free(self);

}
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwLocker *newDtwLocker(){

    DtwLocker *self = (DtwLocker*)malloc(sizeof(DtwLocker));
#ifdef __linux__
    self->locker = newFlockLocker();
#endif
#ifdef _WIN32
    self->locker = newDtwMultiFileLocker();
#endif
    return self;
}

int DtwLocker_lock(DtwLocker *self, const  char *element){

#ifdef __linux__
    return DtwFlockLocker_lock(self->locker,element);
#endif
#ifdef _WIN32
    return DtwMultiFIleLocker_lock(self->locker,element);
#endif
    return  DTW_LOCKER_OS_NOT_PREDICTIBLE;
}

void DtwLocker_unlock(DtwLocker *self, const  char *element){

#ifdef __linux__
    DtwFlockLocker_unlock(self->locker,element);
#endif
    #ifdef _WIN32
         DtwMultifileLocker_unlock(self->locker,element);
    #endif
}

void DtwLocker_represemt(DtwLocker *self){

#ifdef __linux__
    DtwFlockLocker_represent(self->locker);
#endif
#ifdef _WIN32
     DtwMultiFileLocker_represemt(self->locker);
#endif
}

void DtwLocker_free(DtwLocker *self){

#ifdef __linux__
    DtwFlockLocker_free(self->locker);
#endif

#ifdef _WIN32
     DtwMultiFileLocker_free(self->locker);
#endif
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





DtwMultiFileLocker *newDtwMultiFileLocker(){
    DtwMultiFileLocker *self = (DtwMultiFileLocker*) malloc(sizeof (DtwMultiFileLocker));
    #ifdef __linux__

        self->process = getpid();
    #endif 
    
    #ifdef _WIN32
        self->process = GetCurrentProcessId();
    #endif

    self->total_checks = DTW_MULTIFILE_LOCKER_TOTAL_CHECK;
    self->max_lock_time = DTW_MULTIFILE_LOCKER_MAX_TIMEOUT;
    self->max_wait = DTW_MULFILE_LOCKER_MAX_WAIT;
    self->locked_elements = newDtwStringArray();

    return self;
}




int  DtwMultiFIleLocker_lock(DtwMultiFileLocker *self, const char *element) {

    if(DtwStringArray_find_position(self->locked_elements,element) != -1){
        return DTW_LOCKER_LOCKED;
    }

    const char *LOCK_FOLDER = ".lock";
    const int LOCK_FOLDER_SIZE = (int)strlen(LOCK_FOLDER);
    char *file = (char*)malloc(strlen(element) +  LOCK_FOLDER_SIZE + 10);
    sprintf(file,"%s%s",element,LOCK_FOLDER);
    long started_time = time(NULL);

    while (true){


        long now = time(NULL);
        if((now - started_time) > self->max_wait){
            free(file);
            return DTW_LOCKER_WAIT_ERROR;
        }


         bool write = false;
         int entity_type = dtw_entity_type(file);
         if(entity_type== DTW_NOT_FOUND){
            write = true;
         }

         if(entity_type== DTW_FILE_TYPE){
             long last_modification  = dtw_get_entity_last_motification_in_unix(file);
             if ((now - self->max_lock_time) > last_modification ) {
                 write = true;
             }
         }

         if(entity_type == DTW_FOLDER_TYPE){
             dtw_remove_any(file);
             continue;
         }


         if(!write) {
             continue;
         }
        dtw_write_long_file_content(file,self->process);
        bool break_loop = true;
         for(int i = 0;i < self->total_checks;i++){
            long result = dtw_load_long_file_content(file);
            if(result != self->process && result != -1){
                break_loop = false;
                break;
            }
        }

        if(break_loop){
            break;

        }


    }
    DtwStringArray_append(self->locked_elements,element);
    free(file);
    return DTW_LOCKER_LOCKED;

}

void DtwMultifileLocker_unlock(DtwMultiFileLocker *self, const  char *element){
    bool found = false;
    for(long i = 0; i < self->locked_elements->size;i++){
        if(strcmp(self->locked_elements->strings[i],element)==0){
            found = true;
            break;
        }
    }

    if(!found){
        return;
    }


    const char *LOCK_FOLDER = ".lock";
    const int LOCK_FOLDER_SIZE = (int)strlen(LOCK_FOLDER);
    char *file = (char*)malloc(strlen(element) +  LOCK_FOLDER_SIZE + 10);
    sprintf(file,"%s%s",element,LOCK_FOLDER);
    dtw_remove_any(file);
    free(file);
}


void DtwMultiFileLocker_represemt(DtwMultiFileLocker *self){
    printf("locked:\n");
    for(int i = 0 ; i < self->locked_elements->size;i++){
        char *element = self->locked_elements->strings[i];
        char *unformated = dtw_replace_string(element,".lock","");
        printf("\t%s\n",unformated);
        free(unformated);
    }
}

void DtwMultiFileLocker_free(DtwMultiFileLocker *self){

    for(int i = 0 ; i < self->locked_elements->size;i++){
        char *element = self->locked_elements->strings[i];
        DtwMultifileLocker_unlock(self, element);
    }

    DtwStringArray_free(self->locked_elements);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




#ifdef __linux__

bool private_dtw_verify_if_add(const int expected_type, int d_type){
    if (expected_type == DTW_FILE_TYPE  && d_type == DT_REG) {
        return true;
    }

    if (expected_type == DTW_FOLDER_TYPE && d_type == DT_DIR) {
        return true;
    }

    if (expected_type == DTW_ALL_TYPE) {

        return true;
    }
    return false;
}
bool private_dtw_verify_if_skip(struct dirent *entry){
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            return true;
        }
        return false;
}

struct DtwStringArray * dtw_list_basic(const char *path,int expected_type,bool concat_path){

    DIR *dir;
    struct dirent *entry;

    //array of directories
    struct DtwStringArray *dirs = newDtwStringArray();
    int i = 0;

    //means that the directory is not found
    if ((dir = opendir(path)) == NULL) {
        return dirs;
    }

    //reads the directory and adds the directories to the array
    while ((entry = readdir(dir)) != NULL) {
        //means is not a directory
        if (private_dtw_verify_if_skip(entry)){
            continue;
        }

        if (private_dtw_verify_if_add(expected_type,entry->d_type)) {


            if(concat_path){
                //allocates memory for the directory
                char *generated_dir = (char*)malloc(strlen(path) + strlen(entry->d_name) + 2);
                if(path[strlen(path) - 1] == '/'){
                    sprintf(generated_dir, "%s%s", path, entry->d_name);
                }
                else{
                    sprintf(generated_dir, "%s/%s", path, entry->d_name);
                }

                DtwStringArray_append(dirs, generated_dir);
                free(generated_dir);
            }
            else{
                DtwStringArray_append(dirs, entry->d_name);

            }

            i++;
        }
    }

    if(expected_type == DTW_FOLDER_TYPE){
        private_dtw_add_end_bar_to_dirs_string_array(dirs);
    }
    closedir(dir);

    return dirs;
}

#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



#ifdef _WIN32


bool private_dtw_verify_if_add(const int expected_type, WIN32_FIND_DATAA entry){

    if (expected_type == DTW_FILE_TYPE && entry.dwFileAttributes == WIN32_FILETYPE) {
        return true;
    }

    if (expected_type == DTW_FOLDER_TYPE && entry.dwFileAttributes != WIN32_FILETYPE){
        return true;
    }

    if (expected_type == DTW_ALL_TYPE) {
        return true;
    }

    return false;
}

bool private_dtw_verify_if_skip(WIN32_FIND_DATAA *entry){
    if (strcmp(entry->cFileName, ".") == 0 || strcmp(entry->cFileName, "..") == 0) {
        return true;
    }
    return false;
}

struct DtwStringArray *  dtw_list_basic(const char *path,int expected_type,bool concat_path){

    WIN32_FIND_DATAA file_data;
    HANDLE file_handle;
    char search_path[MAX_PATH];

    //array of directories
    struct DtwStringArray *dirs = newDtwStringArray();
    int i = 0;

    // build the search path string
    snprintf(search_path, MAX_PATH, "%s\\*", path);

    // try to open the directory
    if ((file_handle = FindFirstFileA(search_path, &file_data)) == INVALID_HANDLE_VALUE) {
        return dirs;
    }

    do {
        // skip "." and ".." directories
        if (private_dtw_verify_if_skip(&file_data)){
            continue;
        }

        // verify if it's a file or directory
        if (private_dtw_verify_if_add(expected_type, file_data)) {

            if(concat_path){
                // allocate memory for the directory
                if(path[strlen(path) - 1] == '\\' || path[strlen(path) - 1] == '/'){
                    char *generated_dir = (char*)malloc(strlen(path) + strlen(file_data.cFileName) + 1);
                    sprintf(generated_dir, "%s%s", path, file_data.cFileName);
                    DtwStringArray_append(dirs, generated_dir);
                    free(generated_dir);
                }
                else{
                    char *generated_dir = (char*)malloc(strlen(path) + strlen(file_data.cFileName) + 2);


                    sprintf(generated_dir, "%s/%s", path, file_data.cFileName);

                    DtwStringArray_append(dirs, generated_dir);
                    free(generated_dir);
                }


            }
            else{
                DtwStringArray_append(dirs, file_data.cFileName);

            }

            i++;
        }
    } while (FindNextFileA(file_handle, &file_data) != 0);

        if(expected_type == DTW_FOLDER_TYPE){
            private_dtw_add_end_bar_to_dirs_string_array(dirs);
        }

    FindClose(file_handle);

    return dirs;
}
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



 DtwStringArray * dtw_list_dirs_recursively(const char *path,bool concat_path){

        struct  DtwStringArray *dirs  = newDtwStringArray();
        //verify if the path is a directory

        int entity_type = dtw_entity_type(path);
        if(entity_type != DTW_FOLDER_TYPE){
                return dirs;
        }


        DtwStringArray_append(dirs, (char*)path);

        private_dtw_add_end_bar_to_dirs_string_array(dirs);
        int i = 0;
        //The size of dirs will increase til it reaches the end of the array
        while(i < dirs->size){
                struct DtwStringArray *sub_dirs = dtw_list_basic(
                    dirs->strings[i],
                    DTW_FOLDER_TYPE,
                    true
                    );
                //merge the two dirs
            DtwStringArray_merge(dirs, sub_dirs);
                DtwStringArray_free(sub_dirs);
                i++;

        }
        //unsifth path in dirs
     private_dtw_remove_double_bars_from_string_array(dirs);

        if(!concat_path){

            struct DtwStringArray *removed =  private_dtw_remove_start_path(dirs,path);
            DtwStringArray_free(dirs);
            return removed;
        }
        return dirs;
}



 DtwStringArray *  dtw_list_files_recursively(const char *path,bool concat_path){

    struct DtwStringArray *dirs = dtw_list_dirs_recursively(path,DTW_CONCAT_PATH);

    struct  DtwStringArray *files = newDtwStringArray();
    for(int i = 0; i < dirs->size; i++){
        struct DtwStringArray *sub_files = dtw_list_basic(dirs->strings[i],DTW_FILE_TYPE,DTW_CONCAT_PATH);
        DtwStringArray_merge(files, sub_files);
        DtwStringArray_free(sub_files);
    }

    DtwStringArray_free(dirs);

    if(!concat_path){

        struct DtwStringArray *removed =  private_dtw_remove_start_path(files,path);
        DtwStringArray_free(files);
        return removed;
    }

    return files;
}


 DtwStringArray * dtw_list_all_recursively(const char *path,bool concat_path){

    struct DtwStringArray *dirs = dtw_list_dirs_recursively(path,DTW_CONCAT_PATH);

    struct DtwStringArray *all = newDtwStringArray();

    for(int i = 0; i < dirs->size; i++){

        if(!dtw_ends_with(dirs->strings[i], "/") || !dtw_ends_with(dirs->strings[i], "\\") ){

            char *formated_dir =  (char*)malloc(strlen(dirs->strings[i]) + 2);
            sprintf(formated_dir,"%s/",dirs->strings[i]);
            DtwStringArray_append(all, formated_dir);
            free(formated_dir);
        }

        else{
            DtwStringArray_append(all, dirs->strings[i]);
        }

        struct DtwStringArray *sub_files = dtw_list_basic(dirs->strings[i],DTW_FILE_TYPE,true);
        DtwStringArray_merge(all,sub_files);
        DtwStringArray_free(sub_files);
    }
    DtwStringArray_free(dirs);
     private_dtw_remove_double_bars_from_string_array(all);
    if(!concat_path){

        struct DtwStringArray *removed =  private_dtw_remove_start_path(all,path);
        DtwStringArray_free(all);
        return removed;
    }
    return all;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwDatabaseSchemaModule newDtwDatabaseSchemaModule(){
    DtwDatabaseSchemaModule  self = {0};
    self.sub_schema = DtwDtatabaseSchema_new_subSchema;
    return  self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


DtwEncryptionNamespace newDtwEncryptionNamespace(){
    DtwEncryptionNamespace self = {0};
    self.newAES_CBC_EncryptionInterface = newDtwAES_CBC_EncryptionInterface;
    self.newAES_CBC_EncryptionInterface_str = newDtwAES_CBC_EncryptionInterface_str;    
    self.newAES_ECB_EncryptionInterface = newDtwAES_ECB_EncryptionInterface;
    self.newAES_ECB_EncryptionInterface_str = newDtwAES_ECB_EncryptionInterface_str;
    self.newAES_Custom_CBC_v1_interface = newDtwAES_Custom_CBC_v1_interface;

    self.encrypt_buffer = DtwEncriptionInterface_encrypt_buffer;
    self.decrypt_buffer = DtwEncriptionInterface_decrypt_buffer;

    self.write_any_content = DtwEncriptionInterface_write_any_content;
    self.write_string_file_content = DtwEncriptionInterface_write_string_file_content;
    self.load_any_content = DtwEncriptionInterface_load_any_content;
    self.load_string_file_content = DtwEncriptionInterface_load_string_file_content;

    self.encrypt_buffer_hex = DtwEncriptionInterface_encrypt_buffer_hex;
    self.decrypt_buffer_hex = DtwEncriptionInterface_decrypt_buffer_hex;
    self.write_any_content_hex = DtwEncriptionInterface_write_any_content_hex;
    self.write_string_file_content_hex = DtwEncriptionInterface_write_string_file_content_hex;
    self.load_any_content_hex = DtwEncriptionInterface_load_any_content_hex;
    self.load_string_file_content_hex = DtwEncriptionInterface_load_string_file_content_hex;

    self.encrypt_buffer_b64 = DtwEncriptionInterface_encrypt_buffer_b64;
    self.decrypt_buffer_b64 = DtwEncriptionInterface_decrypt_buffer_b64;
    self.write_any_content_b64 = DtwEncriptionInterface_write_any_content_b64;
    self.write_string_file_content_b64 = DtwEncriptionInterface_write_string_file_content_b64;
    self.load_any_content_b64 = DtwEncriptionInterface_load_any_content_b64;
    self.load_string_file_content_b64 = DtwEncriptionInterface_load_string_file_content_b64;
    self.free = DtwEncriptionInterface_free;
    return self;
}
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwHashModule newDtwHashModule(){
    DtwHashModule self = {0};
    self.newHash =newDtwHash;
    self.digest_any = DtwHash_digest_any;
    self.digest_string = DtwHash_digest_string;
    self.digest_long = DtwHash_digest_long;
    self.digest_double = DtwHash_digest_double;
    self.digest_bool = DtwHash_digest_bool;
    self.digest_file = DtwHash_digest_file;
    self.digest_entity_last_modification =DtwHash_digest_entity_last_modification;
    self.digest_string_array = DtwHash_digest_string_array;
    self.digest_string_array_last_modifications = DtwHash_digest_string_array_last_modifications;
    self.digest_string_array_last_modifications_adding_name = DtwHash_digest_string_array_last_modifications_adding_name;
    self.digest_string_array_content = DtwHash_digest_string_array_content;
    self.digest_string_array_content_adding_name = DtwHash_digest_string_array_content_adding_name;
    self.digest_folder_by_last_modification = DtwHash_digest_folder_by_last_modification;
    self.digest_folder_by_content = DtwHash_digest_folder_by_content;
    self.free = DtwHash_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwLockerModule newDtwLockerModule(){
    DtwLockerModule  self = {0};
    self.newLocker = newDtwLocker;
    self.lock = DtwLocker_lock;
    self.unlock = DtwLocker_unlock;
    self.represemt = DtwLocker_represemt;
    self.free = DtwLocker_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwNamespace newDtwNamespace(){
    DtwNamespace self = {0};
    //io
    self.create_dir_recursively = dtw_create_dir_recursively;
    self.remove_any = dtw_remove_any;
    self.get_absolute_path = dtw_get_absolute_path;
    self.get_current_dir = dtw_get_current_dir;
    self.load_any_content = dtw_load_any_content;
    self.load_string_file_content = dtw_load_string_file_content;
    self.load_binary_content = dtw_load_binary_content;
    self.write_any_content = dtw_write_any_content;
    self.write_string_file_content =dtw_write_string_file_content;
    self.entity_type = dtw_entity_type;
    self.complex_entity_type = dtw_complex_entity_type;
    self.convert_entity  = dtw_convert_entity;
    self.copy_any = dtw_copy_any;
    self.move_any = dtw_move_any;
    //numeral io
    self.load_long_file_content = dtw_load_long_file_content;
    self.load_double_file_content =  dtw_load_double_file_content;
    self.load_bool_file_content = dtw_load_bool_file_content;

    self.write_long_file_content = dtw_write_long_file_content;
    self.write_double_file_content = dtw_write_double_file_content;
    self.write_bool_file_content = dtw_write_bool_file_content;

    //listage
    self.list_files = dtw_list_files;
    self.list_dirs = dtw_list_dirs;
    self.list_all = dtw_list_all;
    self.convert_unix_time_to_string = dtw_convert_unix_time_to_string;
    self.list_files_recursively = dtw_list_files_recursively;
    self.list_dirs_recursively = dtw_list_dirs_recursively;
    self.list_all_recursively = dtw_list_all_recursively;

    //extras
    self.generate_sha_from_file = dtw_generate_sha_from_file;
    self.generate_sha_from_string = dtw_generate_sha_from_string;
    self.generate_sha_from_any = dtw_generate_sha_from_any;
    self.get_entity_last_motification_in_unix = dtw_get_entity_last_motification_in_unix;
    self.get_entity_last_motification_in_string = dtw_get_entity_last_motification_in_string;
    self.concat_path = dtw_concat_path;
    //bas64
    self.base64_encode = dtw_base64_encode;
    self.base64_decode  = dtw_base64_decode;
    self.convert_binary_file_to_base64 = dtw_convert_binary_file_to_base64;

    self.string_array = newDtwStringArrayModule();
    self.path = newDtwPathModule();
    self.locker = newDtwLockerModule();

    self.schema = newDtwSchemaModule();
    self.database_schema = newDtwDatabaseSchemaModule();
    self.tree = newDtwTreeModule();
    self.hash = newDtwHashModule();
    self.transaction = newDtwTransactionModule();
    self.resource = newDtwResourceModule();
    self.randonizer = newDtwRandonizerModule();
    self.encryption  = newDtwEncryptionNamespace();
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwPathModule newDtwPathModule(){
    DtwPathModule  self = {0};
    self.newPath = newDtwPath;
    self.changed =DtwPath_changed;
    self.get_full_name = DtwPath_get_full_name;
    self.get_name = DtwPath_get_name;
    self.get_extension = DtwPath_get_extension;
    self.get_path = DtwPath_get_path;
    self.get_dir = DtwPath_get_dir;
    self.get_total_dirs = DtwPath_get_total_dirs;
    self.get_sub_dirs_from_index = DtwPath_get_sub_dirs_from_index;
    self.insert_dir_at_index = DtwPath_insert_dir_at_index;
    self.remove_sub_dirs_at_index =  DtwPath_remove_sub_dirs_at_index;
    self.insert_dir_after= DtwPath_insert_dir_after;
    self.insert_dir_before = DtwPath_insert_dir_before;
    self.replace_dirs = DtwPath_replace_dirs;
    self.remove_sub_dirs_at = DtwPath_remove_sub_dirs_at;

    self.set_extension = DtwPath_set_extension;
    self.set_name = DtwPath_set_name;
    self.set_dir = DtwPath_set_dir;
    self.set_full_name =DtwPath_set_full_name;
    self.set_path = DtwPath_set_path;

    self.add_start_dir =DtwPath_add_start_dir;
    self.add_end_dir = DtwPath_add_end_dir;
    self.represent = DtwPath_represent;
    self.free = DtwPath_free;

    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwRandonizerModule newDtwRandonizerModule(){
    DtwRandonizerModule self = {0};
    self.newRandonizer = newDtwRandonizer;
    self.generate_num = DtwRandonizer_generate_num;
    self.generate_token =DtwRandonizer_generate_token;
    self.free = DtwRandonizer_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwResourceArrayModule newDtwResourceArrayModule(){
    DtwResourceArrayModule self = {0};
    self.append = DtwResourceArray_append;
    self.represent = DtwResourceArray_represent;
    self.get_by_name = DtwResourceArray_get_by_name;
    self.free = DtwResourceArray_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwResourceModule newDtwResourceModule(){
    DtwResourceModule self = {0};
    self.newResource = new_DtwResource;
    self.get_error_code = DtwResource_get_error_code;
    self.get_error_message = DtwResource_get_error_message;
    self.error = DtwResource_error;
    self.load = DtwResource_load;
    self.clear_errors = DtwResource_clear_errors;
    self.unload = DtwResource_unload;
    self.sub_resource = DtwResource_sub_resource;
    self.set_encryption = DtwResource_set_encryption;
    self.create_foreach_props = DtwResource_create_foreach_props;
    self.each = DtwResource_foreach;
    self.schema_each  =DtwResource_schema_foreach;

    self.create_map_props = DtwResource_create_map_props;
    self.map = DtwResource_map;
    self.schema_map = DtwResource_schema_map;

    self.create_cJSONArrayMapProps = DtwResource_create_cJSONArrayMapProps;
    self.map_cJSONArray = DtwResource_map_cJSONArray;
    self.schema_map_cJSONArray = DtwResource_schema_map_cJSONArray;

    self.create_cJSONObjectProps = DtwResource_create_cJSONObjectProps;
    self.map_cJSONObject =DtwResource_map_cJSONObject;
    self.schema_map_cJSONObject = DtwResource_schema_map_cJSONObject;

    #ifdef DTW_ALLOW_CHASH
        self.create_CHashrrayMapProps = DtwResource_create_CHashrrayMapProps;
        self.map_CHashArray = DtwResource_map_CHashArray;
        self.schema_map_CHashArray  = DtwResource_schema_map_CHashArray;

        self.createCHashObjectMapProps = DtwResource_createCHashObjectMapProps;
        self.map_CHashObject = DtwResource_map_CHashObject;
        self.schema_map_CHashObject = DtwResource_schema_map_CHashObject;

    #endif
    self.get_any_from_sub_resource = DtwResource_get_any_from_sub_resource;
    self.get_binary_from_sub_resource = DtwResource_get_binary_from_sub_resource;
    self.get_string_from_sub_resource = DtwResource_get_string_from_sub_resource;
    self.get_long_from_sub_resource = DtwResource_get_long_from_sub_resource;
    self.get_double_from_sub_resource = DtwResource_get_double_from_sub_resource;
    self.get_bool_from_sub_resource = DtwResource_get_bool_from_sub_resource;
    self.get_error_path = DtwResource_get_error_path;
    self.get_schema_values = DtwResource_get_schema_values;
    self.set_binary_in_sub_resource = DtwResource_set_binary_in_sub_resource;
    self.set_string_in_sub_resource = DtwResource_set_string_in_sub_resource;
    self.set_long_in_sub_resource = DtwResource_set_long_in_sub_resource;
    self.set_double_in_sub_resource = DtwResource_set_double_in_sub_resource;
    self.set_bool_in_sub_resource = DtwResource_set_bool_in_sub_resource;
    self.is_file = DtwResource_is_file;
    self.sub_resource_ensuring_not_exist = DtwResource_sub_resource_ensuring_not_exist;
    self.sub_resource_next = DtwResource_sub_resource_next;
    self.destroy_sub_resource = DtwResource_destroy_sub_resource;
    self.rename_sub_resource = DtwResource_rename_sub_resource;
    self.sub_resource_now  = DtwResource_sub_resource_now;
    self.sub_resource_now_in_unix = DtwResource_sub_resource_now_in_unix;
    self.sub_resource_random = DtwResource_sub_resource_random;
    self.set_binary_sha =DtwResource_set_binary_sha;
    self.set_string_sha = DtwResource_set_string_sha;
    self.set_any_in_sub_resource = DtwResource_set_any_in_sub_resource;
    self.set_binary_sha_in_sub_resource = DtwResource_set_binary_sha_in_sub_resource;
    self.set_string_sha_in_sub_resource = DtwResource_set_string_sha_in_sub_resource;

    self.new_schema_insertion = DtwResource_new_schema_insertion;
    self.find_by_name_id = DtwResource_find_by_name_id;
    self.find_by_primary_key_with_string = DtwResource_find_by_primary_key_with_string;
    self.find_by_primary_key_with_binary = DtwResource_find_by_primary_key_with_binary;
    self.dangerous_remove_schema_prop = DtwResource_dangerous_remove_schema_prop;
    self.dangerous_rename_schema_prop = DtwResource_dangerous_rename_schema_prop;
    self.newDatabaseSchema = DtwResource_newDatabaseSchema;

    self.lock =DtwResource_lock;
    self.unlock = DtwResource_unlock;
    self.destroy = DtwResource_destroy;

    self.get_any = DtwResource_get_any;
    self.get_string = DtwResource_get_string;
    self.get_binary = DtwResource_get_binary;
    self.get_double = DtwResource_get_double;
    self.get_long = DtwResource_get_long;
    self.get_bool = DtwResource_get_bool;

    self.set_any = DtwResource_set_any;
    self.set_binary = DtwResource_set_binary;
    self.set_string = DtwResource_set_string;
    self.set_long = DtwResource_set_long;
    self.set_double = DtwResource_set_double;
    self.set_bool = DtwResource_set_bool;


    self.list_names = DtwResource_list_names;
    self.size = DtwResource_size;
    self.type = DtwResource_type;
    self.type_in_str = DtwResource_type_in_str;
    self.commit =DtwResource_commit;
    self.represent = DtwResource_represent;
    self.rename = DtwResource_rename;
    self.free  = DtwResource_free;
    self.sub_resources = DtwResource_sub_resources;
    self.array = newDtwResourceArrayModule();

    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwSchemaModule newDtwSchemaModule(){
    DtwSchemaModule  self = {0};
    self.sub_schema = DtwSchema_new_subSchema;
    self.add_primary_key = DtwSchema_add_primary_key;

    return  self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwStringArrayModule newDtwStringArrayModule(){
    DtwStringArrayModule self = {0};
    self.newStringArray = newDtwStringArray;
    self.set_value = DtwStringArray_set_value;
    self.append = DtwStringArray_append;
    self.pop = DtwStringArray_pop;
    self.merge = DtwStringArray_merge;
    self.represent = DtwStringArray_represent;
    self.find_position = DtwStringArray_find_position;
    self.sort = DtwStringArray_sort;
    self.free =DtwStringArray_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwActionTransactionModule newDtwActionTransactionModule(){
    DtwActionTransactionModule self = {0};
    self.newAction = newDtwActionTransaction;
    self.write_any = DtwActionTransaction_write_any;
    self.move_any = DtwActionTransaction_move_any;
    self.copy_any = DtwActionTransaction_copy_any;
    self.move_any_merging = DtwActionTransaction_move_any_merging;
    self.copy_any_merging = DtwActionTransaction_move_any_merging;
    self.delete_any = DtwActionTransaction_delete_any;
    self.convert_action_to_integer =DtwActionTransaction_convert_action_to_integer;
    self.convert_action_to_string = DtwActionTransaction_convert_action_to_string;
    self.commit = DtwActionTransaction_commit;
    self.represent = DtwActionTransaction_represent;
    self.free = DtwActionTransaction_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwJsonTransactionErrorModule newDtwJsonTransactionErrorModule(){
    DtwJsonTransactionErrorModule self = {0};
    self.represent = DtwJsonTransactionError_represent;
    self.free = DtwJsonTransactionError_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwTransactionModule newDtwTransactionModule(){
    DtwTransactionModule self = {0};
    self.newTransaction = newDtwTransaction;
    self.set_encryption = DtwTransaction_set_encryption;
    self.newTransaction_from_json = newDtwTransaction_from_json;
    self.newTransaction_from_json_file = newDtwTransaction_from_json_file;
    self.validate_json_transaction_file = dtw_validate_json_transaction_file;
    self.remove_from_index = DtwTransaction_remove_from_index;
    self.remove_from_source = DtwTransaction_remove_from_source;
    self.filter = DtwTransaction_filter;
    self.append_action = DtwTransaction_append_action;
    self.write_any = DtwTransaction_write_any;
    self.write_string = DtwTransaction_write_string;
    self.write_long = DtwTransaction_write_long;
    self.write_bool = DtwTransaction_write_bool;
    self.write_double = DtwTransaction_write_double;

    self.move_any_merging = DtwTransaction_move_any_merging;
    self.copy_any_merging = DtwTransaction_copy_any_merging;
    self.move_any = DtwTransaction_move_any;
    self.copy_any = DtwTransaction_copy_any;
    self.delete_any = DtwTransaction_delete_any;

    self.dumps_transaction_to_json = DtwTransaction_dumps_to_json;
    self.dumps_transaction_to_json_file = DtwTransaction_dumps_to_json_file;

    self.commit = DtwTransaction_commit;
    self.represent = DtwTransaction_represent;
    self.free =DtwTransaction_free;

    self.action = newDtwActionTransactionModule();
    self.json_error = newDtwJsonTransactionErrorModule();


    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwJsonTreeErrorModule newDtwJsonTreeErrorModule(){
    DtwJsonTreeErrorModule self = {0};
    self.validate_json_tree_by_cJSON= DtwJsonTreeError_validate_json_tree_by_cJSON;
    self.validate_json_tree_by_content = DtwJsonTreeError_validate_json_tree_by_content;
    self.represent =DtwJsonTreeError_represent;
    self.free = DtwJsonTreeError_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwTreeTransactionReportModule newDtwTreeTransactionReportModule(){
    DtwTreeTransactionReportModule self = {0};
    self.represent = DtwTreeTransactionReport_represent;
    self.free = DtwTreeTransactionReport_free;
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwTreeModule newDtwTreeModule(){
    DtwTreeModule self = {0};
    self.newTree = newDtwTree;
    self.add_tree_part_by_copy = DtwTree_add_tree_part_copy;
    self.remove_tree_part  = DtwTree_remove_tree_part;
    self.add_tree_part_getting_owenership = DtwTree_add_tree_part_getting_onwership;
    self.add_tree_part_referencing = DtwTree_add_tree_part_referencing;
    self.add_tree_parts_from_string_array = DtwTree_add_tree_parts_from_string_array;
    self.get_sub_tree = DtwTree_get_sub_tree;
    self.add_tree_from_hardware = DtwTree_add_tree_from_hardware;
    self.find_tree_part_by_function = DtwTree_find_tree_part_by_function;
    self.filter = DtwTree_filter;
    self.map = DtwTree_map;

    self.list_files = DtwTree_list_files;
    self.list_dirs = DtwTree_list_dirs;
    self.list_all = DtwTree_list_all;

    self.list_files_recursively = DtwTree_list_files_recursively;
    self.list_dirs_recursively = DtwTree_list_dirs_recursively;
    self.list_all_recursively = DtwTree_list_all_recursively;

    self.find_tree_part_by_name = DtwTree_find_tree_part_by_name;
    self.find_tree_part_by_path = DtwTree_find_tree_part_by_path;

    self.create_report = DtwTree_create_report;
    self.loads_json_tree = DtwTree_loads_json_tree;
    self.loads_json_tree_from_file = DtwTree_loads_json_tree_from_file;
    self.dumps_json_tree = DtwTree_dumps_tree_json;
    self.dumps_json_tree_to_file = DtwTree_dumps_tree_json_to_file;

    self.represent = DtwTree_represent;
    self.insecure_hardware_remove_tree = DtwTree_insecure_hardware_remove_tree;
    self.insecure_hardware_write_tree = DtwTree_insecure_hardware_write_tree;
    self.hardware_commit_tree = DtwTree_hardware_commit_tree;
    self.free = DtwTree_free;
    self.transaction_report = newDtwTreeTransactionReportModule();
    self.part = newDtwTreePartModule();
    self.json_error = newDtwJsonTreeErrorModule();
    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwTreePartModule newDtwTreePartModule(){
    DtwTreePartModule self ={0};
    self.newPart = newDtwTreePart;
    self.newPartEmpty = newDtwTreePartEmpty;
    self.newPartLoading = newDtwTreePartLoading;
    self.get_content_string_by_reference = DtwTreePart_get_content_string_by_reference;
    self.get_content_binary_by_reference = DtwTreePart_get_content_binary_by_reference;
    self.get_content_sha = DtwTreePart_get_content_sha;
    self.set_any_content = DtwTreePart_set_any_content;
    self.set_string_content = DtwTreePart_set_string_content;
    self.set_binary_content = DtwTreePart_set_binary_content;
    self.load_content_from_hardware =DtwTreePart_load_content_from_hardware;
    self.free_content = DtwTreePart_free_content;
    self.represent =DtwTreePart_represent;
    self.hardware_remove = DtwTreePart_hardware_remove;
    self.hardware_write = DtwTreePart_hardware_write;
    self.hardware_modify = DtwTreePart_hardware_modify;
    self.hardware_commit =DtwTreePart_hardware_commit;

    self.free = DtwTreePart_free;
    self.self_copy = DtwTreePart_self_copy;


    return self;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



long dtw_load_long_file_content_setting_error(const char *path,int *error){
    char *data = dtw_load_string_file_content(path);
    if(!data){
        *error = DTW_NOT_FOUND;
        return DTW_NOT_FOUND;
    }
    long value = -1;
    int result = sscanf(data,"%ld",&value);
    free(data);
    if(result){
        return value;
    }
    *error = DTW_NOT_NUMERICAL;
    return DTW_NOT_NUMERICAL;
}


long dtw_load_long_file_content(const char * path){
   int error;
   return dtw_load_long_file_content_setting_error(path,&error);
}


double dtw_load_double_file_content_setting_error(const char * path, int *error){
    char *data = dtw_load_string_file_content(path);
    if(!data){
        *error = DTW_NOT_FOUND;
        return DTW_NOT_FOUND;
    }
    double value = -1;
    int result = sscanf(data,"%lf",&value);
    free(data);
    if(result){

        return value;
    }
    *error = DTW_NOT_NUMERICAL;
    return DTW_NOT_NUMERICAL;
}


double dtw_load_double_file_content(const char * path){
    int error;
    return dtw_load_double_file_content_setting_error(path,&error);
}


bool dtw_load_bool_file_content_setting_error(const char * path, int *error){
    char *data = dtw_load_string_file_content(path);
    if(!data){
        *error = DTW_NOT_FOUND;
        return false;
    }

    if(strcmp(data,"true") == 0 || strcmp(data,"t") == 0){
        free(data);
        return true;
    }

    if(strcmp(data,"false") == 0 || strcmp(data,"f") == 0){
        free(data);
        return false;
    }
    free(data);
    *error = DTW_NOT_BOOL;
    return false;

}


bool dtw_load_bool_file_content(const char * path){
    int error;
    return dtw_load_bool_file_content_setting_error(path,&error);

}



void dtw_write_long_file_content(const char *path, long value){
    char result[30] ={0};
    sprintf(result,"%ld",value);
    dtw_write_string_file_content(path,result);
}


void dtw_write_double_file_content(const char *path,double value){
    char result[30] ={0};
    sprintf(result,"%lf",value);
    dtw_write_string_file_content(path,result);
}


void dtw_write_bool_file_content(const char *path, bool value){
    if(value){
        dtw_write_string_file_content(path,"t");
    }
    else{
        dtw_write_string_file_content(path,"f");
    }
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




struct DtwPath * newDtwPath(const char *path) {
    struct DtwPath *self = (struct DtwPath *)malloc(sizeof(struct DtwPath));
    self->garbage = newDtwStringArray();
    self->path = private_dtw_format_path(path);
    self->original_path_string = strdup(self->path);


    return self;
}
bool DtwPath_changed(struct DtwPath *self){
    return strcmp(self->path,self->original_path_string) != 0;
}




void DtwPath_represent(struct DtwPath *self){
    char  *path = DtwPath_get_path(self);
    char *full_name = DtwPath_get_full_name(self);
    char *dir = DtwPath_get_dir(self);
    char *name = DtwPath_get_name(self);
    char *extension = DtwPath_get_extension(self);
    bool changed = DtwPath_changed(self);

    printf("First Path: %s\n", self->original_path_string ? self->original_path_string : "NULL");
    printf("Path: %s\n", path  ? path : "NULL");
    printf("Path Changed: %s\n", changed ? "true" : "false");
    printf("Dir: %s\n", dir ? dir : "NULL");
    printf("Full Name: %s\n", full_name ? full_name : "NULL");
    printf("Name: %s\n", name ? name : "NULL");
    printf("Extension: %s\n", extension ? extension : "NULL");


}



void DtwPath_free(struct DtwPath *self) {
    DtwStringArray_free(self->garbage);
    free(self->original_path_string);
    free(self->path);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




char * DtwPath_get_name(struct DtwPath *self){

    long path_size = (long)strlen(self->path);
    long start = 0;
    long end = path_size;
    for(long i = path_size-1; i >=0; i--){
        char current_char = self->path[i];
        if(current_char == '/' || current_char == '\\'){
            start = i+1;
            break;
        }
        if(current_char == '.'){
            end = i;
        }
    }
    if(end - start == 0){
        return NULL;
    }

    char *buffer = private_dtw_sub_str(self->path,start,end);
    return privateDtwStringArray_append_if_not_included(self->garbage,buffer);

}
char * DtwPath_get_extension(struct DtwPath *self){
    long path_size = (long)strlen(self->path);
    long start = -1;
    long end = path_size;
    for(long i = path_size-1; i >=0; i--){
        char current_char = self->path[i];
        if(current_char == '.'){
            start = i+1;
            break;
        }
    }
    if(start == -1){
        return  NULL;
    }
    char *buffer = private_dtw_sub_str(self->path,start,end);
    return privateDtwStringArray_append_if_not_included(self->garbage,buffer);
}

char * DtwPath_get_full_name(struct DtwPath *self){
    long path_size = (long)strlen(self->path);
    long start = 0;
    long end = path_size;
    for(long i = path_size-1; i >=0; i--){
        char current_char = self->path[i];
        if(current_char == '/' || current_char == '\\'){
            start = i+1;
            break;
        }
    }
    if(end - start == 0){
        return NULL;
    }
    char *buffer = private_dtw_sub_str(self->path,start,end);
    return privateDtwStringArray_append_if_not_included(self->garbage,buffer);
}

char * DtwPath_get_dir(struct DtwPath *self){
    long path_size = (long)strlen(self->path);
    long start = 0;
    long end = -1;
    for(long i = path_size-1; i >=0; i--){
        char current_char = self->path[i];
        if(current_char == '/' || current_char == '\\'){
            end = i+1;
            break;
        }
    }
    if(end == -1){
        return NULL;
    }

    char *buffer = private_dtw_sub_str(self->path,start,end);
    return privateDtwStringArray_append_if_not_included(self->garbage,buffer);
}

char * DtwPath_get_path(struct DtwPath *self){
    return self->path;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



int DtwPath_get_total_dirs(DtwPath *self){
    int size = 0;
    int path_size = (int)strlen(self->path);
    for(int i = 0; i < path_size;i++){
        char current = self->path[i];
        if(current == '/' || current =='\\'){
            size+=1;
        }
    }
    return size;
}

char *DtwPath_get_sub_dirs_from_index(DtwPath *self, int start, int end){

    int size = DtwPath_get_total_dirs(self);
    if(size == 0){
        return NULL;
    }
    int converted_start_index = (int)private_dtw_convert_index(start, size);
    int converted_end_index = (int)private_dtw_convert_index(end, size);

    if(converted_start_index == -1  || converted_end_index == -1){
        return  NULL;
    }

    char *dir = DtwPath_get_dir(self);
    int  dirs_string_size = (int)strlen(dir);
    int total_dirs = 0;
    bool start_defined = false;
    bool end_defined  = false;
    int start_point = 0;
    int end_point = dirs_string_size;

    for(int i= 0 ;i < dirs_string_size;i++ ){
        char current = dir[i];
        if(current == '/' || current =='\\'){
            total_dirs+=1;
            continue;
        }
        if(total_dirs == converted_start_index  &&!start_defined){
            start_point = i;
            start_defined = true;
        }

        if(total_dirs == (converted_end_index + 1)&&!end_defined){
            end_point = i;
            end_defined = true;
        }
    }
    char *buffer = private_dtw_sub_str(dir,start_point,end_point);
    return privateDtwStringArray_append_if_not_included(self->garbage,buffer);
}



int private_dtw_count_dirs_before(const char *dirs,int index){
    int total = 0;
    for(int i =index; i >=0; i--){
        char current_char = dirs[i];
        if(current_char == '\\' || current_char == '/' ){
            total+=1;
        }
    }
    return  total;
}

void DtwPath_insert_dir_at_index(DtwPath *self, int index, const char *dir){

    int size = DtwPath_get_total_dirs(self);
    int converted_index = (int)private_dtw_convert_index(index,size+1);

    if(converted_index == -1){
        return  ;
    }
    char * starter = NULL;
    if(converted_index > 0){
        starter = DtwPath_get_sub_dirs_from_index(self, 0, converted_index - 1);
    }

    const char *rest =NULL;
    if(converted_index < size){
        rest = DtwPath_get_sub_dirs_from_index(self, converted_index, -1);
    }


     char *buffer =NULL;
    if(starter && rest){
        buffer = private_dtw_formatt("%s/%s/%s",starter,dir,rest);
    }
    if(starter && rest==NULL){
        buffer = private_dtw_formatt("%s/%s",starter,dir);
    }
    if(starter == NULL && rest){
        buffer = private_dtw_formatt("%s/%s",dir,rest);
    }

    if(!starter && !rest){
        buffer = (char*)dir;
    }

    DtwPath_set_dir(self,buffer);

    if(starter || rest){
        free(buffer);
    }
}



void DtwPath_remove_sub_dirs_at_index(DtwPath *self, int start, int end){

    int size = DtwPath_get_total_dirs(self);
    if(size == 0){
        return ;
    }
    int converted_start_index = (int)private_dtw_convert_index(start, size);
    int converted_end_index = (int)private_dtw_convert_index(end, size);

    if(converted_start_index == -1  || converted_end_index == -1){
        return  ;
    }
    char *start_dir = NULL;
    if(converted_start_index != 0){
        start_dir = DtwPath_get_sub_dirs_from_index(self,0,converted_start_index-1);
    }

    char *end_dir = DtwPath_get_sub_dirs_from_index(self,converted_end_index+1,-1);

    if(start_dir != NULL  && end_dir != NULL){
        char *full_dir = dtw_concat_path(start_dir,end_dir);
        DtwPath_set_dir(self,full_dir);
        free(full_dir);
        return ;
    }
    if(start_dir != NULL){
        DtwPath_set_dir(self,start_dir);
    }

    if(end_dir != NULL){
        DtwPath_set_dir(self,end_dir);
    }


}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void DtwPath_insert_dir_after(DtwPath *self,const char *str,const char *dir){
    char *current_dir = DtwPath_get_dir(self);
    int index = (int)dtw_index_of_string(current_dir,str);
    if(index == -1){
        return;
    }

    int start = private_dtw_count_dirs_before(current_dir,index)+1;
    DtwPath_insert_dir_at_index(self, start, dir);
}

void DtwPath_insert_dir_before(DtwPath *self,const char *str,const char *dir){
    char *current_dir = DtwPath_get_dir(self);
    int index = (int)dtw_index_of_string(current_dir,str);
    if(index == -1){
        return;
    }
    int start = private_dtw_count_dirs_before(current_dir,index);
    DtwPath_insert_dir_at_index(self, start, dir);
}

void DtwPath_remove_sub_dirs_at(DtwPath *self,const char *str){
    char *current_dir = DtwPath_get_dir(self);
    int index = (int)dtw_index_of_string(current_dir,str);
    if(index == -1){
        return;
    }

    int start = private_dtw_count_dirs_before(current_dir,index);
    int end = private_dtw_count_dirs_before(current_dir,index+ (int)strlen(str));
    DtwPath_remove_sub_dirs_at_index(self, start, end - 1);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




void DtwPath_set_extension(struct DtwPath *self, const char *extension){

    const char *dir = DtwPath_get_dir(self);
    if(!dir){
        dir = "";
    }
    const char *name = DtwPath_get_name(self);
    if(!name){
        name = "";
    }
    free(self->path);
    char *formated_extension = dtw_replace_string(extension,".","");
    self->path= private_dtw_formatt("%s%s.%s",dir,name,formated_extension);
    free(formated_extension);
}


void DtwPath_set_name(struct DtwPath * self, const char * name){
    const char *dir = DtwPath_get_dir(self);
    if(!dir){
        dir = "";
    }
    char *extension = DtwPath_get_extension(self);
    free(self->path);

    if(extension){
        self->path = private_dtw_formatt("%s%s.%s",dir,name,extension);
    }
    if(!extension){
        self->path = private_dtw_formatt("%s%s",dir,name);
    }
}



void DtwPath_set_full_name(struct DtwPath * self, const char * full_name){
    const char *dir = DtwPath_get_dir(self);
    if(!dir){
        dir = "";
    }
    free(self->path);
    self->path = private_dtw_formatt("%s%s",dir,full_name);

}


void DtwPath_set_dir(struct DtwPath *self, const char *dir){
    const char * full_name = DtwPath_get_full_name(self);
    if(!full_name){
        full_name = "";
    }
    free(self->path);
    char *buffer = private_dtw_formatt("%s/%s",dir,full_name);
    self->path = private_dtw_format_path(buffer);
    free(buffer);

}


void DtwPath_set_path(struct DtwPath *self, const char *target_path) {
    free(self->path);
    self->path = private_dtw_format_path(target_path);
}


void DtwPath_add_start_dir(struct DtwPath *self, const char *start_dir){
    char *element = dtw_concat_path(start_dir,self->path);
    free(self->path);
    self->path = private_dtw_format_path(element);
    free(element);
}

void DtwPath_add_end_dir(struct DtwPath *self, const char *end_dir){
    const char *dir = DtwPath_get_dir(self);
    if(!dir){
        dir = "";
    }
    const char * full_name = DtwPath_get_full_name(self);
    if(!full_name){
        full_name = "";
    }
    free(self->path);

    char *buffer = private_dtw_formatt("%s/%s/%s",dir,end_dir,full_name);
    self->path = private_dtw_format_path(buffer);
    free(buffer);
}

void DtwPath_replace_dirs(DtwPath *self,const char *str,const char *dir){
    char *self_dir = DtwPath_get_dir(self);

    char *formatted_entry = NULL;
    if(dtw_starts_with(self_dir,str)){
       formatted_entry = private_dtw_formatt("%s/",dir);
    }
    else{
        formatted_entry = private_dtw_formatt("/%s/",dir);

    }
    char * formated_dir = dtw_replace_string(self_dir,str,formatted_entry);
    DtwPath_set_dir(self,formated_dir);
    free(formated_dir);
    free(formatted_entry);

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end






DtwRandonizer * newDtwRandonizer(){
    DtwRandonizer *self = (DtwRandonizer*) malloc(sizeof (DtwRandonizer));
    *self =(DtwRandonizer){0};

    #ifndef DTW_DEBUG_TIME

            #ifdef _WIN32
                FILETIME ft;
                LARGE_INTEGER li;

                GetSystemTimeAsFileTime(&ft);
                li.LowPart = ft.dwLowDateTime;
                li.HighPart = ft.dwHighDateTime;

                self->internal_seed = li.QuadPart;
                self->internal_seed ^= GetCurrentProcessId();
            #else
                struct timespec ts;
                clock_gettime(CLOCK_REALTIME, &ts);

                self->internal_seed = (uint64_t)ts.tv_sec + (uint64_t)ts.tv_nsec;
                self->internal_seed += getpid();
            #endif
    #endif
    return self;
}

int DtwRandonizer_generate_num(DtwRandonizer *self,int max) {
    self->actual_generation+=1;
    srand(  self->internal_seed + self->actual_generation + self->seed);
    int value = rand() % max;
    return value;
}
char * DtwRandonizer_generate_token(struct DtwRandonizer*self, int size){
    static const char chars[] =
            "abcdefghijklmnopqrstuvwxyz"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "0123456789";

    int total_size = sizeof(chars) - 1;
    char *token = (char*)malloc(size +1);

    for (int i = 0; i < size; ++i) {
        int index = DtwRandonizer_generate_num(self,total_size);
        token[i] = chars[index];
    }

    token[size] = '\0';
    return token;
}

void DtwRandonizer_free(struct DtwRandonizer *self){
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwDatabaseSchema *private_newDtwDtatabaseSchema(){
    DtwDatabaseSchema *self = (DtwDatabaseSchema*) malloc(sizeof (DtwDatabaseSchema));
    *self = (DtwDatabaseSchema){0};
    self->value_name = DTW_SCHEMA_DEFAULT_VALUES_NAME;
    self->index_name = DTW_SCHEMA_DEFAULT_INDEX_NAME;
    self->sub_schemas = (struct DtwSchema **)malloc(0);
    return  self;
}


DtwSchema * privateDtwDtatabaseSchema_get_sub_schema(DtwDatabaseSchema *self,const char *name){

    for(int i = 0; i < self->size; i++){
        DtwSchema  *current = self->sub_schemas[i];

        if(strcmp(current->name,name) == 0){
            return  current;
        }

    }
    return NULL;
}

DtwSchema * DtwDtatabaseSchema_new_subSchema(DtwDatabaseSchema *self,const char *name){
    DtwSchema *subSchema = private_newDtwSchema(name);
    self->sub_schemas = ( DtwSchema **) realloc(self->sub_schemas, (self->size + 1) * sizeof( DtwSchema *));
    self->sub_schemas[self->size] = subSchema;
    self->size+=1;
    return subSchema;
}



void private_new_DtwDtatabaseSchema_free(DtwDatabaseSchema *self){
    for (int i = 0; i < self->size; i++) {
        private_newDtwSchema_free((DtwSchema *) self->sub_schemas[i]);
    }
    free(self->sub_schemas);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResource *new_DtwResource(const char *path){
    DtwResource *self = (DtwResource*) malloc(sizeof (DtwResource));
    *self =(DtwResource){0};

    self->path = strdup(path);
    self->name = strdup(path);
    self->sub_resources = newDtwResourceArray();
    self->allow_transaction = true;
    self->use_locker_on_unique_values = true;
    self->cache_sub_resources = true;
    self->root_props = private_newDtwResourceRootProps();

    return self;
}

DtwResource * DtwResource_sub_resource(DtwResource *self,const  char *format, ...){
    if(DtwResource_error(self)){
        return NULL;
    }


    privateDtwResource_ensure_its_possible_to_sub_resource(self);

    if(DtwResource_error(self)){
        return NULL;
    }


    if(self->were_renamed){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_RENAMED_RESOURCE_CANNOT_HAVE_SONS,
                "you cannot create a sub resurce from a renamed resource",
                self->name
        );
        return NULL;
    }


    va_list args;
    va_start(args, format);
    char *name = private_dtw_format_vaarg(format,args);
    va_end(args);


    DtwResource * Already_Exist = DtwResourceArray_get_by_name((DtwResourceArray*)self->sub_resources,name);
    if(Already_Exist){
        free(name);
        return Already_Exist;
    }

    DtwResource *new_element = (DtwResource*) malloc(sizeof (DtwResource));
    *new_element =(DtwResource){0};

    if(self->schema_type == PRIVATE_DTW_SCHEMA_VALUE){
        new_element->schema_type = PRIVATE_DTW_SCHEMA_ELEMENT;
    }
    if(self->schema_type ==PRIVATE_DTW_SCHEMA_ELEMENT){
        new_element->schema_type = PRIVATE_DTW_SCHEMA_ELEMENT_PROP;
    }

    if(self->schema_type == PRIVATE_DTW_SCHEMA_INDEX){
        new_element->schema_type = PRIVATE_DTW_SCHEMA_PK_FOLDER;
    }
    if(self->schema_type == PRIVATE_DTW_SCHEMA_PK_FOLDER){
        new_element->schema_type = PRIVATE_DTW_SCHEMA_PK_VALUE;
    }



    new_element->allow_transaction = self->allow_transaction;
    new_element->use_locker_on_unique_values = self->use_locker_on_unique_values;
    new_element->root_props = self->root_props;
    //copied elements

    new_element->mother = self;
    new_element->path = dtw_concat_path(self->path, name);
    new_element->name = strdup(name);


    new_element->cache_sub_resources = self->cache_sub_resources;
    new_element->sub_resources = newDtwResourceArray();

    if(self->datatabase_schema && self->root_props->schema_unsafe == false){
        new_element->attached_schema = privateDtwDtatabaseSchema_get_sub_schema(self->datatabase_schema, name);
    }

    if(self->schema_type == PRIVATE_DTW_SCHEMA_ELEMENT){
        DtwResource * ancestor = self->mother->mother;
        new_element->attached_schema = privateDtwSchema_get_sub_schema(ancestor->attached_schema, name);
    }



    if(new_element->attached_schema){
        privateDtwSchemaUnsafe({
            new_element->schema_type = PRIVATE_DTW_SCHEMA_ROOT;
            new_element->values_resource = DtwResource_sub_resource(new_element,DTW_SCHEMA_DEFAULT_VALUES_NAME);
            new_element->values_resource->schema_type = PRIVATE_DTW_SCHEMA_VALUE;
            new_element->index_resource = DtwResource_sub_resource(new_element,DTW_SCHEMA_DEFAULT_INDEX_NAME);
            new_element->index_resource->schema_type = PRIVATE_DTW_SCHEMA_INDEX;
        })

    }



    if(self->cache_sub_resources){
        DtwResourceArray_append((DtwResourceArray*)self->sub_resources,new_element);
    }


    free(name);
    return new_element;

}
DtwResource * DtwResource_sub_resource_ensuring_not_exist(DtwResource *self,const  char *format, ...){
    if(DtwResource_error(self)){
        return NULL;
    }
    va_list args;
    va_start(args, format);
    char *name = private_dtw_format_vaarg(format,args);
    va_end(args);
;

    DtwResource *possible_emptiy  = DtwResourceArray_get_by_name(
            (DtwResourceArray*)self->sub_resources,
            name
    );
    if(possible_emptiy){
        free(name);
        return NULL;
    }

    bool old_cache_value = self->cache_sub_resources;
    self->cache_sub_resources = false;
    possible_emptiy = DtwResource_sub_resource(self,"%s",name);
    possible_emptiy->cache_sub_resources = old_cache_value;
    self->cache_sub_resources = old_cache_value;
    if(self->use_locker_on_unique_values){
        DtwResource_lock(possible_emptiy);
    }

    int type = DtwResource_type(possible_emptiy);

    if(type == DTW_NOT_FOUND){


            if(self->cache_sub_resources){
                DtwResourceArray_append((DtwResourceArray*)self->sub_resources,possible_emptiy);
            }
            free(name);
            return possible_emptiy;
    }
    DtwResource_unlock(possible_emptiy);
    DtwResource_free(possible_emptiy);
    free(name);
    return  NULL;

}

void DtwResource_free(DtwResource *self){
    if(!self){
        return;
    }

    bool is_root = self->mother == NULL;
    if(is_root){
        privateDtwResourceRootProps_free(self->root_props);
    }

    if(self->datatabase_schema){
        private_new_DtwDtatabaseSchema_free(self->datatabase_schema);
    }

    DtwResourceArray_free((DtwResourceArray*)self->sub_resources);



    if(self->value_any){
        free(self->value_any);
    }


    free(self->path);
    free(self->name);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResource * DtwResource_sub_resource_next(DtwResource *self, const char *end_path){
    if(DtwResource_error(self)){
        return NULL;
    }
    long  size = dtw_get_total_itens_of_dir(self->path);
    if(size < 0){
        size = 0;
    }
    while(true){

        char *path = NULL;
        if(end_path){
            path = private_dtw_realoc_formatting(path,"%ld%s",size,end_path);
        }

        else{
            path = private_dtw_realoc_formatting(path,"%ld",size);
        }

        DtwResource *new_element = DtwResource_sub_resource_ensuring_not_exist(
            self,"%s",
            path
        );
        free(path);

        if(DtwResource_error(self)){
            return NULL;
        }

        if(new_element){
            return new_element;
        }
        size = size+1;
    }
}


DtwResource * DtwResource_sub_resource_now(DtwResource *self, const char *end_path){
    if(DtwResource_error(self)){
        return NULL;
    }
    bool empty_already_exist = false;


    while(true){

        long now = dtw_get_time();
        char *time = dtw_convert_unix_time_to_string(now);
        char *path = NULL;

        if(empty_already_exist){
            char *token = DtwRandonizer_generate_token(self->root_props->randonizer,10);
            path = private_dtw_realoc_formatting(path,"%s--%s",time,token);
            free(token);
        }
        else{
            path = private_dtw_realoc_formatting(path,"%s",time);
        }

        free(time);

        if(end_path){
            path = private_dtw_realoc_formatting(path,"%s%s",path,end_path);
        }

        DtwResource *new_element = DtwResource_sub_resource_ensuring_not_exist(self,"%s",path);

        free(path);


        if(DtwResource_error(self)){
            return NULL;
        }
        if(new_element){
            return new_element;
        }
        empty_already_exist = true;
    }
}


DtwResource * DtwResource_sub_resource_now_in_unix(DtwResource *self, const char *end_path){
    if(DtwResource_error(self)){
        return NULL;
    }
    bool empty_already_exist = false;

    while(true){

        long now = dtw_get_time();
        char *path = NULL;

        if(empty_already_exist){
            char *token = DtwRandonizer_generate_token(self->root_props->randonizer,10);
            path = private_dtw_realoc_formatting(path,"%ld--%s",now,token);
            free(token);
        }
        else{
            path = private_dtw_realoc_formatting(path,"%ld",now);
        }

        if(end_path){
            path = private_dtw_realoc_formatting(path,"%s%s",path,end_path);
        }

        DtwResource *new_element = DtwResource_sub_resource_ensuring_not_exist(self,"%s",path);

        free(path);


        if(DtwResource_error(self)){
            return NULL;
        }
        if(new_element){
            return new_element;
        }
        empty_already_exist = true;
    }
}

DtwResource * DtwResource_sub_resource_random(DtwResource *self, const char *end_path){
    if(DtwResource_error(self)){
        return NULL;
    }
    while(true){

        char *path = NULL;
        char *token = DtwRandonizer_generate_token(self->root_props->randonizer,15);
        path = private_dtw_realoc_formatting(path,"%s",token);
        free(token);

        if(end_path){
            path = private_dtw_realoc_formatting(path,"%s%s",path,end_path);
        }

        DtwResource *new_element = DtwResource_sub_resource_ensuring_not_exist(self,"%s",path);
        free(path);
        if(DtwResource_error(self)){
            return NULL;
        }

        if(new_element){
            return new_element;
        }

    }
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void private_DtwResurce_destroy_primary_key(DtwResource *self) {


    if (!DtwResource_is_file(self)) {
        return;
    }

    DtwResource *root = self->mother->mother->mother;
    DtwResource *pk_index_folder = DtwResource_sub_resource(root->index_resource, "%s", self->name);
    long size;
    bool is_binary;
    unsigned char *possible_pk_value = DtwResource_get_any(self, &size, &is_binary);
    char *pk_sha = dtw_generate_sha_from_any(possible_pk_value, size);

    DtwResource *pk_index_value = DtwResource_sub_resource(pk_index_folder, "%s", pk_sha);

    if(DtwResource_error(self)){
        return;
    }

    free(pk_sha);
    if (self->allow_transaction) {
        DtwTransaction_delete_any(self->root_props->transaction, pk_index_value->path);
    } else {
        dtw_remove_any(pk_index_value->path);
    }


}
void private_DtwResource_destroy_all_primary_keys(DtwResource *self){
    DtwSchema * schema = (DtwSchema*)self->mother->mother->attached_schema;
    for(int i = 0; i < schema->primary_keys->size; i++){
        char *current_pk = schema->primary_keys->strings[i];
        DtwResource *son = DtwResource_sub_resource(self,"%s",current_pk);
        private_DtwResurce_destroy_primary_key(son);

        if(DtwResource_error(self)){
            return;
        }

    }
}
void DtwResource_destroy(DtwResource *self){
    if(DtwResource_error(self)){
        return;
    }


    if(self->schema_type == PRIVATE_DTW_SCHEMA_ELEMENT){
        privateDtwSchemaUnsafe({
            private_DtwResource_destroy_all_primary_keys(self);

        })
    }

    if(private_DtwResource_its_a_pk(self)){
        privateDtwSchemaUnsafe({
            private_DtwResurce_destroy_primary_key(self);
        })
    }

    if(DtwResource_error(self)){
        return;
    }

    if(self->root_props->schema_unsafe == false){
        if(
                self->schema_type == PRIVATE_DTW_SCHEMA_VALUE
                || self->schema_type == PRIVATE_DTW_SCHEMA_INDEX
                || self->schema_type == PRIVATE_DTW_SCHEMA_PK_FOLDER
                || self->schema_type == PRIVATE_DTW_SCHEMA_PK_VALUE
        ){
            private_DtwResource_raise_error(
                    self,
                    DTW_RESOURCE_ONLY_ROOT_SCHEMA_CANN_MODIFY_SCHEMA_PROPS,
                    "you cannot delete a internal schema part"
            );
        }
    }

    if(DtwResource_error(self)){
        return;
    }


    if(self->allow_transaction){
        DtwTransaction_delete_any(self->root_props->transaction,self->path);
    }
    else{
        dtw_remove_any(self->path);
    }

}

void DtwResource_destroy_sub_resource(DtwResource *self, const char *key){
    if(DtwResource_error(self)){
        return;
    }
    DtwResource *son = DtwResource_sub_resource(self, "%s",key);
    DtwResource_destroy(son);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





bool DtwResource_error(DtwResource *self){
    if(self==NULL){
        return true;
    }
    if(DtwResource_get_error_code(self) == DTW_RESOURCE_OK){
        return false;
    }
    return true;
}

void DtwResource_set_encryption(DtwResource *self,DtwEncriptionInterface *encryption_interface,short mode){
    if(DtwResource_error(self)){
        return;
    }
    self->root_props->encryption_interface = encryption_interface;
    self->root_props->encryption_mode = mode;
}

int DtwResource_get_error_code(DtwResource *self){
    if(self == NULL){
        return DTW_RESOURCE_ELEMENT_IS_NULL;
    }
    return self->root_props->error_code;
}
char * DtwResource_get_error_path(DtwResource *self){
    if(self == NULL){
        return NULL;
    }

    if(self->root_props == NULL){
        return NULL;
    }
    return self->root_props->error_path;
}


char * DtwResource_get_error_message(DtwResource *self){

    if(self== NULL){
        return (char*)"element its null";
    }

    return self->root_props->error_message;
}
void  DtwResource_clear_errors(DtwResource *self){
    if(!DtwResource_error(self)){
        return;
    }
    free(self->root_props->error_message);
    self->root_props->error_message = NULL;
    free(self->root_props->error_path);
    self->root_props->error_path = NULL;
    self->root_props->error_code = DTW_RESOURCE_OK;

}


void  private_DtwResource_raise_error(DtwResource *self, int error_code, const char *format,...){

    va_list args;
    va_start(args, format);
    char *error_message = private_dtw_format_vaarg(format,args);
    va_end(args);

    self->root_props->error_code = error_code;
    self->root_props->error_path = strdup(self->path);
    self->root_props->error_message = dtw_replace_string(error_message,"#path#",self->path);
    free(error_message);
}

void DtwResource_rename(DtwResource *self,const char *new_name){
    if(DtwResource_error(self)){
        return;
    }
    if(private_DtwResource_its_a_pk(self)){
        private_DtwResource_raise_error(
                self,
                DTW_IMPOSSIBLE_TO_RENAME_A_PRIMARY_KEY,
                "primary key %s cannot be renamed",
                self->name
        );
        return;
    }
    DtwResourceArray *sons =(DtwResourceArray*)self->sub_resources;
    if(sons->size > 0){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_RENAMED_RESOURCE_CANNOT_HAVE_SONS,
                "you cannot rename a resource with active sons",
                self->name
        );
        return;
    }

    self->were_renamed = true;
    char *old_path = strdup(self->path);
    free(self->path);
    free(self->name);

    if(self->mother){
        self->path  = dtw_concat_path(self->mother->path, new_name);
    }
    if(self->mother==NULL){
        self->path = strdup(new_name);
    }

    self->name = strdup(new_name);

    if(self->allow_transaction){
        DtwTransaction_move_any(self->root_props->transaction,old_path,self->path);
    }
    else{
        dtw_move_any(old_path,self->path,DTW_NOT_MERGE);
    }

    free(old_path);

}

void DtwResource_rename_sub_resource(DtwResource *self,const char *old_name,const  char *new_name){
    if(DtwResource_error(self)){
        return;
    }

    DtwResource *created = DtwResource_sub_resource(self,"name");
    DtwResource_rename(created,new_name);
}

int DtwResource_lock(DtwResource *self){
    if(DtwResource_error(self)){
        return -1;
    }
    return DtwLocker_lock(self->root_props->locker, self->path);
}

void DtwResource_unlock(DtwResource *self){
    if(DtwResource_error(self)){
        return ;
    }
    DtwLocker_unlock(self->root_props->locker, self->path);

}



void DtwResource_commit(DtwResource *self){
    if(DtwResource_error(self)){
        return ;
    }
    DtwTransaction *transaction = self->root_props->transaction;
    if(transaction == NULL){
        return;
    }
    DtwTransaction_set_encryption(transaction,self->root_props->encryption_interface,self->root_props->encryption_mode);
    DtwTransaction_commit(self->root_props->transaction,NULL);
}

long DtwResource_size(DtwResource *self){
    if(DtwResource_error(self)){
        return -1;
    }
    return dtw_get_total_itens_of_dir(self->path);
}



DtwStringArray *DtwResource_list_names(DtwResource *self){
    if(DtwResource_error(self)){
        return NULL;
    }
    return dtw_list_all(self->path,DTW_NOT_CONCAT_PATH);
}

int DtwResource_type(DtwResource *self){
    if(DtwResource_error(self)){
        return -1;
    }
    DtwResource_load_if_not_loaded(self);

    if(self->value_any == NULL){
        return dtw_entity_type(self->path);
    }

    if(self->value_size == 0){
        return DTW_COMPLEX_STRING_TYPE;
    }
    if(self->is_binary){
        return DTW_COMPLEX_BINARY;
    }

    char *data_in_string = DtwResource_get_string(self);

    if(
            strcmp(data_in_string,"t") == 0 || strcmp(data_in_string,"true") == 0  ||
                    strcmp(data_in_string,"f") == 0 || strcmp(data_in_string,"false") == 0

    ){
        return DTW_COMPLEX_BOOL_TYPE;
    }


    double data_double;
    int result = sscanf(data_in_string,"%lf",&data_double);
    if(result == 0){
        return DTW_COMPLEX_STRING_TYPE;

    }


    for(int i = 0; i < self->value_size; i++){
        char current = data_in_string[i];
        if(current == '.'){
            return  DTW_COMPLEX_DOUBLE_TYPE;
        }
    }
    return  DTW_COMPLEX_LONG_TYPE;

}
bool DtwResource_is_file(DtwResource *self){
    if(DtwResource_error(self)){
        return -1;
    }
    DtwResource_load_if_not_loaded(self);

    if(self->value_any){
        return true;
    }
    return  false;

}

const char * DtwResource_type_in_str(DtwResource *self){
    if(DtwResource_error(self)){
        return NULL;
    }
     return dtw_convert_entity(DtwResource_type(self));
}

void DtwResource_represent(DtwResource *self){
    if(DtwResource_error(self)){
        return;
    }

    if(DtwResource_error(self)){
        printf("error code: %d\n", DtwResource_get_error_code(self));
        printf("error message: %s\n", DtwResource_get_error_message(self));
        return ;
    }

    printf("path: %s\n", self->path);
    printf("name: %s\n",self->name);
    if(self->loaded){
        printf("type: %s\n",DtwResource_type_in_str(self));
        int type = DtwResource_type(self);
        if(type == DTW_COMPLEX_STRING_TYPE){
            printf("value: %s\n", DtwResource_get_string(self));
        }
        if(type == DTW_COMPLEX_LONG_TYPE){
            printf("value: %ld\n", DtwResource_get_long(self));
        }

        if(type == DTW_COMPLEX_DOUBLE_TYPE){
            printf("value: %lf\n", DtwResource_get_double(self));
        }

        if(type == DTW_COMPLEX_BOOL_TYPE){
            printf("value: %s\n",DtwResource_get_bool(self) ?"true": "false");
        }

    }


}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



unsigned char *DtwResource_get_any(DtwResource *self, long *size, bool *is_binary){
    if(DtwResource_error(self)){
        return NULL;
    }
    DtwResource_load_if_not_loaded(self);
    *size = self->value_size;
    *is_binary = self->is_binary;

    if(!self->value_any){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ELEMENT_NOT_EXIST,
                "element at #path# not exist"
                );
        return NULL;
    }

    return self->value_any;


}

unsigned char *DtwResource_get_any_from_sub_resource(DtwResource *self, long *size, bool *is_binary,const char *format,...){
    if(DtwResource_error(self)){
        return NULL;
    }
    va_list args;
    va_start(args, format);
    char *name = private_dtw_format_vaarg(format,args);
    va_end(args);

    DtwResource *element = DtwResource_sub_resource(self,"%s",name);
    free(name);
    return DtwResource_get_any(element,size,is_binary);

}

unsigned char *DtwResource_get_binary(DtwResource *self, long *size){
    if(DtwResource_error(self)){
        return NULL;
    }
    bool is_binary;

    return DtwResource_get_any(self,size,&is_binary);
}

unsigned char *DtwResource_get_binary_from_sub_resource(DtwResource *self, long *size,const char *format,...){
    if(DtwResource_error(self)){
        return NULL;
    }

    va_list args;
    va_start(args, format);
    char *name = private_dtw_format_vaarg(format,args);
    va_end(args);

    DtwResource *element = DtwResource_sub_resource(self,"%s",name);
    free(name);
    return DtwResource_get_binary(element,size);
}


char *DtwResource_get_string(DtwResource *self){
    if(DtwResource_error(self)){
        return NULL;
    }

    long size;
    bool is_binary;
    char *result =  (char *)DtwResource_get_any(self,&size,&is_binary);

    if(is_binary){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ELEMENT_NOT_STRING,
                "element at #path# its an binary"
        );
        return NULL;
    }

    return result;
}


char *DtwResource_get_string_from_sub_resource(DtwResource *self,const char *format,...){
    if(DtwResource_error(self)){
        return NULL;
    }

    va_list args;
    va_start(args, format);
    char *name = private_dtw_format_vaarg(format,args);
    va_end(args);


    DtwResource *element = DtwResource_sub_resource(self,"%s",name);
    free(name);
    return DtwResource_get_string(element);
}


long DtwResource_get_long(DtwResource *self){

    if(DtwResource_error(self)){
        return -1;
    }

    char *element = DtwResource_get_string(self);

    if(DtwResource_error(self)){
        return -1;
    }

    long value;
    int result = sscanf(element,"%ld",&value);
    if(result == 0){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ELEMENT_NOT_LONG,
                "element at #path# its not long"
        );
        return -1;
    }
    return value;
}


long DtwResource_get_long_from_sub_resource(DtwResource *self,const char *format,...){
    if(DtwResource_error(self)){
        return -1;
    }
    va_list args;
    va_start(args, format);
    char *name = private_dtw_format_vaarg(format,args);
    va_end(args);


    DtwResource *element = DtwResource_sub_resource(self,"%s",name);
    free(name);
    return DtwResource_get_long(element);
}


double DtwResource_get_double(DtwResource *self){
    if(DtwResource_error(self)){
        return -1;
    }

    char *element = DtwResource_get_string(self);
    if(DtwResource_error(self)){
        return -1;
    }

    double value;
    int result = sscanf(element,"%lf",&value);
    if(result == 0){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ELEMENT_NOT_DOUBLE,
                "element at #path# its not long"
        );
        return-1;
    }
    return value;
}

double DtwResource_get_double_from_sub_resource(DtwResource *self,const char *format,...){

    if(DtwResource_error(self)){
        return -1;
    }

    va_list args;
    va_start(args, format);
    char *name = private_dtw_format_vaarg(format,args);
    va_end(args);


    DtwResource *element = DtwResource_sub_resource(self,"%s",name);
    free(name);
    return DtwResource_get_double(element);
}


bool DtwResource_get_bool(DtwResource *self){
    if(DtwResource_error(self)){
        return false;
    }
    char *element = DtwResource_get_string(self);
    if(DtwResource_error(self)){
        return false;
    }

    if(strcmp(element,"true") == 0 || strcmp(element,"t") == 0){
        return true;
    }
    if(strcmp(element,"false") == 0 || strcmp(element,"f") == 0){
        return false;
    }

    private_DtwResource_raise_error(
            self,
            DTW_RESOURCE_ELEMENT_NOT_BOOL,
            "element at #path# its not bool"
    );
    return false;
}

bool DtwResource_get_bool_from_sub_resource(DtwResource *self,const char *format,...){
    if(DtwResource_error(self)){
        return false;
    }

    va_list args;
    va_start(args, format);
    char *name = private_dtw_format_vaarg(format,args);
    va_end(args);

    DtwResource *element = DtwResource_sub_resource(self,"%s",name);
    free(name);
    return DtwResource_get_bool(element);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwResourceForeachProps DtwResource_create_foreach_props( void(*callback)(DtwResource *item, void *args)){
    DtwResourceForeachProps props = {0};
    props.callback = callback;
    props.qtd = DTW_RESOURCE_ALL;
    return props;
}

void DtwResource_foreach(DtwResource *self,DtwResourceForeachProps props){
    if(DtwResource_error(self)){
        return;;
    }
    DtwResourceArray *itens = NULL;
    privateDtwSchemaUnsafe({
        itens = DtwResource_sub_resources(self);
    })

    if(DtwResource_error(self)){
        return;;
    }
    int total = 0;

    int total_skipded = 0;

    for(int i = 0; i < itens->size; i++){
        DtwResource *current = itens->resources[i];

        if(props.filtrage_callback){
            bool result = props.filtrage_callback(current, props.args);
            if(DtwResource_error(self)){
                return;;
            }
            if(!result){
                continue;
            }
        }

        total_skipded++;

        if(total_skipded <= props.start){
            continue;
        }

        total++;

        if(total > props.qtd && props.qtd != -1){
            break;
        }

        props.callback(current, props.args);
        if(DtwResource_error(self)){
            return;;
        }
    }
}

void DtwResource_schema_foreach(DtwResource *self,DtwResourceForeachProps props){

    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ONLY_ROOT_SCHEMA_HAVE_SCHEMA_VALUES,
                "only root schema have schema values"
        );
        return ;
    }
    DtwResource_foreach(self->values_resource,props);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef DTW_ALLOW_CHASH

DtwResourceCHashrrayMapProps  DtwResource_create_CHashrrayMapProps(    CHash *(*callback)(DtwResource *item, void *args)){
    DtwResourceCHashrrayMapProps props = {0};
    props.callback = callback;
    props.qtd = DTW_RESOURCE_ALL;
    return  props;
}

void  *private_dtw_CHashArray_callback(DtwResource *item,void *args) {
    DtwResourceCHashrrayMapProps *formmate_args = (DtwResourceCHashrrayMapProps*)args;
    return (void*)formmate_args->callback(item,formmate_args->args);
}

bool private_dtw_CHashArray_filtrage(DtwResource *item,void *args) {
    DtwResourceCHashrrayMapProps *formmate_args = (DtwResourceCHashrrayMapProps*)args;
    return formmate_args->filtrage_callback(item,formmate_args->args);
}

int private_dtw_CHashArray_ordenation(DtwResource *item1,DtwResource *item2,void *args) {
    DtwResourceCHashrrayMapProps *formmate_args = (DtwResourceCHashrrayMapProps*)args;
    return formmate_args->ordenation_callback(item1,item2,formmate_args->args);
}

void privateDtwResource_add_to_item_to_CHashArray_array(void* array, void *item){
    CHashArray_append_any((CHashArray*)array, (CHash *)item);
}

CHashArray *DtwResource_map_CHashArray(DtwResource *self,DtwResourceCHashrrayMapProps props){

    CHashArray *itens = newCHashArrayEmpty();

    DtwResourceMapProps map_props = DtwResource_create_map_props(
        itens,
        privateDtwResource_add_to_item_to_CHashArray_array,
        private_dtw_CHashArray_callback
    );

    map_props.args = (void*)&props;
    if(props.filtrage_callback) {
        map_props.filtrage_callback = private_dtw_CHashArray_filtrage;
    }
    if(props.qtd){
        map_props.qtd = props.qtd;
    }
    if(props.start){
        map_props.start = props.start;
    }

    if(props.ordenation_callback) {
        map_props.ordenation_callback = private_dtw_CHashArray_ordenation;
    }

    DtwResource_map(self,map_props);

    return itens;
}
CHashArray *DtwResource_schema_map_CHashArray(DtwResource *self,DtwResourceCHashrrayMapProps props){
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
            private_DtwResource_raise_error(
                    self,
                    DTW_RESOURCE_ONLY_ROOT_SCHEMA_HAVE_SCHEMA_VALUES,
                    "only root schema have schema values"
            );
            return NULL;
    }
    return DtwResource_map_CHashArray(self->values_resource,props);
}
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end

#ifdef DTW_ALLOW_CHASH


DtwResourceCHashObjectMapProps DtwResource_createCHashObjectMapProps(
    CHash *(*callback)(DtwResource *item, void *args),
    char* (*key_provider)(DtwResource *item, void *args_filter)
){
    DtwResourceCHashObjectMapProps props = {0};
    props.qtd = DTW_RESOURCE_ALL;
    props.callback = callback;
    props.key_provider_callback = key_provider;
    return props;
}


void  *private_dtw_CHashObject_callback(DtwResource *item,void *args) {
    DtwResourceCHashObjectMapProps *formmate_args = (DtwResourceCHashObjectMapProps*)args;
    privateDtw_CHash_element_and_key *created = (privateDtw_CHash_element_and_key*)malloc(sizeof(privateDtw_CHash_element_and_key));
    created->free_key = formmate_args->free_key;
    created->key = formmate_args->key_provider_callback(item,args);
    created->element =formmate_args->callback(item,formmate_args->args);
    return (void*)created;
}

bool private_dtw_CHashObject_filtrage(DtwResource *item,void *args) {
    DtwResourceCHashObjectMapProps *formmate_args = (DtwResourceCHashObjectMapProps*)args;
    return formmate_args->filtrage_callback(item,formmate_args->args);
}

int private_dtw_CHashObject_ordenation(DtwResource *item1,DtwResource *item2,void *args) {
    DtwResourceCHashObjectMapProps *formmate_args = (DtwResourceCHashObjectMapProps*)args;
    return formmate_args->ordenation_callback(item1,item2,formmate_args->args);
}

void privateDtwResource_add_to_item_to_CHashObject(void* object, void *item){
    privateDtw_CHash_element_and_key *casted = (privateDtw_CHash_element_and_key*)item;
    CHashObject_set_any((CHash*)object,casted->key,casted->element);
    if(casted->free_key){
        free(casted->key);
    }

    free(casted);
}


CHash *DtwResource_map_CHashObject(DtwResource *self,DtwResourceCHashObjectMapProps props){

    CHash *itens = newCHashObjectEmpty();

    DtwResourceMapProps map_props = DtwResource_create_map_props(
        itens,
        privateDtwResource_add_to_item_to_CHashObject,
        private_dtw_CHashObject_callback
    );
    map_props.args = (void*)&props;
    if(props.filtrage_callback) {
        map_props.filtrage_callback = private_dtw_CHashObject_filtrage;
    }

    if(props.qtd){
        map_props.qtd = props.qtd;
    }
    if(props.start){
        map_props.start = props.start;
    }

    if(props.ordenation_callback) {
        map_props.ordenation_callback = private_dtw_CHashObject_ordenation;
    }
    DtwResource_map(self,map_props);

    return itens;
}

CHash *DtwResource_schema_map_CHashObject(DtwResource *self,DtwResourceCHashObjectMapProps props){
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
            private_DtwResource_raise_error(
                    self,
                    DTW_RESOURCE_ONLY_ROOT_SCHEMA_HAVE_SCHEMA_VALUES,
                    "only root schema have schema values"
            );
            return NULL;
    }

    return DtwResource_map_CHashObject(self->values_resource,props);

}
#endif

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


DtwResourcecJSONArrayMapProps DtwResource_create_cJSONArrayMapProps(cJSON *(*callback)(DtwResource *item, void *args)){
    DtwResourcecJSONArrayMapProps props = {0};
    props.callback= callback;
    props.qtd =DTW_RESOURCE_ALL;
    return  props;
}

void  *private_dtw_cJSONArray_callback(DtwResource *item,void *args) {

    DtwResourcecJSONArrayMapProps *formmate_args = (DtwResourcecJSONArrayMapProps*)args;
    return (void*)formmate_args->callback(item,formmate_args->args);
}

bool private_dtw_cJSONArray_filtrage(DtwResource *item,void *args) {

    DtwResourcecJSONArrayMapProps *formmate_args = (DtwResourcecJSONArrayMapProps*)args;
    return formmate_args->filtrage_callback(item,formmate_args->args);
}

int private_dtw_cJSONArray_ordenation(DtwResource *item1,DtwResource *item2,void *args) {
    DtwResourcecJSONArrayMapProps *formmate_args = (DtwResourcecJSONArrayMapProps*)args;
    return formmate_args->ordenation_callback(item1,item2,formmate_args->args);
}

void privateDtwResource_add_to_item_to_cJSONArray_array(void* array, void *item){
    cJSON_AddItemToArray((cJSON *)array, (cJSON *)item);
}

cJSON *DtwResource_map_cJSONArray(DtwResource *self,DtwResourcecJSONArrayMapProps props){

    cJSON *itens = cJSON_CreateArray();

    DtwResourceMapProps mapped_props = DtwResource_create_map_props(
        itens,
        privateDtwResource_add_to_item_to_cJSONArray_array,
        private_dtw_cJSONArray_callback
    );

    mapped_props.args = (void*)&props;

    if(props.filtrage_callback) {
        mapped_props.filtrage_callback = private_dtw_cJSONArray_filtrage;
    }

    if(props.ordenation_callback) {
        mapped_props.ordenation_callback = private_dtw_cJSONArray_ordenation;
    }
    
    if(props.qtd){
        mapped_props.qtd = props.qtd;
    }
    if(props.start){
        mapped_props.start = props.start;
    }

    DtwResource_map(self,mapped_props);

    return itens;
}

cJSON *DtwResource_schema_map_cJSONArray(DtwResource *self,DtwResourcecJSONArrayMapProps props){
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
            private_DtwResource_raise_error(
                    self,
                    DTW_RESOURCE_ONLY_ROOT_SCHEMA_HAVE_SCHEMA_VALUES,
                    "only root schema have schema values"
            );
            return NULL;
    }
    return  DtwResource_map_cJSONArray(self->values_resource, props);

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwResourcecJSONObjectMapProps DtwResource_create_cJSONObjectProps(
    cJSON *(*callback)(DtwResource *item, void *args),
    char *(*key_provider_callback)(DtwResource *item,void *args)
){
    DtwResourcecJSONObjectMapProps props = {0};
    props.callback  = callback;
    props.key_provider_callback = key_provider_callback;
    props.qtd = DTW_RESOURCE_ALL;
    return  props;
}

void  *private_dtw_cJSONObject_callback(DtwResource *item,void *args) {
    DtwResourcecJSONObjectMapProps *formmate_args = (DtwResourcecJSONObjectMapProps*)args;
    privateDtw_cJSON_element_and_key *created = (privateDtw_cJSON_element_and_key*)malloc(sizeof(privateDtw_cJSON_element_and_key));
    created->key = formmate_args->key_provider_callback(item,args);
    created->free_key = formmate_args->free_key;
    created->element =formmate_args->callback(item,formmate_args->args);
    return (void*)created;
}

bool private_dtw_cJSONObject_filtrage(DtwResource *item,void *args) {
    DtwResourcecJSONObjectMapProps *formmate_args = (DtwResourcecJSONObjectMapProps*)args;
    return formmate_args->filtrage_callback(item,formmate_args->args);
}

int private_dtw_cJSONObject_ordenation(DtwResource *item1,DtwResource *item2,void *args) {
    DtwResourcecJSONObjectMapProps *formmate_args = (DtwResourcecJSONObjectMapProps*)args;
    return formmate_args->ordenation_callback(item1,item2,formmate_args->args);
}

void privateDtwResource_add_to_item_to_cJSONObject(void* object, void *item){
    privateDtw_cJSON_element_and_key *casted = (privateDtw_cJSON_element_and_key*)item;
    cJSON_AddItemToObject((cJSON*)object,casted->key,casted->element);
    if(casted->free_key){
        free(casted->key);
    }
    free(casted);
}


cJSON *DtwResource_map_cJSONObject(DtwResource *self,DtwResourcecJSONObjectMapProps props){

    cJSON *itens = cJSON_CreateObject();

    DtwResourceMapProps map_props = DtwResource_create_map_props(
        itens,
        privateDtwResource_add_to_item_to_cJSONObject,
        private_dtw_cJSONObject_callback
    );
    map_props.args = (void*)&props;
    if(props.filtrage_callback) {
        map_props.filtrage_callback = private_dtw_cJSONObject_filtrage;
    }

    if(props.ordenation_callback) {
        map_props.ordenation_callback = private_dtw_cJSONObject_ordenation;
    }
    if(props.qtd){
        map_props.qtd = props.qtd;
    }
    if(props.start){
        map_props.start = props.start;
    }
    DtwResource_map(self,map_props);

    return itens;
}

cJSON *DtwResource_schema_map_cJSONObject(DtwResource *self,DtwResourcecJSONObjectMapProps props){
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
            private_DtwResource_raise_error(
                    self,
                    DTW_RESOURCE_ONLY_ROOT_SCHEMA_HAVE_SCHEMA_VALUES,
                    "only root schema have schema values"
            );
            return NULL;
    }
    return  DtwResource_map_cJSONObject(self->values_resource,props);

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwResourceMapProps DtwResource_create_map_props(
    void *main_array,
    void(*append)(void *main_array_arg, void *item),
    void *(*callback)(DtwResource *item, void *args)
){
    DtwResourceMapProps props = {0};
    props.main_array = main_array;
    props.append = append;
    props.callback = callback;
    props.qtd = DTW_RESOURCE_ALL;
    return  props;
}

int  private_dtwResource_compare(const void *item1,const void*item2){
    privateDtwResource_map_element *item1_converted = *(privateDtwResource_map_element**)item1;
    privateDtwResource_map_element *item2_converted = *(privateDtwResource_map_element**)item2;

    return item1_converted->ordenation_callback(item1_converted->current,item2_converted->current,item1_converted->args);
}

void DtwResource_map(DtwResource *self,DtwResourceMapProps props){
    //printf("%p\n",ordenation_callback);
    if(DtwResource_error(self)){
        return;;
    }

    DtwResourceArray *itens = NULL;
    privateDtwSchemaUnsafe({
        itens = DtwResource_sub_resources(self);
    })

    if(DtwResource_error(self)){
        return;
    }

    privateDtwResource_map_element **mapped_elements= NULL;
    int total_mapped_elements = 0;
    if(props.ordenation_callback) {
        mapped_elements = (privateDtwResource_map_element**)malloc(
            (itens->size+1) * sizeof(privateDtwResource_map_element**)
            );
    }

    int total = 0;
    int total_skipded = 0;
    for(int i = 0; i < itens->size; i++){

        DtwResource *current = itens->resources[i];

        if(props.filtrage_callback){
            bool result = props.filtrage_callback(current, props.args);
            if(DtwResource_error(self)){
                return;;
            }
            if(!result){
                continue;
            }
        }

        total_skipded++;

        if(total_skipded <= props.start){
            continue;
        }

        if(total + 1 > props.qtd && props.qtd != -1){
            break;
        }

        void* result = props.callback(current, props.args);
        if(DtwResource_error(self)){
            if(result){
                props.append(props.main_array,result);
            }
            return;
        }
        if(result == NULL){
            continue;
        }
        total+=1;

        if(props.ordenation_callback == NULL) {
            props.append(props.main_array,result);
            if(DtwResource_error(self)){
                return;;
            }
        }

        if(props.ordenation_callback){
            privateDtwResource_map_element *created  = (privateDtwResource_map_element*)malloc(sizeof(privateDtwResource_map_element));
            *created = (privateDtwResource_map_element){0};
            created->result = result;
            created->current = current;
            created->ordenation_callback = props.ordenation_callback;
            created->args =props.args;
          //  printf("criado %p\n",created);
            mapped_elements[total_mapped_elements] = created;
            total_mapped_elements+=1;
        }

    }

    if(props.ordenation_callback) {

        qsort(
            mapped_elements,
            total_mapped_elements,
            sizeof(privateDtwResource_map_element*),
            private_dtwResource_compare
            );
        if(DtwResource_error(self)){
            return;;
        }
        for(int i = 0; i< total_mapped_elements; i++) {
            privateDtwResource_map_element *current = mapped_elements[i];
            props.append(props.main_array,current->result);
            free(current);
        }
        free(mapped_elements);
    }


}
void DtwResource_schema_map(DtwResource *self,DtwResourceMapProps props){

    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
            private_DtwResource_raise_error(
                    self,
                    DTW_RESOURCE_ONLY_ROOT_SCHEMA_HAVE_SCHEMA_VALUES,
                    "only root schema have schema values"
            );
            return ;
        }

        DtwResource_map(self->values_resource, props);

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




void DtwResource_unload(DtwResource *self){
    if(DtwResource_error(self)){
        return ;
    }
    if(self->loaded == false){
        return;
    }
    if(self->value_any){
        free(self->value_any);
    }

    self->value_any = NULL;
    self->is_binary = false;
    self->value_size = 0;
}

void DtwResource_load(DtwResource *self){
    if(DtwResource_error(self)){
        return ;
    }
    DtwResource_unload(self);

    if(self->root_props->encryption_interface){
        self->value_any = private_DtwEncriptionInterface_load_any_content_custom_mode(self->root_props->encryption_interface,self->path,&self->value_size,&self->is_binary,self->root_props->encryption_mode);
    }
    else{
        self->value_any = dtw_load_any_content(self->path,&self->value_size,&self->is_binary);
    }
    self->loaded = true;

}
void DtwResource_load_if_not_loaded(DtwResource *self){
    if(DtwResource_error(self)){
        return ;
    }
    if(self->loaded == false){
        DtwResource_load(self);
    }
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#include <time.h>


DtwResourceArray * DtwResource_get_schema_values(DtwResource *self){
    if(DtwResource_error(self)){
        return NULL;
    }
    privateDtwSchemaUnsafe({
        if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
            private_DtwResource_raise_error(
                    self,
                    DTW_RESOURCE_ONLY_ROOT_SCHEMA_HAVE_SCHEMA_VALUES,
                    "only root schema have schema values"
            );
            DtwSchemaRebase
            return NULL;
        }

        DtwResourceArray *elements =  DtwResource_sub_resources(self->values_resource);
        DtwSchemaRebase
        return elements;
    })


}


DtwResourceArray * DtwResource_sub_resources(DtwResource *self){


    DtwStringArray  *names  = DtwResource_list_names(self);
    DtwStringArray_sort(names);
    DtwResourceArray *target_array = (DtwResourceArray*)self->sub_resources;

    if(self->cache_sub_resources == false){
        target_array = newDtwResourceArray();
    }

    for(int i = 0; i < names->size; i++){

        char *current_name = names->strings[i];

        if(self->cache_sub_resources){
            DtwResource_sub_resource(self,"%s", current_name);
            if(DtwResource_error(self)){
                DtwStringArray_free(names);
                return NULL;
            }
        }

        else{
            DtwResource *current_resource = DtwResource_sub_resource(self,"%s",current_name);
            DtwResourceArray_append(target_array,current_resource);
            if(DtwResource_error(self)){
                DtwStringArray_free(names);
                return NULL;
;
            }
        }
    }

    DtwStringArray_free(names);
    return target_array;

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



bool private_DtwResource_its_a_pk(DtwResource *self){
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ELEMENT_PROP){
        return false;
    }
    DtwResource *ancestor = self->mother->mother->mother;
    DtwSchema * schema = ancestor->attached_schema;
    return DtwStringArray_find_position(schema->primary_keys,self->name) !=-1;
}

void privateDtwResource_ensure_its_possible_to_sub_resource(DtwResource *self){

    if(self->root_props->schema_unsafe){
        return;
    }

    if(self->schema_type == 0){

        return;
    }


    if(self->schema_type != PRIVATE_DTW_SCHEMA_ELEMENT && self->schema_type != PRIVATE_DTW_SCHEMA_ELEMENT_PROP){

        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_IMPOSSIBLE_TO_ADD_SUB_RESOURCE_INSIDE_SCHEMA_STRUCT,
                "impossible to add sub resource inside schema struct "
        );
        return ;
    }

    if(private_DtwResource_its_a_pk(self)){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_PRIMARY_KEY_CANNOT_HAVE_SUB_RESOURCE,
                "primary key %s cannot have a sub resource",
                self->name
        );
        return;
    }

}


DtwResource * DtwResource_new_schema_insertion(DtwResource *self){

    if(DtwResource_error(self)){
        return NULL;
    }
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT || self->datatabase_schema){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_IMPSSIBLE_TO_ADD_INSERTION_OUTSIDE_ROOT_SCHEMA,
                "only root schema can generate insertions");
        return NULL;
    }
    privateDtwSchemaUnsafe({
        DtwResource  *created = DtwResource_sub_resource_random(self->values_resource,NULL);
        DtwSchemaRebase
        return created;
    })


}

DtwResource  *DtwResource_find_by_name_id(DtwResource *self, const char *name){

    if(DtwResource_error(self)){
        return NULL;
    }
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ONLY_ROOT_SCHEMA_CAN_FIND_BY_ID_OR_PK,
                "only root schema can find by id or pk"
                );
        return NULL;
    }
    privateDtwSchemaUnsafe({
        DtwResource *element = DtwResource_sub_resource(self->values_resource,name);

        if(DtwResource_type(element) == DTW_NOT_FOUND){
            DtwSchemaRebase
            return NULL;
        }
        DtwSchemaRebase
        return element;
    })

}
DtwResource * DtwResource_find_by_primary_key_with_binary(DtwResource *self, const char *primary_key, unsigned  char *value, long size){
    if(DtwResource_error(self)){
        return NULL;
    }
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ONLY_ROOT_SCHEMA_CAN_FIND_BY_ID_OR_PK,
                "only root schema can find by id or pk"
                );
        return NULL;
    }
    privateDtwSchemaUnsafe({
        DtwResource *primary_key_folder = DtwResource_sub_resource(self->index_resource, "%s", primary_key);
        char *sha = dtw_generate_sha_from_any(value,size);
        DtwResource *index_value = DtwResource_sub_resource(primary_key_folder,"%s",sha);
        free(sha);
        if(DtwResource_type(index_value) == DTW_NOT_FOUND){
            DtwSchemaRebase
            return NULL;
        }
        char *element_folder = DtwResource_get_string(index_value);
        if(DtwResource_error(self)){
            DtwSchemaRebase
            return NULL;
        }
        if(element_folder == NULL){
            DtwSchemaRebase
            return NULL;
        }

        DtwResource *founded_resource = DtwResource_sub_resource(self->values_resource, "%s", element_folder);
        DtwSchemaRebase
        return founded_resource;
    })


}



DtwResource * DtwResource_find_by_primary_key_with_string(DtwResource *self, const char *key, const char *value){
    if(DtwResource_error(self)){
        return NULL;
    }
    return DtwResource_find_by_primary_key_with_binary(self,key,(unsigned char*)value, (long)strlen(value));
}


void DtwResource_dangerous_remove_schema_prop(DtwResource*self,const char *prop){
    if(DtwResource_error(self)){
        return ;
    }
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ONLY_ROOT_SCHEMA_CANN_MODIFY_SCHEMA_PROPS,
                "only root schema can modify schema props"
        );
        return;
    }
    privateDtwSchemaUnsafe({

        bool allow_transaction = self->allow_transaction;

            DtwResourceArray * all_values = DtwResource_sub_resources(self->values_resource);
            DtwTransaction * transaction = self->root_props->transaction;
            for(int i = 0; i < all_values->size; i++){
                DtwResource *current = all_values->resources[i];
                DtwResource *prop_to_remove = DtwResource_sub_resource(current,"%s",prop);
                if(allow_transaction){
                    DtwTransaction_delete_any(transaction,prop_to_remove->path);
                }else{
                    dtw_remove_any(prop_to_remove->path);
                }

            }
            DtwResource *index_element = DtwResource_sub_resource(self->index_resource,"%s",prop);
            if(allow_transaction){
                DtwTransaction_delete_any(transaction,index_element->path);
            }else{
                dtw_remove_any(index_element->path);
            }
            DtwSchemaRebase
    })

}


void DtwResource_dangerous_rename_schema_prop(DtwResource*self,const char *prop,const char *new_name){
    if(DtwResource_error(self)){
        return ;
    }
    if(self->schema_type != PRIVATE_DTW_SCHEMA_ROOT){
        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_ONLY_ROOT_SCHEMA_CANN_MODIFY_SCHEMA_PROPS,
                "only root schema can modify schema props"
        );
        return;
    }
    privateDtwSchemaUnsafe({
        bool allow_transaction = self->allow_transaction;

        DtwResourceArray * all_values = DtwResource_sub_resources(self->values_resource);
        DtwTransaction * transaction = self->root_props->transaction;
        for(int i = 0; i < all_values->size; i++){
            DtwResource *current = all_values->resources[i];
            DtwResource *prop_to_remove = DtwResource_sub_resource(current,"%s",prop);
            DtwResource *new_prop = DtwResource_sub_resource(current,"%s",new_name);
            if(allow_transaction){
                DtwTransaction_move_any_merging(transaction,prop_to_remove->path,new_prop->path);
            }else{
                dtw_move_any(prop_to_remove->path,new_prop->path,DTW_MERGE);
            }

        }


        DtwResource *index_element = DtwResource_sub_resource(self->index_resource,"%s",prop);
        DtwResource *new_index = DtwResource_sub_resource(self->index_resource,"%s",new_name);
        if(allow_transaction){
            DtwTransaction_move_any_merging(transaction,index_element->path,new_index->path);
        }else{
            dtw_move_any(index_element->path,new_index->path,DTW_MERGE);
        }
        DtwSchemaRebase
    })


}



DtwDatabaseSchema * DtwResource_newDatabaseSchema(DtwResource *self){
    if(DtwResource_error(self)){
        return  NULL;
    }
    privateDtwResource_ensure_its_possible_to_sub_resource(self);

    if(DtwResource_error(self)){
        return  NULL;
    }

    if(self->datatabase_schema){
        return self->datatabase_schema;
    }

    self->datatabase_schema = private_newDtwDtatabaseSchema();
    return self->datatabase_schema;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




void private_dtw_resource_set_primary_key(DtwResource *self, unsigned  char *element, long size){

privateDtwSchemaUnsafe({
    DtwResource * ancestor = self->mother->mother->mother;
    DtwResource *index_resource =ancestor->index_resource;
    DtwResource *pk_folder = DtwResource_sub_resource(index_resource,"%s",self->name);

    char *sha = dtw_generate_sha_from_any(element,size);
    DtwResource  *pk_value = DtwResource_sub_resource(pk_folder,sha);
    free(sha);
    char *mothers_name =self->mother->name;

    if(DtwResource_is_file(pk_value)) {
        char *content = DtwResource_get_string(pk_value);
        if (DtwResource_error(self)) {
            DtwSchemaRebase
            return;
        }

        //means its the same
        if (strcmp(content, mothers_name) == 0) {
            DtwSchemaRebase
            return;
        }

        private_DtwResource_raise_error(
                self,
                DTW_RESOURCE_PRIMARY_KEY_ALREADY_EXIST,
                "primary key: %s already exist",
                self->name
        );
        DtwSchemaRebase
        return;

    }
    DtwResource_set_string(pk_value,mothers_name);
    DtwSchemaRebase
})

}
void DtwResource_set_any(DtwResource *self, unsigned char *element, long size,bool is_binary){
    if(DtwResource_error(self)){
        return ;
    }
    DtwResource_unload(self);

    if(private_DtwResource_its_a_pk(self)){
        private_dtw_resource_set_primary_key(self, element, size);
    }

    if(DtwResource_error(self)){
        return;
    }

    if(self->allow_transaction){
        DtwTransaction_write_any(self->root_props->transaction,self->path,element,size,is_binary);
    }
    else{
        if(self->root_props->encryption_interface){
            DtwEncriptionInterface_write_any_content(self->root_props->encryption_interface,self->path,element,size);
        }
        else{
            dtw_write_any_content(self->path,element,size);
        }
    }

    self->loaded = true;
    self->value_size = size;
    self->is_binary = is_binary;
    self->value_any = (unsigned  char *) malloc(size+1);

    self->value_any[size]= '\0';
    memcpy(self->value_any,element,size);
}
void DtwResource_set_binary(DtwResource *self, unsigned char *element, long size){
    DtwResource_set_any(self,element,size,true);
}

void DtwResource_set_string(DtwResource *self,const  char *element){
    DtwResource_set_any(self,(unsigned char *)element,strlen(element),false);
}

void DtwResource_set_binary_sha(DtwResource *self, unsigned  char *value, long size){
    if(DtwResource_error(self)){
        return ;
    }
    char *generated_sha = dtw_generate_sha_from_any(value,size);
    DtwResource_set_string(self,generated_sha);
    free(generated_sha);
}

void DtwResource_set_string_sha(DtwResource *self,const char *value){
    if(DtwResource_error(self)){
        return ;
    }
    DtwResource_set_binary_sha(self,(unsigned char*)value, (long)strlen(value));
}








void DtwResource_set_long(DtwResource *self,long element){
    if(DtwResource_error(self)){
        return ;
    }
    if(self->allow_transaction){
        DtwTransaction_write_long(self->root_props->transaction,self->path,element);
    }
    else{
        dtw_write_long_file_content(self->path,element);
    }
    DtwResource_unload(self);
    self->loaded = true;
    char result[20] ={0};
    sprintf(result,"%ld",element);
    self->value_any = (unsigned char *)strdup(result);

}

void DtwResource_set_double(DtwResource *self,double element){
    if(DtwResource_error(self)){
        return ;
    }
    if(self->allow_transaction){
        DtwTransaction_write_double(self->root_props->transaction,self->path,element);
    }
    else{
        dtw_write_double_file_content(self->path,element);
    }
    DtwResource_unload(self);
    self->loaded = true;
    char result[20] ={0};
    sprintf(result,"%lf",element);
    self->value_any = (unsigned char *)strdup(result);


}

void DtwResource_set_bool( DtwResource *self,bool element){
    if(DtwResource_error(self)){
        return ;
    }
    if(self->allow_transaction){
        DtwTransaction_write_bool(self->root_props->transaction,self->path,element);
    }
    else{
        dtw_write_bool_file_content(self->path,element);
    }

    DtwResource_unload(self);
    self->loaded = true;
    if(element){
        self->value_any = (unsigned char*)strdup("true");
    }
    else{
        self->value_any = (unsigned char*)strdup("false");

    }

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void DtwResource_set_any_in_sub_resource(DtwResource *self,const char *key, unsigned char *element, long size,bool is_binary) {
    if(DtwResource_error(self)){
        return ;
    }

    DtwResource *created = DtwResource_sub_resource(self,"%s",key);
    DtwResource_set_any(created, element, size,is_binary);
}

void DtwResource_set_binary_in_sub_resource(DtwResource *self,const char *key, unsigned char *element, long size){
    if(DtwResource_error(self)){
        return ;
    }

    DtwResource *created = DtwResource_sub_resource(self,"%s",key);
    DtwResource_set_binary(created, element, size);
}

void DtwResource_set_binary_sha_in_sub_resource(DtwResource *self, const char *key, unsigned  char *value, long size){
    if(DtwResource_error(self)){
        return ;
    }
    DtwResource *created = DtwResource_sub_resource(self,"%s",key);
    DtwResource_set_binary_sha(created,value,size);
}


void DtwResource_set_string_sha_in_sub_resource(DtwResource *self, const char *key, const char *value){
    if(DtwResource_error(self)){
        return ;
    }
    DtwResource *created = DtwResource_sub_resource(self,"%s",key);
    DtwResource_set_string_sha(created,value);
}

void DtwResource_set_string_in_sub_resource(DtwResource *self, const char *key, const  char *element){
    if(DtwResource_error(self)){
        return ;
    }

    DtwResource *created = DtwResource_sub_resource(self,"%s",key);
    DtwResource_set_string(created,element);
}

void DtwResource_set_long_in_sub_resource(DtwResource *self, const char *key, long element){
    if(DtwResource_error(self)){
        return ;
    }
    DtwResource *created = DtwResource_sub_resource(self,"%s",key);
    DtwResource_set_long(created,element);
}

void DtwResource_set_double_in_sub_resource(DtwResource *self, const char *key, double element){
    if(DtwResource_error(self)){
        return ;
    }

    DtwResource *created = DtwResource_sub_resource(self,"%s",key);
    DtwResource_set_double(created,element);
}

void DtwResource_set_bool_in_sub_resource(DtwResource *self,const char *key, bool element){
    if(DtwResource_error(self)){
        return ;
    }

    DtwResource *created = DtwResource_sub_resource(self,"%s",key);
    DtwResource_set_bool(created,element);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





DtwResourceArray * newDtwResourceArray(){
    DtwResourceArray *self = (DtwResourceArray*) malloc(sizeof (DtwResourceArray));
    self->resources = (DtwResource**) malloc(0);
    self->size = 0;
    return self;
}


void DtwResourceArray_append(DtwResourceArray *self, DtwResource *element){
    self->resources = (DtwResource**)realloc(self->resources,(self->size +1) * sizeof (DtwResource**));
    self->resources[self->size] = element;
    self->size+=1;
}


DtwResource* DtwResourceArray_get_by_name(DtwResourceArray *self, const char *name){
    for(int i = 0; i < self->size; i++){
        DtwResource *current = self->resources[i];
        if(strcmp(current->name,name) ==0){
            return current;
        }
    }
    return NULL;
}



void DtwResourceArray_represent(DtwResourceArray *self){
    for(int i = 0; i< self->size; i++){
        printf("----------------------------------------\n");
        DtwResource_represent(self->resources[i]);
    }
}

void DtwResourceArray_free(DtwResourceArray *self){
    for(int i = 0; i < self->size; i++){
        DtwResource_free(self->resources[i]);

    }
    free(self->resources);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




privateDtwResourceRootProps *private_newDtwResourceRootProps(){
    privateDtwResourceRootProps *self  = (privateDtwResourceRootProps*) malloc(sizeof (privateDtwResourceRootProps));
    *self = (privateDtwResourceRootProps){0};
    self->transaction = newDtwTransaction();
    self->randonizer = newDtwRandonizer();
    self->locker = newDtwLocker();
    self->error_code = DTW_RESOURCE_OK;

    return self;
}


void privateDtwResourceRootProps_free(privateDtwResourceRootProps *self){
    DtwTransaction_free(self->transaction);
    DtwRandonizer_free(self->randonizer);
    DtwLocker_free(self->locker);
    if(self->error_path){
        free(self->error_path);
    }

    if(self->error_message){
        free(self->error_message);
    }



    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwSchema *private_newDtwSchema(const char *name){
    DtwSchema *self = (DtwSchema*) malloc(sizeof (DtwSchema));
    *self = (DtwSchema){0};
    self->value_name = DTW_SCHEMA_DEFAULT_VALUES_NAME;
    self->index_name = DTW_SCHEMA_DEFAULT_INDEX_NAME;
    self->sub_schemas = ( DtwSchema **)malloc(0);
    if(name){
        self->primary_keys = newDtwStringArray();
        self->name = strdup(name);
    }

    return  self;
}


DtwSchema * privateDtwSchema_get_sub_schema(DtwSchema *self,const char *name){

    for(int i = 0; i < self->size; i++){
        DtwSchema  *current = self->sub_schemas[i];

        if(strcmp(current->name,name) == 0){
            return  current;
        }
    }
    return NULL;
}

DtwSchema * DtwSchema_new_subSchema(DtwSchema *self,const char *name){
    DtwSchema *subSchema = private_newDtwSchema(name);
    self->sub_schemas = ( DtwSchema **) realloc(self->sub_schemas, (self->size + 1) * sizeof( DtwSchema *));
    self->sub_schemas[self->size] = subSchema;
    self->size+=1;
    return subSchema;
}


void DtwSchema_add_primary_key(DtwSchema *self,const char *name){
    DtwStringArray_append(self->primary_keys,name);
}

void private_newDtwSchema_free(DtwSchema *self){


    for (int i = 0; i < self->size; i++) {
        private_newDtwSchema_free((DtwSchema *) self->sub_schemas[i]);
    }

    free(self->sub_schemas);
    if(self->name){
        free(self->name);
    }
    if(self->primary_keys){
        DtwStringArray_free(self->primary_keys);
    }
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




char * calc_sha_256_returning_string(const void *input, size_t len)
{


    uint8_t hash[SIZE_OF_SHA_256_HASH];
    calc_sha_256(hash, input, len);
    char *hash_string = (char*)malloc(SIZE_OF_SHA_256_HASH * 2 + 1);
    for (unsigned int i = 0; i < SIZE_OF_SHA_256_HASH; i++) {
        sprintf(hash_string + i * 2, "%02x", hash[i]);
    }
    return hash_string;
}

void  calc_sha_256_from_string(uint8_t hash[SIZE_OF_SHA_256_HASH], const char *input)
{
    calc_sha_256(hash, input, strlen(input));

}

char * calc_sha_256_from_string_returning_string(const char *input)
{
    return calc_sha_256_returning_string(input, strlen(input));
}

int calc_sha_256_from_file(uint8_t hash[SIZE_OF_SHA_256_HASH], const char *filename)
{
    int size;
    char *content = sha256_open_file(filename, &size);
    if(content == NULL){
        return -1;
    }
    calc_sha_256(hash, content, size);
    free(content);
    return 0;
}

char * calc_sha_256_from_file_returning_string(const char *filename)
{
    int size;
    char *content = sha256_open_file(filename, &size);
    if(content == NULL){
        return NULL;
    }
    char *hash_string = calc_sha_256_returning_string(content, size);
    free(content);
    return hash_string;

}
char * sha256_open_file(const char *filename, int *size){
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        return NULL;
    }
    fseek(file,0,SEEK_END);
    *size = ftell(file);
    fseek(file,0,SEEK_SET);
    char *content = (char*)malloc(*size +1);
    fread(content,1,*size,file);
    fclose(file);
    return content;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end


#if !defined(DTW_MOCK_CJSON_DEFINE) && defined(DTW_CJSON_IMPLEMENTED)
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

/* cJSON */
/* JSON parser in C. */

/* disable warnings about old C89 functions in MSVC */
#if !defined(_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER)
#define _CRT_SECURE_NO_DEPRECATE
#endif

#ifdef __GNUC__
#pragma GCC visibility push(default)
#endif
#if defined(_MSC_VER)
#pragma warning (push)
/* disable warning about single line comments in system headers */
#pragma warning (disable : 4001)
#endif

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <float.h>

#ifdef ENABLE_LOCALES
#include <locale.h>
#endif

#if defined(_MSC_VER)
#pragma warning (pop)
#endif
#ifdef __GNUC__
#pragma GCC visibility pop
#endif



/* define our own boolean type */
#ifdef true
#undef true
#endif
#define true ((cJSON_bool)1)

#ifdef false
#undef false
#endif
#define false ((cJSON_bool)0)

/* define isnan and isinf for ANSI C, if in C99 or above, isnan and isinf has been defined in math.h */
#ifndef isinf
#define isinf(d) (isnan((d - d)) && !isnan(d))
#endif
#ifndef isnan
#define isnan(d) (d != d)
#endif

#ifndef NAN
#ifdef _WIN32
#define NAN sqrt(-1.0)
#else
#define NAN 0.0/0.0
#endif
#endif

typedef struct {
    const unsigned char *json;
    size_t position;
} error;
static error global_error = { NULL, 0 };

CJSON_PUBLIC(const char *) cJSON_GetErrorPtr(void)
{
    return (const char*) (global_error.json + global_error.position);
}

CJSON_PUBLIC(char *) cJSON_GetStringValue(const cJSON * const item)
{
    if (!cJSON_IsString(item))
    {
        return NULL;
    }

    return item->valuestring;
}

CJSON_PUBLIC(double) cJSON_GetNumberValue(const cJSON * const item)
{
    if (!cJSON_IsNumber(item))
    {
        return (double) NAN;
    }

    return item->valuedouble;
}

/* This is a safeguard to prevent copy-pasters from using incompatible C and header files */
#if (CJSON_VERSION_MAJOR != 1) || (CJSON_VERSION_MINOR != 7) || (CJSON_VERSION_PATCH != 18)
    #error cJSON.h and cJSON.c have different versions. Make sure that both have the same.
#endif

CJSON_PUBLIC(const char*) cJSON_Version(void)
{
    static char version[15];
    sprintf(version, "%i.%i.%i", CJSON_VERSION_MAJOR, CJSON_VERSION_MINOR, CJSON_VERSION_PATCH);

    return version;
}

/* Case insensitive string comparison, doesn't consider two NULL pointers equal though */
static int case_insensitive_strcmp(const unsigned char *string1, const unsigned char *string2)
{
    if ((string1 == NULL) || (string2 == NULL))
    {
        return 1;
    }

    if (string1 == string2)
    {
        return 0;
    }

    for(; tolower(*string1) == tolower(*string2); (void)string1++, string2++)
    {
        if (*string1 == '\0')
        {
            return 0;
        }
    }

    return tolower(*string1) - tolower(*string2);
}

typedef struct internal_hooks
{
    void *(CJSON_CDECL *allocate)(size_t size);
    void (CJSON_CDECL *deallocate)(void *pointer);
    void *(CJSON_CDECL *reallocate)(void *pointer, size_t size);
} internal_hooks;

#if defined(_MSC_VER)
/* work around MSVC error C2322: '...' address of dllimport '...' is not static */
static void * CJSON_CDECL internal_malloc(size_t size)
{
    return malloc(size);
}
static void CJSON_CDECL internal_free(void *pointer)
{
    free(pointer);
}
static void * CJSON_CDECL internal_realloc(void *pointer, size_t size)
{
    return realloc(pointer, size);
}
#else
#define internal_malloc malloc
#define internal_free free
#define internal_realloc realloc
#endif

/* strlen of character literals resolved at compile time */
#define static_strlen(string_literal) (sizeof(string_literal) - sizeof(""))

static internal_hooks global_hooks = { internal_malloc, internal_free, internal_realloc };

static unsigned char* cJSON_strdup(const unsigned char* string, const internal_hooks * const hooks)
{
    size_t length = 0;
    unsigned char *copy = NULL;

    if (string == NULL)
    {
        return NULL;
    }

    length = strlen((const char*)string) + sizeof("");
    copy = (unsigned char*)hooks->allocate(length);
    if (copy == NULL)
    {
        return NULL;
    }
    memcpy(copy, string, length);

    return copy;
}

CJSON_PUBLIC(void) cJSON_InitHooks(cJSON_Hooks* hooks)
{
    if (hooks == NULL)
    {
        /* Reset hooks */
        global_hooks.allocate = malloc;
        global_hooks.deallocate = free;
        global_hooks.reallocate = realloc;
        return;
    }

    global_hooks.allocate = malloc;
    if (hooks->malloc_fn != NULL)
    {
        global_hooks.allocate = hooks->malloc_fn;
    }

    global_hooks.deallocate = free;
    if (hooks->free_fn != NULL)
    {
        global_hooks.deallocate = hooks->free_fn;
    }

    /* use realloc only if both free and malloc are used */
    global_hooks.reallocate = NULL;
    if ((global_hooks.allocate == malloc) && (global_hooks.deallocate == free))
    {
        global_hooks.reallocate = realloc;
    }
}

/* Internal constructor. */
static cJSON *cJSON_New_Item(const internal_hooks * const hooks)
{
    cJSON* node = (cJSON*)hooks->allocate(sizeof(cJSON));
    if (node)
    {
        memset(node, '\0', sizeof(cJSON));
    }

    return node;
}

/* Delete a cJSON structure. */
CJSON_PUBLIC(void) cJSON_Delete(cJSON *item)
{
    cJSON *next = NULL;
    while (item != NULL)
    {
        next = item->next;
        if (!(item->type & cJSON_IsReference) && (item->child != NULL))
        {
            cJSON_Delete(item->child);
        }
        if (!(item->type & cJSON_IsReference) && (item->valuestring != NULL))
        {
            global_hooks.deallocate(item->valuestring);
            item->valuestring = NULL;
        }
        if (!(item->type & cJSON_StringIsConst) && (item->string != NULL))
        {
            global_hooks.deallocate(item->string);
            item->string = NULL;
        }
        global_hooks.deallocate(item);
        item = next;
    }
}

/* get the decimal point character of the current locale */
static unsigned char get_decimal_point(void)
{
#ifdef ENABLE_LOCALES
    struct lconv *lconv = localeconv();
    return (unsigned char) lconv->decimal_point[0];
#else
    return '.';
#endif
}

typedef struct
{
    const unsigned char *content;
    size_t length;
    size_t offset;
    size_t depth; /* How deeply nested (in arrays/objects) is the input at the current offset. */
    internal_hooks hooks;
} parse_buffer;

/* check if the given size is left to read in a given parse buffer (starting with 1) */
#define can_read(buffer, size) ((buffer != NULL) && (((buffer)->offset + size) <= (buffer)->length))
/* check if the buffer can be accessed at the given index (starting with 0) */
#define can_access_at_index(buffer, index) ((buffer != NULL) && (((buffer)->offset + index) < (buffer)->length))
#define cannot_access_at_index(buffer, index) (!can_access_at_index(buffer, index))
/* get a pointer to the buffer at the position */
#define buffer_at_offset(buffer) ((buffer)->content + (buffer)->offset)

/* Parse the input text to generate a number, and populate the result into item. */
static cJSON_bool parse_number(cJSON * const item, parse_buffer * const input_buffer)
{
    double number = 0;
    unsigned char *after_end = NULL;
    unsigned char number_c_string[64];
    unsigned char decimal_point = get_decimal_point();
    size_t i = 0;

    if ((input_buffer == NULL) || (input_buffer->content == NULL))
    {
        return false;
    }

    /* copy the number into a temporary buffer and replace '.' with the decimal point
     * of the current locale (for strtod)
     * This also takes care of '\0' not necessarily being available for marking the end of the input */
    for (i = 0; (i < (sizeof(number_c_string) - 1)) && can_access_at_index(input_buffer, i); i++)
    {
        switch (buffer_at_offset(input_buffer)[i])
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '+':
            case '-':
            case 'e':
            case 'E':
                number_c_string[i] = buffer_at_offset(input_buffer)[i];
                break;

            case '.':
                number_c_string[i] = decimal_point;
                break;

            default:
                goto loop_end;
        }
    }
loop_end:
    number_c_string[i] = '\0';

    number = strtod((const char*)number_c_string, (char**)&after_end);
    if (number_c_string == after_end)
    {
        return false; /* parse_error */
    }

    item->valuedouble = number;

    /* use saturation in case of overflow */
    if (number >= INT_MAX)
    {
        item->valueint = INT_MAX;
    }
    else if (number <= (double)INT_MIN)
    {
        item->valueint = INT_MIN;
    }
    else
    {
        item->valueint = (int)number;
    }

    item->type = cJSON_Number;

    input_buffer->offset += (size_t)(after_end - number_c_string);
    return true;
}

/* don't ask me, but the original cJSON_SetNumberValue returns an integer or double */
CJSON_PUBLIC(double) cJSON_SetNumberHelper(cJSON *object, double number)
{
    if (number >= INT_MAX)
    {
        object->valueint = INT_MAX;
    }
    else if (number <= (double)INT_MIN)
    {
        object->valueint = INT_MIN;
    }
    else
    {
        object->valueint = (int)number;
    }

    return object->valuedouble = number;
}

/* Note: when passing a NULL valuestring, cJSON_SetValuestring treats this as an error and return NULL */
CJSON_PUBLIC(char*) cJSON_SetValuestring(cJSON *object, const char *valuestring)
{
    char *copy = NULL;
    /* if object's type is not cJSON_String or is cJSON_IsReference, it should not set valuestring */
    if ((object == NULL) || !(object->type & cJSON_String) || (object->type & cJSON_IsReference))
    {
        return NULL;
    }
    /* return NULL if the object is corrupted or valuestring is NULL */
    if (object->valuestring == NULL || valuestring == NULL)
    {
        return NULL;
    }
    if (strlen(valuestring) <= strlen(object->valuestring))
    {
        strcpy(object->valuestring, valuestring);
        return object->valuestring;
    }
    copy = (char*) cJSON_strdup((const unsigned char*)valuestring, &global_hooks);
    if (copy == NULL)
    {
        return NULL;
    }
    if (object->valuestring != NULL)
    {
        cJSON_free(object->valuestring);
    }
    object->valuestring = copy;

    return copy;
}

typedef struct
{
    unsigned char *buffer;
    size_t length;
    size_t offset;
    size_t depth; /* current nesting depth (for formatted printing) */
    cJSON_bool noalloc;
    cJSON_bool format; /* is this print a formatted print */
    internal_hooks hooks;
} printbuffer;

/* realloc printbuffer if necessary to have at least "needed" bytes more */
static unsigned char* ensure(printbuffer * const p, size_t needed)
{
    unsigned char *newbuffer = NULL;
    size_t newsize = 0;

    if ((p == NULL) || (p->buffer == NULL))
    {
        return NULL;
    }

    if ((p->length > 0) && (p->offset >= p->length))
    {
        /* make sure that offset is valid */
        return NULL;
    }

    if (needed > INT_MAX)
    {
        /* sizes bigger than INT_MAX are currently not supported */
        return NULL;
    }

    needed += p->offset + 1;
    if (needed <= p->length)
    {
        return p->buffer + p->offset;
    }

    if (p->noalloc) {
        return NULL;
    }

    /* calculate new buffer size */
    if (needed > (INT_MAX / 2))
    {
        /* overflow of int, use INT_MAX if possible */
        if (needed <= INT_MAX)
        {
            newsize = INT_MAX;
        }
        else
        {
            return NULL;
        }
    }
    else
    {
        newsize = needed * 2;
    }

    if (p->hooks.reallocate != NULL)
    {
        /* reallocate with realloc if available */
        newbuffer = (unsigned char*)p->hooks.reallocate(p->buffer, newsize);
        if (newbuffer == NULL)
        {
            p->hooks.deallocate(p->buffer);
            p->length = 0;
            p->buffer = NULL;

            return NULL;
        }
    }
    else
    {
        /* otherwise reallocate manually */
        newbuffer = (unsigned char*)p->hooks.allocate(newsize);
        if (!newbuffer)
        {
            p->hooks.deallocate(p->buffer);
            p->length = 0;
            p->buffer = NULL;

            return NULL;
        }

        memcpy(newbuffer, p->buffer, p->offset + 1);
        p->hooks.deallocate(p->buffer);
    }
    p->length = newsize;
    p->buffer = newbuffer;

    return newbuffer + p->offset;
}

/* calculate the new length of the string in a printbuffer and update the offset */
static void update_offset(printbuffer * const buffer)
{
    const unsigned char *buffer_pointer = NULL;
    if ((buffer == NULL) || (buffer->buffer == NULL))
    {
        return;
    }
    buffer_pointer = buffer->buffer + buffer->offset;

    buffer->offset += strlen((const char*)buffer_pointer);
}

/* securely comparison of floating-point variables */
static cJSON_bool compare_double(double a, double b)
{
    double maxVal = fabs(a) > fabs(b) ? fabs(a) : fabs(b);
    return (fabs(a - b) <= maxVal * DBL_EPSILON);
}

/* Render the number nicely from the given item into a string. */
static cJSON_bool print_number(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    double d = item->valuedouble;
    int length = 0;
    size_t i = 0;
    unsigned char number_buffer[26] = {0}; /* temporary buffer to print the number into */
    unsigned char decimal_point = get_decimal_point();
    double test = 0.0;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* This checks for NaN and Infinity */
    if (isnan(d) || isinf(d))
    {
        length = sprintf((char*)number_buffer, "null");
    }
	else if(d == (double)item->valueint)
	{
		length = sprintf((char*)number_buffer, "%d", item->valueint);
	}
    else
    {
        /* Try 15 decimal places of precision to avoid nonsignificant nonzero digits */
        length = sprintf((char*)number_buffer, "%1.15g", d);

        /* Check whether the original double can be recovered */
        if ((sscanf((char*)number_buffer, "%lg", &test) != 1) || !compare_double((double)test, d))
        {
            /* If not, print with 17 decimal places of precision */
            length = sprintf((char*)number_buffer, "%1.17g", d);
        }
    }

    /* sprintf failed or buffer overrun occurred */
    if ((length < 0) || (length > (int)(sizeof(number_buffer) - 1)))
    {
        return false;
    }

    /* reserve appropriate space in the output */
    output_pointer = ensure(output_buffer, (size_t)length + sizeof(""));
    if (output_pointer == NULL)
    {
        return false;
    }

    /* copy the printed number to the output and replace locale
     * dependent decimal point with '.' */
    for (i = 0; i < ((size_t)length); i++)
    {
        if (number_buffer[i] == decimal_point)
        {
            output_pointer[i] = '.';
            continue;
        }

        output_pointer[i] = number_buffer[i];
    }
    output_pointer[i] = '\0';

    output_buffer->offset += (size_t)length;

    return true;
}

/* parse 4 digit hexadecimal number */
static unsigned parse_hex4(const unsigned char * const input)
{
    unsigned int h = 0;
    size_t i = 0;

    for (i = 0; i < 4; i++)
    {
        /* parse digit */
        if ((input[i] >= '0') && (input[i] <= '9'))
        {
            h += (unsigned int) input[i] - '0';
        }
        else if ((input[i] >= 'A') && (input[i] <= 'F'))
        {
            h += (unsigned int) 10 + input[i] - 'A';
        }
        else if ((input[i] >= 'a') && (input[i] <= 'f'))
        {
            h += (unsigned int) 10 + input[i] - 'a';
        }
        else /* invalid */
        {
            return 0;
        }

        if (i < 3)
        {
            /* shift left to make place for the next nibble */
            h = h << 4;
        }
    }

    return h;
}

/* converts a UTF-16 literal to UTF-8
 * A literal can be one or two sequences of the form \uXXXX */
static unsigned char utf16_literal_to_utf8(const unsigned char * const input_pointer, const unsigned char * const input_end, unsigned char **output_pointer)
{
    long unsigned int codepoint = 0;
    unsigned int first_code = 0;
    const unsigned char *first_sequence = input_pointer;
    unsigned char utf8_length = 0;
    unsigned char utf8_position = 0;
    unsigned char sequence_length = 0;
    unsigned char first_byte_mark = 0;

    if ((input_end - first_sequence) < 6)
    {
        /* input ends unexpectedly */
        goto fail;
    }

    /* get the first utf16 sequence */
    first_code = parse_hex4(first_sequence + 2);

    /* check that the code is valid */
    if (((first_code >= 0xDC00) && (first_code <= 0xDFFF)))
    {
        goto fail;
    }

    /* UTF16 surrogate pair */
    if ((first_code >= 0xD800) && (first_code <= 0xDBFF))
    {
        const unsigned char *second_sequence = first_sequence + 6;
        unsigned int second_code = 0;
        sequence_length = 12; /* \uXXXX\uXXXX */

        if ((input_end - second_sequence) < 6)
        {
            /* input ends unexpectedly */
            goto fail;
        }

        if ((second_sequence[0] != '\\') || (second_sequence[1] != 'u'))
        {
            /* missing second half of the surrogate pair */
            goto fail;
        }

        /* get the second utf16 sequence */
        second_code = parse_hex4(second_sequence + 2);
        /* check that the code is valid */
        if ((second_code < 0xDC00) || (second_code > 0xDFFF))
        {
            /* invalid second half of the surrogate pair */
            goto fail;
        }


        /* calculate the unicode codepoint from the surrogate pair */
        codepoint = 0x10000 + (((first_code & 0x3FF) << 10) | (second_code & 0x3FF));
    }
    else
    {
        sequence_length = 6; /* \uXXXX */
        codepoint = first_code;
    }

    /* encode as UTF-8
     * takes at maximum 4 bytes to encode:
     * 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx */
    if (codepoint < 0x80)
    {
        /* normal ascii, encoding 0xxxxxxx */
        utf8_length = 1;
    }
    else if (codepoint < 0x800)
    {
        /* two bytes, encoding 110xxxxx 10xxxxxx */
        utf8_length = 2;
        first_byte_mark = 0xC0; /* 11000000 */
    }
    else if (codepoint < 0x10000)
    {
        /* three bytes, encoding 1110xxxx 10xxxxxx 10xxxxxx */
        utf8_length = 3;
        first_byte_mark = 0xE0; /* 11100000 */
    }
    else if (codepoint <= 0x10FFFF)
    {
        /* four bytes, encoding 1110xxxx 10xxxxxx 10xxxxxx 10xxxxxx */
        utf8_length = 4;
        first_byte_mark = 0xF0; /* 11110000 */
    }
    else
    {
        /* invalid unicode codepoint */
        goto fail;
    }

    /* encode as utf8 */
    for (utf8_position = (unsigned char)(utf8_length - 1); utf8_position > 0; utf8_position--)
    {
        /* 10xxxxxx */
        (*output_pointer)[utf8_position] = (unsigned char)((codepoint | 0x80) & 0xBF);
        codepoint >>= 6;
    }
    /* encode first byte */
    if (utf8_length > 1)
    {
        (*output_pointer)[0] = (unsigned char)((codepoint | first_byte_mark) & 0xFF);
    }
    else
    {
        (*output_pointer)[0] = (unsigned char)(codepoint & 0x7F);
    }

    *output_pointer += utf8_length;

    return sequence_length;

fail:
    return 0;
}

/* Parse the input text into an unescaped cinput, and populate item. */
static cJSON_bool parse_string(cJSON * const item, parse_buffer * const input_buffer)
{
    const unsigned char *input_pointer = buffer_at_offset(input_buffer) + 1;
    const unsigned char *input_end = buffer_at_offset(input_buffer) + 1;
    unsigned char *output_pointer = NULL;
    unsigned char *output = NULL;

    /* not a string */
    if (buffer_at_offset(input_buffer)[0] != '\"')
    {
        goto fail;
    }

    {
        /* calculate approximate size of the output (overestimate) */
        size_t allocation_length = 0;
        size_t skipped_bytes = 0;
        while (((size_t)(input_end - input_buffer->content) < input_buffer->length) && (*input_end != '\"'))
        {
            /* is escape sequence */
            if (input_end[0] == '\\')
            {
                if ((size_t)(input_end + 1 - input_buffer->content) >= input_buffer->length)
                {
                    /* prevent buffer overflow when last input character is a backslash */
                    goto fail;
                }
                skipped_bytes++;
                input_end++;
            }
            input_end++;
        }
        if (((size_t)(input_end - input_buffer->content) >= input_buffer->length) || (*input_end != '\"'))
        {
            goto fail; /* string ended unexpectedly */
        }

        /* This is at most how much we need for the output */
        allocation_length = (size_t) (input_end - buffer_at_offset(input_buffer)) - skipped_bytes;
        output = (unsigned char*)input_buffer->hooks.allocate(allocation_length + sizeof(""));
        if (output == NULL)
        {
            goto fail; /* allocation failure */
        }
    }

    output_pointer = output;
    /* loop through the string literal */
    while (input_pointer < input_end)
    {
        if (*input_pointer != '\\')
        {
            *output_pointer++ = *input_pointer++;
        }
        /* escape sequence */
        else
        {
            unsigned char sequence_length = 2;
            if ((input_end - input_pointer) < 1)
            {
                goto fail;
            }

            switch (input_pointer[1])
            {
                case 'b':
                    *output_pointer++ = '\b';
                    break;
                case 'f':
                    *output_pointer++ = '\f';
                    break;
                case 'n':
                    *output_pointer++ = '\n';
                    break;
                case 'r':
                    *output_pointer++ = '\r';
                    break;
                case 't':
                    *output_pointer++ = '\t';
                    break;
                case '\"':
                case '\\':
                case '/':
                    *output_pointer++ = input_pointer[1];
                    break;

                /* UTF-16 literal */
                case 'u':
                    sequence_length = utf16_literal_to_utf8(input_pointer, input_end, &output_pointer);
                    if (sequence_length == 0)
                    {
                        /* failed to convert UTF16-literal to UTF-8 */
                        goto fail;
                    }
                    break;

                default:
                    goto fail;
            }
            input_pointer += sequence_length;
        }
    }

    /* zero terminate the output */
    *output_pointer = '\0';

    item->type = cJSON_String;
    item->valuestring = (char*)output;

    input_buffer->offset = (size_t) (input_end - input_buffer->content);
    input_buffer->offset++;

    return true;

fail:
    if (output != NULL)
    {
        input_buffer->hooks.deallocate(output);
        output = NULL;
    }

    if (input_pointer != NULL)
    {
        input_buffer->offset = (size_t)(input_pointer - input_buffer->content);
    }

    return false;
}

/* Render the cstring provided to an escaped version that can be printed. */
static cJSON_bool print_string_ptr(const unsigned char * const input, printbuffer * const output_buffer)
{
    const unsigned char *input_pointer = NULL;
    unsigned char *output = NULL;
    unsigned char *output_pointer = NULL;
    size_t output_length = 0;
    /* numbers of additional characters needed for escaping */
    size_t escape_characters = 0;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* empty string */
    if (input == NULL)
    {
        output = ensure(output_buffer, sizeof("\"\""));
        if (output == NULL)
        {
            return false;
        }
        strcpy((char*)output, "\"\"");

        return true;
    }

    /* set "flag" to 1 if something needs to be escaped */
    for (input_pointer = input; *input_pointer; input_pointer++)
    {
        switch (*input_pointer)
        {
            case '\"':
            case '\\':
            case '\b':
            case '\f':
            case '\n':
            case '\r':
            case '\t':
                /* one character escape sequence */
                escape_characters++;
                break;
            default:
                if (*input_pointer < 32)
                {
                    /* UTF-16 escape sequence uXXXX */
                    escape_characters += 5;
                }
                break;
        }
    }
    output_length = (size_t)(input_pointer - input) + escape_characters;

    output = ensure(output_buffer, output_length + sizeof("\"\""));
    if (output == NULL)
    {
        return false;
    }

    /* no characters have to be escaped */
    if (escape_characters == 0)
    {
        output[0] = '\"';
        memcpy(output + 1, input, output_length);
        output[output_length + 1] = '\"';
        output[output_length + 2] = '\0';

        return true;
    }

    output[0] = '\"';
    output_pointer = output + 1;
    /* copy the string */
    for (input_pointer = input; *input_pointer != '\0'; (void)input_pointer++, output_pointer++)
    {
        if ((*input_pointer > 31) && (*input_pointer != '\"') && (*input_pointer != '\\'))
        {
            /* normal character, copy */
            *output_pointer = *input_pointer;
        }
        else
        {
            /* character needs to be escaped */
            *output_pointer++ = '\\';
            switch (*input_pointer)
            {
                case '\\':
                    *output_pointer = '\\';
                    break;
                case '\"':
                    *output_pointer = '\"';
                    break;
                case '\b':
                    *output_pointer = 'b';
                    break;
                case '\f':
                    *output_pointer = 'f';
                    break;
                case '\n':
                    *output_pointer = 'n';
                    break;
                case '\r':
                    *output_pointer = 'r';
                    break;
                case '\t':
                    *output_pointer = 't';
                    break;
                default:
                    /* escape and print as unicode codepoint */
                    sprintf((char*)output_pointer, "u%04x", *input_pointer);
                    output_pointer += 4;
                    break;
            }
        }
    }
    output[output_length + 1] = '\"';
    output[output_length + 2] = '\0';

    return true;
}

/* Invoke print_string_ptr (which is useful) on an item. */
static cJSON_bool print_string(const cJSON * const item, printbuffer * const p)
{
    return print_string_ptr((unsigned char*)item->valuestring, p);
}

/* Predeclare these prototypes. */
static cJSON_bool parse_value(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_value(const cJSON * const item, printbuffer * const output_buffer);
static cJSON_bool parse_array(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_array(const cJSON * const item, printbuffer * const output_buffer);
static cJSON_bool parse_object(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_object(const cJSON * const item, printbuffer * const output_buffer);

/* Utility to jump whitespace and cr/lf */
static parse_buffer *buffer_skip_whitespace(parse_buffer * const buffer)
{
    if ((buffer == NULL) || (buffer->content == NULL))
    {
        return NULL;
    }

    if (cannot_access_at_index(buffer, 0))
    {
        return buffer;
    }

    while (can_access_at_index(buffer, 0) && (buffer_at_offset(buffer)[0] <= 32))
    {
       buffer->offset++;
    }

    if (buffer->offset == buffer->length)
    {
        buffer->offset--;
    }

    return buffer;
}

/* skip the UTF-8 BOM (byte order mark) if it is at the beginning of a buffer */
static parse_buffer *skip_utf8_bom(parse_buffer * const buffer)
{
    if ((buffer == NULL) || (buffer->content == NULL) || (buffer->offset != 0))
    {
        return NULL;
    }

    if (can_access_at_index(buffer, 4) && (strncmp((const char*)buffer_at_offset(buffer), "\xEF\xBB\xBF", 3) == 0))
    {
        buffer->offset += 3;
    }

    return buffer;
}

CJSON_PUBLIC(cJSON *) cJSON_ParseWithOpts(const char *value, const char **return_parse_end, cJSON_bool require_null_terminated)
{
    size_t buffer_length;

    if (NULL == value)
    {
        return NULL;
    }

    /* Adding null character size due to require_null_terminated. */
    buffer_length = strlen(value) + sizeof("");

    return cJSON_ParseWithLengthOpts(value, buffer_length, return_parse_end, require_null_terminated);
}

/* Parse an object - create a new root, and populate. */
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLengthOpts(const char *value, size_t buffer_length, const char **return_parse_end, cJSON_bool require_null_terminated)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    cJSON *item = NULL;

    /* reset error position */
    global_error.json = NULL;
    global_error.position = 0;

    if (value == NULL || 0 == buffer_length)
    {
        goto fail;
    }

    buffer.content = (const unsigned char*)value;
    buffer.length = buffer_length;
    buffer.offset = 0;
    buffer.hooks = global_hooks;

    item = cJSON_New_Item(&global_hooks);
    if (item == NULL) /* memory fail */
    {
        goto fail;
    }

    if (!parse_value(item, buffer_skip_whitespace(skip_utf8_bom(&buffer))))
    {
        /* parse failure. ep is set. */
        goto fail;
    }

    /* if we require null-terminated JSON without appended garbage, skip and then check for a null terminator */
    if (require_null_terminated)
    {
        buffer_skip_whitespace(&buffer);
        if ((buffer.offset >= buffer.length) || buffer_at_offset(&buffer)[0] != '\0')
        {
            goto fail;
        }
    }
    if (return_parse_end)
    {
        *return_parse_end = (const char*)buffer_at_offset(&buffer);
    }

    return item;

fail:
    if (item != NULL)
    {
        cJSON_Delete(item);
    }

    if (value != NULL)
    {
        error local_error;
        local_error.json = (const unsigned char*)value;
        local_error.position = 0;

        if (buffer.offset < buffer.length)
        {
            local_error.position = buffer.offset;
        }
        else if (buffer.length > 0)
        {
            local_error.position = buffer.length - 1;
        }

        if (return_parse_end != NULL)
        {
            *return_parse_end = (const char*)local_error.json + local_error.position;
        }

        global_error = local_error;
    }

    return NULL;
}

/* Default options for cJSON_Parse */
CJSON_PUBLIC(cJSON *) cJSON_Parse(const char *value)
{
    return cJSON_ParseWithOpts(value, 0, 0);
}

CJSON_PUBLIC(cJSON *) cJSON_ParseWithLength(const char *value, size_t buffer_length)
{
    return cJSON_ParseWithLengthOpts(value, buffer_length, 0, 0);
}

#define cjson_min(a, b) (((a) < (b)) ? (a) : (b))

static unsigned char *print(const cJSON * const item, cJSON_bool format, const internal_hooks * const hooks)
{
    static const size_t default_buffer_size = 256;
    printbuffer buffer[1];
    unsigned char *printed = NULL;

    memset(buffer, 0, sizeof(buffer));

    /* create buffer */
    buffer->buffer = (unsigned char*) hooks->allocate(default_buffer_size);
    buffer->length = default_buffer_size;
    buffer->format = format;
    buffer->hooks = *hooks;
    if (buffer->buffer == NULL)
    {
        goto fail;
    }

    /* print the value */
    if (!print_value(item, buffer))
    {
        goto fail;
    }
    update_offset(buffer);

    /* check if reallocate is available */
    if (hooks->reallocate != NULL)
    {
        printed = (unsigned char*) hooks->reallocate(buffer->buffer, buffer->offset + 1);
        if (printed == NULL) {
            goto fail;
        }
        buffer->buffer = NULL;
    }
    else /* otherwise copy the JSON over to a new buffer */
    {
        printed = (unsigned char*) hooks->allocate(buffer->offset + 1);
        if (printed == NULL)
        {
            goto fail;
        }
        memcpy(printed, buffer->buffer, cjson_min(buffer->length, buffer->offset + 1));
        printed[buffer->offset] = '\0'; /* just to be sure */

        /* free the buffer */
        hooks->deallocate(buffer->buffer);
        buffer->buffer = NULL;
    }

    return printed;

fail:
    if (buffer->buffer != NULL)
    {
        hooks->deallocate(buffer->buffer);
        buffer->buffer = NULL;
    }

    if (printed != NULL)
    {
        hooks->deallocate(printed);
        printed = NULL;
    }

    return NULL;
}

/* Render a cJSON item/entity/structure to text. */
CJSON_PUBLIC(char *) cJSON_Print(const cJSON *item)
{
    return (char*)print(item, true, &global_hooks);
}

CJSON_PUBLIC(char *) cJSON_PrintUnformatted(const cJSON *item)
{
    return (char*)print(item, false, &global_hooks);
}

CJSON_PUBLIC(char *) cJSON_PrintBuffered(const cJSON *item, int prebuffer, cJSON_bool fmt)
{
    printbuffer p = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };

    if (prebuffer < 0)
    {
        return NULL;
    }

    p.buffer = (unsigned char*)global_hooks.allocate((size_t)prebuffer);
    if (!p.buffer)
    {
        return NULL;
    }

    p.length = (size_t)prebuffer;
    p.offset = 0;
    p.noalloc = false;
    p.format = fmt;
    p.hooks = global_hooks;

    if (!print_value(item, &p))
    {
        global_hooks.deallocate(p.buffer);
        p.buffer = NULL;
        return NULL;
    }

    return (char*)p.buffer;
}

CJSON_PUBLIC(cJSON_bool) cJSON_PrintPreallocated(cJSON *item, char *buffer, const int length, const cJSON_bool format)
{
    printbuffer p = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };

    if ((length < 0) || (buffer == NULL))
    {
        return false;
    }

    p.buffer = (unsigned char*)buffer;
    p.length = (size_t)length;
    p.offset = 0;
    p.noalloc = true;
    p.format = format;
    p.hooks = global_hooks;

    return print_value(item, &p);
}

/* Parser core - when encountering text, process appropriately. */
static cJSON_bool parse_value(cJSON * const item, parse_buffer * const input_buffer)
{
    if ((input_buffer == NULL) || (input_buffer->content == NULL))
    {
        return false; /* no input */
    }

    /* parse the different types of values */
    /* null */
    if (can_read(input_buffer, 4) && (strncmp((const char*)buffer_at_offset(input_buffer), "null", 4) == 0))
    {
        item->type = cJSON_NULL;
        input_buffer->offset += 4;
        return true;
    }
    /* false */
    if (can_read(input_buffer, 5) && (strncmp((const char*)buffer_at_offset(input_buffer), "false", 5) == 0))
    {
        item->type = cJSON_False;
        input_buffer->offset += 5;
        return true;
    }
    /* true */
    if (can_read(input_buffer, 4) && (strncmp((const char*)buffer_at_offset(input_buffer), "true", 4) == 0))
    {
        item->type = cJSON_True;
        item->valueint = 1;
        input_buffer->offset += 4;
        return true;
    }
    /* string */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '\"'))
    {
        return parse_string(item, input_buffer);
    }
    /* number */
    if (can_access_at_index(input_buffer, 0) && ((buffer_at_offset(input_buffer)[0] == '-') || ((buffer_at_offset(input_buffer)[0] >= '0') && (buffer_at_offset(input_buffer)[0] <= '9'))))
    {
        return parse_number(item, input_buffer);
    }
    /* array */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '['))
    {
        return parse_array(item, input_buffer);
    }
    /* object */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '{'))
    {
        return parse_object(item, input_buffer);
    }

    return false;
}

/* Render a value to text. */
static cJSON_bool print_value(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output = NULL;

    if ((item == NULL) || (output_buffer == NULL))
    {
        return false;
    }

    switch ((item->type) & 0xFF)
    {
        case cJSON_NULL:
            output = ensure(output_buffer, 5);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "null");
            return true;

        case cJSON_False:
            output = ensure(output_buffer, 6);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "false");
            return true;

        case cJSON_True:
            output = ensure(output_buffer, 5);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "true");
            return true;

        case cJSON_Number:
            return print_number(item, output_buffer);

        case cJSON_Raw:
        {
            size_t raw_length = 0;
            if (item->valuestring == NULL)
            {
                return false;
            }

            raw_length = strlen(item->valuestring) + sizeof("");
            output = ensure(output_buffer, raw_length);
            if (output == NULL)
            {
                return false;
            }
            memcpy(output, item->valuestring, raw_length);
            return true;
        }

        case cJSON_String:
            return print_string(item, output_buffer);

        case cJSON_Array:
            return print_array(item, output_buffer);

        case cJSON_Object:
            return print_object(item, output_buffer);

        default:
            return false;
    }
}

/* Build an array from input text. */
static cJSON_bool parse_array(cJSON * const item, parse_buffer * const input_buffer)
{
    cJSON *head = NULL; /* head of the linked list */
    cJSON *current_item = NULL;

    if (input_buffer->depth >= CJSON_NESTING_LIMIT)
    {
        return false; /* to deeply nested */
    }
    input_buffer->depth++;

    if (buffer_at_offset(input_buffer)[0] != '[')
    {
        /* not an array */
        goto fail;
    }

    input_buffer->offset++;
    buffer_skip_whitespace(input_buffer);
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ']'))
    {
        /* empty array */
        goto success;
    }

    /* check if we skipped to the end of the buffer */
    if (cannot_access_at_index(input_buffer, 0))
    {
        input_buffer->offset--;
        goto fail;
    }

    /* step back to character in front of the first element */
    input_buffer->offset--;
    /* loop through the comma separated array elements */
    do
    {
        /* allocate next item */
        cJSON *new_item = cJSON_New_Item(&(input_buffer->hooks));
        if (new_item == NULL)
        {
            goto fail; /* allocation failure */
        }

        /* attach next item to list */
        if (head == NULL)
        {
            /* start the linked list */
            current_item = head = new_item;
        }
        else
        {
            /* add to the end and advance */
            current_item->next = new_item;
            new_item->prev = current_item;
            current_item = new_item;
        }

        /* parse next value */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_value(current_item, input_buffer))
        {
            goto fail; /* failed to parse value */
        }
        buffer_skip_whitespace(input_buffer);
    }
    while (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ','));

    if (cannot_access_at_index(input_buffer, 0) || buffer_at_offset(input_buffer)[0] != ']')
    {
        goto fail; /* expected end of array */
    }

success:
    input_buffer->depth--;

    if (head != NULL) {
        head->prev = current_item;
    }

    item->type = cJSON_Array;
    item->child = head;

    input_buffer->offset++;

    return true;

fail:
    if (head != NULL)
    {
        cJSON_Delete(head);
    }

    return false;
}

/* Render an array to text */
static cJSON_bool print_array(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    size_t length = 0;
    cJSON *current_element = item->child;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* Compose the output array. */
    /* opening square bracket */
    output_pointer = ensure(output_buffer, 1);
    if (output_pointer == NULL)
    {
        return false;
    }

    *output_pointer = '[';
    output_buffer->offset++;
    output_buffer->depth++;

    while (current_element != NULL)
    {
        if (!print_value(current_element, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);
        if (current_element->next)
        {
            length = (size_t) (output_buffer->format ? 2 : 1);
            output_pointer = ensure(output_buffer, length + 1);
            if (output_pointer == NULL)
            {
                return false;
            }
            *output_pointer++ = ',';
            if(output_buffer->format)
            {
                *output_pointer++ = ' ';
            }
            *output_pointer = '\0';
            output_buffer->offset += length;
        }
        current_element = current_element->next;
    }

    output_pointer = ensure(output_buffer, 2);
    if (output_pointer == NULL)
    {
        return false;
    }
    *output_pointer++ = ']';
    *output_pointer = '\0';
    output_buffer->depth--;

    return true;
}

/* Build an object from the text. */
static cJSON_bool parse_object(cJSON * const item, parse_buffer * const input_buffer)
{
    cJSON *head = NULL; /* linked list head */
    cJSON *current_item = NULL;

    if (input_buffer->depth >= CJSON_NESTING_LIMIT)
    {
        return false; /* to deeply nested */
    }
    input_buffer->depth++;

    if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != '{'))
    {
        goto fail; /* not an object */
    }

    input_buffer->offset++;
    buffer_skip_whitespace(input_buffer);
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '}'))
    {
        goto success; /* empty object */
    }

    /* check if we skipped to the end of the buffer */
    if (cannot_access_at_index(input_buffer, 0))
    {
        input_buffer->offset--;
        goto fail;
    }

    /* step back to character in front of the first element */
    input_buffer->offset--;
    /* loop through the comma separated array elements */
    do
    {
        /* allocate next item */
        cJSON *new_item = cJSON_New_Item(&(input_buffer->hooks));
        if (new_item == NULL)
        {
            goto fail; /* allocation failure */
        }

        /* attach next item to list */
        if (head == NULL)
        {
            /* start the linked list */
            current_item = head = new_item;
        }
        else
        {
            /* add to the end and advance */
            current_item->next = new_item;
            new_item->prev = current_item;
            current_item = new_item;
        }

        if (cannot_access_at_index(input_buffer, 1))
        {
            goto fail; /* nothing comes after the comma */
        }

        /* parse the name of the child */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_string(current_item, input_buffer))
        {
            goto fail; /* failed to parse name */
        }
        buffer_skip_whitespace(input_buffer);

        /* swap valuestring and string, because we parsed the name */
        current_item->string = current_item->valuestring;
        current_item->valuestring = NULL;

        if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != ':'))
        {
            goto fail; /* invalid object */
        }

        /* parse the value */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_value(current_item, input_buffer))
        {
            goto fail; /* failed to parse value */
        }
        buffer_skip_whitespace(input_buffer);
    }
    while (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ','));

    if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != '}'))
    {
        goto fail; /* expected end of object */
    }

success:
    input_buffer->depth--;

    if (head != NULL) {
        head->prev = current_item;
    }

    item->type = cJSON_Object;
    item->child = head;

    input_buffer->offset++;
    return true;

fail:
    if (head != NULL)
    {
        cJSON_Delete(head);
    }

    return false;
}

/* Render an object to text. */
static cJSON_bool print_object(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    size_t length = 0;
    cJSON *current_item = item->child;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* Compose the output: */
    length = (size_t) (output_buffer->format ? 2 : 1); /* fmt: {\n */
    output_pointer = ensure(output_buffer, length + 1);
    if (output_pointer == NULL)
    {
        return false;
    }

    *output_pointer++ = '{';
    output_buffer->depth++;
    if (output_buffer->format)
    {
        *output_pointer++ = '\n';
    }
    output_buffer->offset += length;

    while (current_item)
    {
        if (output_buffer->format)
        {
            size_t i;
            output_pointer = ensure(output_buffer, output_buffer->depth);
            if (output_pointer == NULL)
            {
                return false;
            }
            for (i = 0; i < output_buffer->depth; i++)
            {
                *output_pointer++ = '\t';
            }
            output_buffer->offset += output_buffer->depth;
        }

        /* print key */
        if (!print_string_ptr((unsigned char*)current_item->string, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);

        length = (size_t) (output_buffer->format ? 2 : 1);
        output_pointer = ensure(output_buffer, length);
        if (output_pointer == NULL)
        {
            return false;
        }
        *output_pointer++ = ':';
        if (output_buffer->format)
        {
            *output_pointer++ = '\t';
        }
        output_buffer->offset += length;

        /* print value */
        if (!print_value(current_item, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);

        /* print comma if not last */
        length = ((size_t)(output_buffer->format ? 1 : 0) + (size_t)(current_item->next ? 1 : 0));
        output_pointer = ensure(output_buffer, length + 1);
        if (output_pointer == NULL)
        {
            return false;
        }
        if (current_item->next)
        {
            *output_pointer++ = ',';
        }

        if (output_buffer->format)
        {
            *output_pointer++ = '\n';
        }
        *output_pointer = '\0';
        output_buffer->offset += length;

        current_item = current_item->next;
    }

    output_pointer = ensure(output_buffer, output_buffer->format ? (output_buffer->depth + 1) : 2);
    if (output_pointer == NULL)
    {
        return false;
    }
    if (output_buffer->format)
    {
        size_t i;
        for (i = 0; i < (output_buffer->depth - 1); i++)
        {
            *output_pointer++ = '\t';
        }
    }
    *output_pointer++ = '}';
    *output_pointer = '\0';
    output_buffer->depth--;

    return true;
}

/* Get Array size/item / object item. */
CJSON_PUBLIC(int) cJSON_GetArraySize(const cJSON *array)
{
    cJSON *child = NULL;
    size_t size = 0;

    if (array == NULL)
    {
        return 0;
    }

    child = array->child;

    while(child != NULL)
    {
        size++;
        child = child->next;
    }

    /* FIXME: Can overflow here. Cannot be fixed without breaking the API */

    return (int)size;
}

static cJSON* get_array_item(const cJSON *array, size_t index)
{
    cJSON *current_child = NULL;

    if (array == NULL)
    {
        return NULL;
    }

    current_child = array->child;
    while ((current_child != NULL) && (index > 0))
    {
        index--;
        current_child = current_child->next;
    }

    return current_child;
}

CJSON_PUBLIC(cJSON *) cJSON_GetArrayItem(const cJSON *array, int index)
{
    if (index < 0)
    {
        return NULL;
    }

    return get_array_item(array, (size_t)index);
}

static cJSON *get_object_item(const cJSON * const object, const char * const name, const cJSON_bool case_sensitive)
{
    cJSON *current_element = NULL;

    if ((object == NULL) || (name == NULL))
    {
        return NULL;
    }

    current_element = object->child;
    if (case_sensitive)
    {
        while ((current_element != NULL) && (current_element->string != NULL) && (strcmp(name, current_element->string) != 0))
        {
            current_element = current_element->next;
        }
    }
    else
    {
        while ((current_element != NULL) && (case_insensitive_strcmp((const unsigned char*)name, (const unsigned char*)(current_element->string)) != 0))
        {
            current_element = current_element->next;
        }
    }

    if ((current_element == NULL) || (current_element->string == NULL)) {
        return NULL;
    }

    return current_element;
}

CJSON_PUBLIC(cJSON *) cJSON_GetObjectItem(const cJSON * const object, const char * const string)
{
    return get_object_item(object, string, false);
}

CJSON_PUBLIC(cJSON *) cJSON_GetObjectItemCaseSensitive(const cJSON * const object, const char * const string)
{
    return get_object_item(object, string, true);
}

CJSON_PUBLIC(cJSON_bool) cJSON_HasObjectItem(const cJSON *object, const char *string)
{
    return cJSON_GetObjectItem(object, string) ? 1 : 0;
}

/* Utility for array list handling. */
static void suffix_object(cJSON *prev, cJSON *item)
{
    prev->next = item;
    item->prev = prev;
}

/* Utility for handling references. */
static cJSON *create_reference(const cJSON *item, const internal_hooks * const hooks)
{
    cJSON *reference = NULL;
    if (item == NULL)
    {
        return NULL;
    }

    reference = cJSON_New_Item(hooks);
    if (reference == NULL)
    {
        return NULL;
    }

    memcpy(reference, item, sizeof(cJSON));
    reference->string = NULL;
    reference->type |= cJSON_IsReference;
    reference->next = reference->prev = NULL;
    return reference;
}

static cJSON_bool add_item_to_array(cJSON *array, cJSON *item)
{
    cJSON *child = NULL;

    if ((item == NULL) || (array == NULL) || (array == item))
    {
        return false;
    }

    child = array->child;
    /*
     * To find the last item in array quickly, we use prev in array
     */
    if (child == NULL)
    {
        /* list is empty, start new one */
        array->child = item;
        item->prev = item;
        item->next = NULL;
    }
    else
    {
        /* append to the end */
        if (child->prev)
        {
            suffix_object(child->prev, item);
            array->child->prev = item;
        }
    }

    return true;
}

/* Add item to array/object. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToArray(cJSON *array, cJSON *item)
{
    return add_item_to_array(array, item);
}

#if defined(__clang__) || (defined(__GNUC__)  && ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ > 5))))
    #pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
/* helper function to cast away const */
static void* cast_away_const(const void* string)
{
    return (void*)string;
}
#if defined(__clang__) || (defined(__GNUC__)  && ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ > 5))))
    #pragma GCC diagnostic pop
#endif


static cJSON_bool add_item_to_object(cJSON * const object, const char * const string, cJSON * const item, const internal_hooks * const hooks, const cJSON_bool constant_key)
{
    char *new_key = NULL;
    int new_type = cJSON_Invalid;

    if ((object == NULL) || (string == NULL) || (item == NULL) || (object == item))
    {
        return false;
    }

    if (constant_key)
    {
        new_key = (char*)cast_away_const(string);
        new_type = item->type | cJSON_StringIsConst;
    }
    else
    {
        new_key = (char*)cJSON_strdup((const unsigned char*)string, hooks);
        if (new_key == NULL)
        {
            return false;
        }

        new_type = item->type & ~cJSON_StringIsConst;
    }

    if (!(item->type & cJSON_StringIsConst) && (item->string != NULL))
    {
        hooks->deallocate(item->string);
    }

    item->string = new_key;
    item->type = new_type;

    return add_item_to_array(object, item);
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObject(cJSON *object, const char *string, cJSON *item)
{
    return add_item_to_object(object, string, item, &global_hooks, false);
}

/* Add an item to an object with constant string as key */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObjectCS(cJSON *object, const char *string, cJSON *item)
{
    return add_item_to_object(object, string, item, &global_hooks, true);
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToArray(cJSON *array, cJSON *item)
{
    if (array == NULL)
    {
        return false;
    }

    return add_item_to_array(array, create_reference(item, &global_hooks));
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToObject(cJSON *object, const char *string, cJSON *item)
{
    if ((object == NULL) || (string == NULL))
    {
        return false;
    }

    return add_item_to_object(object, string, create_reference(item, &global_hooks), &global_hooks, false);
}

CJSON_PUBLIC(cJSON*) cJSON_AddNullToObject(cJSON * const object, const char * const name)
{
    cJSON *null = cJSON_CreateNull();
    if (add_item_to_object(object, name, null, &global_hooks, false))
    {
        return null;
    }

    cJSON_Delete(null);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddTrueToObject(cJSON * const object, const char * const name)
{
    cJSON *true_item = cJSON_CreateTrue();
    if (add_item_to_object(object, name, true_item, &global_hooks, false))
    {
        return true_item;
    }

    cJSON_Delete(true_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddFalseToObject(cJSON * const object, const char * const name)
{
    cJSON *false_item = cJSON_CreateFalse();
    if (add_item_to_object(object, name, false_item, &global_hooks, false))
    {
        return false_item;
    }

    cJSON_Delete(false_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddBoolToObject(cJSON * const object, const char * const name, const cJSON_bool boolean)
{
    cJSON *bool_item = cJSON_CreateBool(boolean);
    if (add_item_to_object(object, name, bool_item, &global_hooks, false))
    {
        return bool_item;
    }

    cJSON_Delete(bool_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddNumberToObject(cJSON * const object, const char * const name, const double number)
{
    cJSON *number_item = cJSON_CreateNumber(number);
    if (add_item_to_object(object, name, number_item, &global_hooks, false))
    {
        return number_item;
    }

    cJSON_Delete(number_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddStringToObject(cJSON * const object, const char * const name, const char * const string)
{
    cJSON *string_item = cJSON_CreateString(string);
    if (add_item_to_object(object, name, string_item, &global_hooks, false))
    {
        return string_item;
    }

    cJSON_Delete(string_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddRawToObject(cJSON * const object, const char * const name, const char * const raw)
{
    cJSON *raw_item = cJSON_CreateRaw(raw);
    if (add_item_to_object(object, name, raw_item, &global_hooks, false))
    {
        return raw_item;
    }

    cJSON_Delete(raw_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddObjectToObject(cJSON * const object, const char * const name)
{
    cJSON *object_item = cJSON_CreateObject();
    if (add_item_to_object(object, name, object_item, &global_hooks, false))
    {
        return object_item;
    }

    cJSON_Delete(object_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddArrayToObject(cJSON * const object, const char * const name)
{
    cJSON *array = cJSON_CreateArray();
    if (add_item_to_object(object, name, array, &global_hooks, false))
    {
        return array;
    }

    cJSON_Delete(array);
    return NULL;
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemViaPointer(cJSON *parent, cJSON * const item)
{
    if ((parent == NULL) || (item == NULL))
    {
        return NULL;
    }

    if (item != parent->child)
    {
        /* not the first element */
        item->prev->next = item->next;
    }
    if (item->next != NULL)
    {
        /* not the last element */
        item->next->prev = item->prev;
    }

    if (item == parent->child)
    {
        /* first element */
        parent->child = item->next;
    }
    else if (item->next == NULL)
    {
        /* last element */
        parent->child->prev = item->prev;
    }

    /* make sure the detached item doesn't point anywhere anymore */
    item->prev = NULL;
    item->next = NULL;

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromArray(cJSON *array, int which)
{
    if (which < 0)
    {
        return NULL;
    }

    return cJSON_DetachItemViaPointer(array, get_array_item(array, (size_t)which));
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromArray(cJSON *array, int which)
{
    cJSON_Delete(cJSON_DetachItemFromArray(array, which));
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObject(cJSON *object, const char *string)
{
    cJSON *to_detach = cJSON_GetObjectItem(object, string);

    return cJSON_DetachItemViaPointer(object, to_detach);
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObjectCaseSensitive(cJSON *object, const char *string)
{
    cJSON *to_detach = cJSON_GetObjectItemCaseSensitive(object, string);

    return cJSON_DetachItemViaPointer(object, to_detach);
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromObject(cJSON *object, const char *string)
{
    cJSON_Delete(cJSON_DetachItemFromObject(object, string));
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromObjectCaseSensitive(cJSON *object, const char *string)
{
    cJSON_Delete(cJSON_DetachItemFromObjectCaseSensitive(object, string));
}

/* Replace array/object items with new ones. */
CJSON_PUBLIC(cJSON_bool) cJSON_InsertItemInArray(cJSON *array, int which, cJSON *newitem)
{
    cJSON *after_inserted = NULL;

    if (which < 0 || newitem == NULL)
    {
        return false;
    }

    after_inserted = get_array_item(array, (size_t)which);
    if (after_inserted == NULL)
    {
        return add_item_to_array(array, newitem);
    }

    if (after_inserted != array->child && after_inserted->prev == NULL) {
        /* return false if after_inserted is a corrupted array item */
        return false;
    }

    newitem->next = after_inserted;
    newitem->prev = after_inserted->prev;
    after_inserted->prev = newitem;
    if (after_inserted == array->child)
    {
        array->child = newitem;
    }
    else
    {
        newitem->prev->next = newitem;
    }
    return true;
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemViaPointer(cJSON * const parent, cJSON * const item, cJSON * replacement)
{
    if ((parent == NULL) || (parent->child == NULL) || (replacement == NULL) || (item == NULL))
    {
        return false;
    }

    if (replacement == item)
    {
        return true;
    }

    replacement->next = item->next;
    replacement->prev = item->prev;

    if (replacement->next != NULL)
    {
        replacement->next->prev = replacement;
    }
    if (parent->child == item)
    {
        if (parent->child->prev == parent->child)
        {
            replacement->prev = replacement;
        }
        parent->child = replacement;
    }
    else
    {   /*
         * To find the last item in array quickly, we use prev in array.
         * We can't modify the last item's next pointer where this item was the parent's child
         */
        if (replacement->prev != NULL)
        {
            replacement->prev->next = replacement;
        }
        if (replacement->next == NULL)
        {
            parent->child->prev = replacement;
        }
    }

    item->next = NULL;
    item->prev = NULL;
    cJSON_Delete(item);

    return true;
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInArray(cJSON *array, int which, cJSON *newitem)
{
    if (which < 0)
    {
        return false;
    }

    return cJSON_ReplaceItemViaPointer(array, get_array_item(array, (size_t)which), newitem);
}

static cJSON_bool replace_item_in_object(cJSON *object, const char *string, cJSON *replacement, cJSON_bool case_sensitive)
{
    if ((replacement == NULL) || (string == NULL))
    {
        return false;
    }

    /* replace the name in the replacement */
    if (!(replacement->type & cJSON_StringIsConst) && (replacement->string != NULL))
    {
        cJSON_free(replacement->string);
    }
    replacement->string = (char*)cJSON_strdup((const unsigned char*)string, &global_hooks);
    if (replacement->string == NULL)
    {
        return false;
    }

    replacement->type &= ~cJSON_StringIsConst;

    return cJSON_ReplaceItemViaPointer(object, get_object_item(object, string, case_sensitive), replacement);
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObject(cJSON *object, const char *string, cJSON *newitem)
{
    return replace_item_in_object(object, string, newitem, false);
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObjectCaseSensitive(cJSON *object, const char *string, cJSON *newitem)
{
    return replace_item_in_object(object, string, newitem, true);
}

/* Create basic types: */
CJSON_PUBLIC(cJSON *) cJSON_CreateNull(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_NULL;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateTrue(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_True;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateFalse(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_False;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateBool(cJSON_bool boolean)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = boolean ? cJSON_True : cJSON_False;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateNumber(double num)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_Number;
        item->valuedouble = num;

        /* use saturation in case of overflow */
        if (num >= INT_MAX)
        {
            item->valueint = INT_MAX;
        }
        else if (num <= (double)INT_MIN)
        {
            item->valueint = INT_MIN;
        }
        else
        {
            item->valueint = (int)num;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateString(const char *string)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_String;
        item->valuestring = (char*)cJSON_strdup((const unsigned char*)string, &global_hooks);
        if(!item->valuestring)
        {
            cJSON_Delete(item);
            return NULL;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateStringReference(const char *string)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL)
    {
        item->type = cJSON_String | cJSON_IsReference;
        item->valuestring = (char*)cast_away_const(string);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateObjectReference(const cJSON *child)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL) {
        item->type = cJSON_Object | cJSON_IsReference;
        item->child = (cJSON*)cast_away_const(child);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateArrayReference(const cJSON *child) {
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL) {
        item->type = cJSON_Array | cJSON_IsReference;
        item->child = (cJSON*)cast_away_const(child);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateRaw(const char *raw)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_Raw;
        item->valuestring = (char*)cJSON_strdup((const unsigned char*)raw, &global_hooks);
        if(!item->valuestring)
        {
            cJSON_Delete(item);
            return NULL;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateArray(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type=cJSON_Array;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateObject(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item)
    {
        item->type = cJSON_Object;
    }

    return item;
}

/* Create Arrays: */
CJSON_PUBLIC(cJSON *) cJSON_CreateIntArray(const int *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber(numbers[i]);
        if (!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateFloatArray(const float *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber((double)numbers[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateDoubleArray(const double *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber(numbers[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateStringArray(const char *const *strings, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (strings == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for (i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateString(strings[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p,n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

/* Duplication */
CJSON_PUBLIC(cJSON *) cJSON_Duplicate(const cJSON *item, cJSON_bool recurse)
{
    cJSON *newitem = NULL;
    cJSON *child = NULL;
    cJSON *next = NULL;
    cJSON *newchild = NULL;

    /* Bail on bad ptr */
    if (!item)
    {
        goto fail;
    }
    /* Create new item */
    newitem = cJSON_New_Item(&global_hooks);
    if (!newitem)
    {
        goto fail;
    }
    /* Copy over all vars */
    newitem->type = item->type & (~cJSON_IsReference);
    newitem->valueint = item->valueint;
    newitem->valuedouble = item->valuedouble;
    if (item->valuestring)
    {
        newitem->valuestring = (char*)cJSON_strdup((unsigned char*)item->valuestring, &global_hooks);
        if (!newitem->valuestring)
        {
            goto fail;
        }
    }
    if (item->string)
    {
        newitem->string = (item->type&cJSON_StringIsConst) ? item->string : (char*)cJSON_strdup((unsigned char*)item->string, &global_hooks);
        if (!newitem->string)
        {
            goto fail;
        }
    }
    /* If non-recursive, then we're done! */
    if (!recurse)
    {
        return newitem;
    }
    /* Walk the ->next chain for the child. */
    child = item->child;
    while (child != NULL)
    {
        newchild = cJSON_Duplicate(child, true); /* Duplicate (with recurse) each item in the ->next chain */
        if (!newchild)
        {
            goto fail;
        }
        if (next != NULL)
        {
            /* If newitem->child already set, then crosswire ->prev and ->next and move on */
            next->next = newchild;
            newchild->prev = next;
            next = newchild;
        }
        else
        {
            /* Set newitem->child and move to it */
            newitem->child = newchild;
            next = newchild;
        }
        child = child->next;
    }
    if (newitem && newitem->child)
    {
        newitem->child->prev = newchild;
    }

    return newitem;

fail:
    if (newitem != NULL)
    {
        cJSON_Delete(newitem);
    }

    return NULL;
}

static void skip_oneline_comment(char **input)
{
    *input += static_strlen("//");

    for (; (*input)[0] != '\0'; ++(*input))
    {
        if ((*input)[0] == '\n') {
            *input += static_strlen("\n");
            return;
        }
    }
}

static void skip_multiline_comment(char **input)
{
    *input += static_strlen("/*");

    for (; (*input)[0] != '\0'; ++(*input))
    {
        if (((*input)[0] == '*') && ((*input)[1] == '/'))
        {
            *input += static_strlen("*/");
            return;
        }
    }
}

static void minify_string(char **input, char **output) {
    (*output)[0] = (*input)[0];
    *input += static_strlen("\"");
    *output += static_strlen("\"");


    for (; (*input)[0] != '\0'; (void)++(*input), ++(*output)) {
        (*output)[0] = (*input)[0];

        if ((*input)[0] == '\"') {
            (*output)[0] = '\"';
            *input += static_strlen("\"");
            *output += static_strlen("\"");
            return;
        } else if (((*input)[0] == '\\') && ((*input)[1] == '\"')) {
            (*output)[1] = (*input)[1];
            *input += static_strlen("\"");
            *output += static_strlen("\"");
        }
    }
}

CJSON_PUBLIC(void) cJSON_Minify(char *json)
{
    char *into = json;

    if (json == NULL)
    {
        return;
    }

    while (json[0] != '\0')
    {
        switch (json[0])
        {
            case ' ':
            case '\t':
            case '\r':
            case '\n':
                json++;
                break;

            case '/':
                if (json[1] == '/')
                {
                    skip_oneline_comment(&json);
                }
                else if (json[1] == '*')
                {
                    skip_multiline_comment(&json);
                } else {
                    json++;
                }
                break;

            case '\"':
                minify_string(&json, (char**)&into);
                break;

            default:
                into[0] = json[0];
                json++;
                into++;
        }
    }

    /* and null-terminate. */
    *into = '\0';
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsInvalid(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Invalid;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsFalse(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_False;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsTrue(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xff) == cJSON_True;
}


CJSON_PUBLIC(cJSON_bool) cJSON_IsBool(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & (cJSON_True | cJSON_False)) != 0;
}
CJSON_PUBLIC(cJSON_bool) cJSON_IsNull(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_NULL;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsNumber(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Number;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsString(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_String;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsArray(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Array;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsObject(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Object;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsRaw(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Raw;
}

CJSON_PUBLIC(cJSON_bool) cJSON_Compare(const cJSON * const a, const cJSON * const b, const cJSON_bool case_sensitive)
{
    if ((a == NULL) || (b == NULL) || ((a->type & 0xFF) != (b->type & 0xFF)))
    {
        return false;
    }

    /* check if type is valid */
    switch (a->type & 0xFF)
    {
        case cJSON_False:
        case cJSON_True:
        case cJSON_NULL:
        case cJSON_Number:
        case cJSON_String:
        case cJSON_Raw:
        case cJSON_Array:
        case cJSON_Object:
            break;

        default:
            return false;
    }

    /* identical objects are equal */
    if (a == b)
    {
        return true;
    }

    switch (a->type & 0xFF)
    {
        /* in these cases and equal type is enough */
        case cJSON_False:
        case cJSON_True:
        case cJSON_NULL:
            return true;

        case cJSON_Number:
            if (compare_double(a->valuedouble, b->valuedouble))
            {
                return true;
            }
            return false;

        case cJSON_String:
        case cJSON_Raw:
            if ((a->valuestring == NULL) || (b->valuestring == NULL))
            {
                return false;
            }
            if (strcmp(a->valuestring, b->valuestring) == 0)
            {
                return true;
            }

            return false;

        case cJSON_Array:
        {
            cJSON *a_element = a->child;
            cJSON *b_element = b->child;

            for (; (a_element != NULL) && (b_element != NULL);)
            {
                if (!cJSON_Compare(a_element, b_element, case_sensitive))
                {
                    return false;
                }

                a_element = a_element->next;
                b_element = b_element->next;
            }

            /* one of the arrays is longer than the other */
            if (a_element != b_element) {
                return false;
            }

            return true;
        }

        case cJSON_Object:
        {
            cJSON *a_element = NULL;
            cJSON *b_element = NULL;
            cJSON_ArrayForEach(a_element, a)
            {
                /* TODO This has O(n^2) runtime, which is horrible! */
                b_element = get_object_item(b, a_element->string, case_sensitive);
                if (b_element == NULL)
                {
                    return false;
                }

                if (!cJSON_Compare(a_element, b_element, case_sensitive))
                {
                    return false;
                }
            }

            /* doing this twice, once on a and b to prevent true comparison if a subset of b
             * TODO: Do this the proper way, this is just a fix for now */
            cJSON_ArrayForEach(b_element, b)
            {
                a_element = get_object_item(a, b_element->string, case_sensitive);
                if (a_element == NULL)
                {
                    return false;
                }

                if (!cJSON_Compare(b_element, a_element, case_sensitive))
                {
                    return false;
                }
            }

            return true;
        }

        default:
            return false;
    }
}

CJSON_PUBLIC(void *) cJSON_malloc(size_t size)
{
    return global_hooks.allocate(size);
}

CJSON_PUBLIC(void) cJSON_free(void *object)
{
    global_hooks.deallocate(object);
    object = NULL;
}

#endif

#if !defined(DTW_MOCK_SHA256_DEFINE) && defined(DTW_SHA256_IMPLEMENTED)


#define TOTAL_LEN_LEN 8

/*
 * Comments from pseudo-code at https://en.wikipedia.org/wiki/SHA-2 are reproduced here.
 * When useful for clarification, portions of the pseudo-code are reproduced here too.
 */

/*
 * @brief Rotate a 32-bit value by a number of bits to the right.
 * @param value The value to be rotated.
 * @param count The number of bits to rotate by.
 * @return The rotated value.
 */
static inline uint32_t right_rot(uint32_t value, unsigned int count)
{
	/*
	 * Defined behaviour in standard C for all count where 0 < count < 32, which is what we need here.
	 */
	return value >> count | value << (32 - count);
}

/*
 * @brief Update a hash value under calculation with a new chunk of data.
 * @param h Pointer to the first hash item, of a total of eight.
 * @param p Pointer to the chunk data, which has a standard length.
 *
 * @note This is the SHA-256 work horse.
 */
static inline void consume_chunk(uint32_t *h, const uint8_t *p)
{
	unsigned i, j;
	uint32_t ah[8];

	/* Initialize working variables to current hash value: */
	for (i = 0; i < 8; i++)
		ah[i] = h[i];

	/*
	 * The w-array is really w[64], but since we only need 16 of them at a time, we save stack by
	 * calculating 16 at a time.
	 *
	 * This optimization was not there initially and the rest of the comments about w[64] are kept in their
	 * initial state.
	 */

	/*
	 * create a 64-entry message schedule array w[0..63] of 32-bit words (The initial values in w[0..63]
	 * don't matter, so many implementations zero them here) copy chunk into first 16 words w[0..15] of the
	 * message schedule array
	 */
	uint32_t w[16];

	/* Compression function main loop: */
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 16; j++) {
			if (i == 0) {
				w[j] =
				    (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | (uint32_t)p[3];
				p += 4;
			} else {
				/* Extend the first 16 words into the remaining 48 words w[16..63] of the
				 * message schedule array: */
				const uint32_t s0 = right_rot(w[(j + 1) & 0xf], 7) ^ right_rot(w[(j + 1) & 0xf], 18) ^
						    (w[(j + 1) & 0xf] >> 3);
				const uint32_t s1 = right_rot(w[(j + 14) & 0xf], 17) ^
						    right_rot(w[(j + 14) & 0xf], 19) ^ (w[(j + 14) & 0xf] >> 10);
				w[j] = w[j] + s0 + w[(j + 9) & 0xf] + s1;
			}
			const uint32_t s1 = right_rot(ah[4], 6) ^ right_rot(ah[4], 11) ^ right_rot(ah[4], 25);
			const uint32_t ch = (ah[4] & ah[5]) ^ (~ah[4] & ah[6]);

			/*
			 * Initialize array of round constants:
			 * (first 32 bits of the fractional parts of the cube roots of the first 64 primes 2..311):
			 */
			static const uint32_t k[] = {
			    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4,
			    0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe,
			    0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f,
			    0x4a7484aa, 0x5cb0a9dc, 0x76f988da, 0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7,
			    0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc,
			    0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b,
			    0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070, 0x19a4c116,
			    0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
			    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7,
			    0xc67178f2};

			const uint32_t temp1 = ah[7] + s1 + ch + k[i << 4 | j] + w[j];
			const uint32_t s0 = right_rot(ah[0], 2) ^ right_rot(ah[0], 13) ^ right_rot(ah[0], 22);
			const uint32_t maj = (ah[0] & ah[1]) ^ (ah[0] & ah[2]) ^ (ah[1] & ah[2]);
			const uint32_t temp2 = s0 + maj;

			ah[7] = ah[6];
			ah[6] = ah[5];
			ah[5] = ah[4];
			ah[4] = ah[3] + temp1;
			ah[3] = ah[2];
			ah[2] = ah[1];
			ah[1] = ah[0];
			ah[0] = temp1 + temp2;
		}
	}

	/* Add the compressed chunk to the current hash value: */
	for (i = 0; i < 8; i++)
		h[i] += ah[i];
}

/*
 * Public functions. See header file for documentation.
 */

void sha_256_init(struct Sha_256 *sha_256, uint8_t hash[SIZE_OF_SHA_256_HASH])
{
	sha_256->hash = hash;
	sha_256->chunk_pos = sha_256->chunk;
	sha_256->space_left = SIZE_OF_SHA_256_CHUNK;
	sha_256->total_len = 0;
	/*
	 * Initialize hash values (first 32 bits of the fractional parts of the square roots of the first 8 primes
	 * 2..19):
	 */
	sha_256->h[0] = 0x6a09e667;
	sha_256->h[1] = 0xbb67ae85;
	sha_256->h[2] = 0x3c6ef372;
	sha_256->h[3] = 0xa54ff53a;
	sha_256->h[4] = 0x510e527f;
	sha_256->h[5] = 0x9b05688c;
	sha_256->h[6] = 0x1f83d9ab;
	sha_256->h[7] = 0x5be0cd19;
}

void sha_256_write(struct Sha_256 *sha_256, const void *data, size_t len)
{
	sha_256->total_len += len;

	/*
	 * The following cast is not necessary, and could even be considered as poor practice. However, it makes this
	 * file valid C++, which could be a good thing for some use cases.
	 */
	const uint8_t *p = (const uint8_t *)data;

	while (len > 0) {
		/*
		 * If the input chunks have sizes that are multiples of the calculation chunk size, no copies are
		 * necessary. We operate directly on the input data instead.
		 */
		if (sha_256->space_left == SIZE_OF_SHA_256_CHUNK && len >= SIZE_OF_SHA_256_CHUNK) {
			consume_chunk(sha_256->h, p);
			len -= SIZE_OF_SHA_256_CHUNK;
			p += SIZE_OF_SHA_256_CHUNK;
			continue;
		}
		/* General case, no particular optimization. */
		const size_t consumed_len = len < sha_256->space_left ? len : sha_256->space_left;
		memcpy(sha_256->chunk_pos, p, consumed_len);
		sha_256->space_left -= consumed_len;
		len -= consumed_len;
		p += consumed_len;
		if (sha_256->space_left == 0) {
			consume_chunk(sha_256->h, sha_256->chunk);
			sha_256->chunk_pos = sha_256->chunk;
			sha_256->space_left = SIZE_OF_SHA_256_CHUNK;
		} else {
			sha_256->chunk_pos += consumed_len;
		}
	}
}

uint8_t *sha_256_close(struct Sha_256 *sha_256)
{
	uint8_t *pos = sha_256->chunk_pos;
	size_t space_left = sha_256->space_left;
	uint32_t *const h = sha_256->h;

	/*
	 * The current chunk cannot be full. Otherwise, it would already have been consumed. I.e. there is space left
	 * for at least one byte. The next step in the calculation is to add a single one-bit to the data.
	 */
	*pos++ = 0x80;
	--space_left;

	/*
	 * Now, the last step is to add the total data length at the end of the last chunk, and zero padding before
	 * that. But we do not necessarily have enough space left. If not, we pad the current chunk with zeroes, and add
	 * an extra chunk at the end.
	 */
	if (space_left < TOTAL_LEN_LEN) {
		memset(pos, 0x00, space_left);
		consume_chunk(h, sha_256->chunk);
		pos = sha_256->chunk;
		space_left = SIZE_OF_SHA_256_CHUNK;
	}
	const size_t left = space_left - TOTAL_LEN_LEN;
	memset(pos, 0x00, left);
	pos += left;
	uint64_t len = sha_256->total_len;
	pos[7] = (uint8_t)(len << 3);
	len >>= 5;
	int i;
	for (i = 6; i >= 0; --i) {
		pos[i] = (uint8_t)len;
		len >>= 8;
	}
	consume_chunk(h, sha_256->chunk);
	/* Produce the final hash value (big-endian): */
	int j;
	uint8_t *const hash = sha_256->hash;
	for (i = 0, j = 0; i < 8; i++) {
		hash[j++] = (uint8_t)(h[i] >> 24);
		hash[j++] = (uint8_t)(h[i] >> 16);
		hash[j++] = (uint8_t)(h[i] >> 8);
		hash[j++] = (uint8_t)h[i];
	}
	return sha_256->hash;
}

void calc_sha_256(uint8_t hash[SIZE_OF_SHA_256_HASH], const void *input, size_t len)
{
	struct Sha_256 sha_256;
	sha_256_init(&sha_256, hash);
	sha_256_write(&sha_256, input, len);
	(void)sha_256_close(&sha_256);
}

#endif

#if !defined(DTW_MOCK_AES_DEFINE) && defined(DTW_AES_IMPLEMENTED)
/*

This is an implementation of the AES algorithm, specifically ECB, CTR and CBC mode.
Block size can be chosen in aes.h - available choices are AES128, AES192, AES256.

The implementation is verified against the test vectors in:
  National Institute of Standards and Technology Special Publication 800-38A 2001 ED

ECB-AES128
----------

  plain-text:
    6bc1bee22e409f96e93d7e117393172a
    ae2d8a571e03ac9c9eb76fac45af8e51
    30c81c46a35ce411e5fbc1191a0a52ef
    f69f2445df4f9b17ad2b417be66c3710

  key:
    2b7e151628aed2a6abf7158809cf4f3c

  resulting cipher
    3ad77bb40d7a3660a89ecaf32466ef97 
    f5d3d58503b9699de785895a96fdbaaf 
    43b1cd7f598ece23881b00e3ed030688 
    7b0c785e27e8ad3f8223207104725dd4 


NOTE:   String length must be evenly divisible by 16byte (str_len % 16 == 0)
        You should pad the end of the string with zeros if this is not the case.
        For AES192/256 the key size is proportionally larger.

*/


/*****************************************************************************/
/* Includes:                                                                 */
/*****************************************************************************/
#include <stdint.h>
#include <string.h> // CBC mode, for memset


/*****************************************************************************/
/* Defines:                                                                  */
/*****************************************************************************/
// The number of columns comprising a state in AES. This is a constant in AES. Value=4
#define Nb 4

#if defined(AES256) && (AES256 == 1)
    #define Nk 8
    #define Nr 14
#elif defined(AES192) && (AES192 == 1)
    #define Nk 6
    #define Nr 12
#else
    #define Nk 4        // The number of 32 bit words in a key.
    #define Nr 10       // The number of rounds in AES Cipher.
#endif

// jcallan@github points out that declaring Multiply as a function 
// reduces code size considerably with the Keil ARM compiler.
// See this link for more information: https://github.com/kokke/tiny-AES-C/pull/3
#ifndef MULTIPLY_AS_A_FUNCTION
  #define MULTIPLY_AS_A_FUNCTION 0
#endif




/*****************************************************************************/
/* Private variables:                                                        */
/*****************************************************************************/
// state - array holding the intermediate results during decryption.
typedef uint8_t state_t[4][4];



// The lookup-tables are marked const so they can be placed in read-only storage instead of RAM
// The numbers below can be computed dynamically trading ROM for RAM - 
// This can be useful in (embedded) bootloader applications, where ROM is often limited.
static const uint8_t sbox[256] = {
  //0     1    2      3     4    5     6     7      8    9     A      B    C     D     E     F
  0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
  0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,
  0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
  0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,
  0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,
  0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
  0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,
  0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,
  0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
  0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,
  0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,
  0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
  0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,
  0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,
  0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
  0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16 };

static const uint8_t rsbox[256] = {
  0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb,
  0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87, 0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb,
  0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e,
  0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25,
  0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92,
  0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84,
  0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06,
  0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02, 0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b,
  0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73,
  0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e,
  0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89, 0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b,
  0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4,
  0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f,
  0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d, 0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef,
  0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61,
  0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d };

// The round constant word array, Rcon[i], contains the values given by 
// x to the power (i-1) being powers of x (x is denoted as {02}) in the field GF(2^8)
static const uint8_t Rcon[11] = {
  0x8d, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36 };

/*
 * Jordan Goulder points out in PR #12 (https://github.com/kokke/tiny-AES-C/pull/12),
 * that you can remove most of the elements in the Rcon array, because they are unused.
 *
 * From Wikipedia's article on the Rijndael key schedule @ https://en.wikipedia.org/wiki/Rijndael_key_schedule#Rcon
 * 
 * "Only the first some of these constants are actually used – up to rcon[10] for AES-128 (as 11 round keys are needed), 
 *  up to rcon[8] for AES-192, up to rcon[7] for AES-256. rcon[0] is not used in AES algorithm."
 */


/*****************************************************************************/
/* Private functions:                                                        */
/*****************************************************************************/
/*
static uint8_t getSBoxValue(uint8_t num)
{
  return sbox[num];
}
*/
#define getSBoxValue(num) (sbox[(num)])
/*
static uint8_t getSBoxInvert(uint8_t num)
{
  return rsbox[num];
}
*/
#define getSBoxInvert(num) (rsbox[(num)])

// This function produces Nb(Nr+1) round keys. The round keys are used in each round to decrypt the states. 
static void KeyExpansion(uint8_t* RoundKey, const uint8_t* Key)
{
  unsigned i, j, k;
  uint8_t tempa[4]; // Used for the column/row operations
  
  // The first round key is the key itself.
  for (i = 0; i < Nk; ++i)
  {
    RoundKey[(i * 4) + 0] = Key[(i * 4) + 0];
    RoundKey[(i * 4) + 1] = Key[(i * 4) + 1];
    RoundKey[(i * 4) + 2] = Key[(i * 4) + 2];
    RoundKey[(i * 4) + 3] = Key[(i * 4) + 3];
  }

  // All other round keys are found from the previous round keys.
  for (i = Nk; i < Nb * (Nr + 1); ++i)
  {
    {
      k = (i - 1) * 4;
      tempa[0]=RoundKey[k + 0];
      tempa[1]=RoundKey[k + 1];
      tempa[2]=RoundKey[k + 2];
      tempa[3]=RoundKey[k + 3];

    }

    if (i % Nk == 0)
    {
      // This function shifts the 4 bytes in a word to the left once.
      // [a0,a1,a2,a3] becomes [a1,a2,a3,a0]

      // Function RotWord()
      {
        const uint8_t u8tmp = tempa[0];
        tempa[0] = tempa[1];
        tempa[1] = tempa[2];
        tempa[2] = tempa[3];
        tempa[3] = u8tmp;
      }

      // SubWord() is a function that takes a four-byte input word and 
      // applies the S-box to each of the four bytes to produce an output word.

      // Function Subword()
      {
        tempa[0] = getSBoxValue(tempa[0]);
        tempa[1] = getSBoxValue(tempa[1]);
        tempa[2] = getSBoxValue(tempa[2]);
        tempa[3] = getSBoxValue(tempa[3]);
      }

      tempa[0] = tempa[0] ^ Rcon[i/Nk];
    }
#if defined(AES256) && (AES256 == 1)
    if (i % Nk == 4)
    {
      // Function Subword()
      {
        tempa[0] = getSBoxValue(tempa[0]);
        tempa[1] = getSBoxValue(tempa[1]);
        tempa[2] = getSBoxValue(tempa[2]);
        tempa[3] = getSBoxValue(tempa[3]);
      }
    }
#endif
    j = i * 4; k=(i - Nk) * 4;
    RoundKey[j + 0] = RoundKey[k + 0] ^ tempa[0];
    RoundKey[j + 1] = RoundKey[k + 1] ^ tempa[1];
    RoundKey[j + 2] = RoundKey[k + 2] ^ tempa[2];
    RoundKey[j + 3] = RoundKey[k + 3] ^ tempa[3];
  }
}

void AES_init_ctx(struct AES_ctx* ctx, const uint8_t* key)
{
  KeyExpansion(ctx->RoundKey, key);
}
#if (defined(CBC) && (CBC == 1)) || (defined(CTR) && (CTR == 1))
void AES_init_ctx_iv(struct AES_ctx* ctx, const uint8_t* key, const uint8_t* iv)
{
  KeyExpansion(ctx->RoundKey, key);
  memcpy (ctx->Iv, iv, AES_BLOCKLEN);
}
void AES_ctx_set_iv(struct AES_ctx* ctx, const uint8_t* iv)
{
  memcpy (ctx->Iv, iv, AES_BLOCKLEN);
}
#endif

// This function adds the round key to state.
// The round key is added to the state by an XOR function.
static void AddRoundKey(uint8_t round,state_t* state,uint8_t* RoundKey)
{
  uint8_t i,j;
  for (i = 0; i < 4; ++i)
  {
    for (j = 0; j < 4; ++j)
    {
      (*state)[i][j] ^= RoundKey[(round * Nb * 4) + (i * Nb) + j];
    }
  }
}

// The SubBytes Function Substitutes the values in the
// state matrix with values in an S-box.
static void SubBytes(state_t* state)
{
  uint8_t i, j;
  for (i = 0; i < 4; ++i)
  {
    for (j = 0; j < 4; ++j)
    {
      (*state)[j][i] = getSBoxValue((*state)[j][i]);
    }
  }
}

// The ShiftRows() function shifts the rows in the state to the left.
// Each row is shifted with different offset.
// Offset = Row number. So the first row is not shifted.
static void ShiftRows(state_t* state)
{
  uint8_t temp;

  // Rotate first row 1 columns to left  
  temp           = (*state)[0][1];
  (*state)[0][1] = (*state)[1][1];
  (*state)[1][1] = (*state)[2][1];
  (*state)[2][1] = (*state)[3][1];
  (*state)[3][1] = temp;

  // Rotate second row 2 columns to left  
  temp           = (*state)[0][2];
  (*state)[0][2] = (*state)[2][2];
  (*state)[2][2] = temp;

  temp           = (*state)[1][2];
  (*state)[1][2] = (*state)[3][2];
  (*state)[3][2] = temp;

  // Rotate third row 3 columns to left
  temp           = (*state)[0][3];
  (*state)[0][3] = (*state)[3][3];
  (*state)[3][3] = (*state)[2][3];
  (*state)[2][3] = (*state)[1][3];
  (*state)[1][3] = temp;
}

static uint8_t xtime(uint8_t x)
{
  return ((x<<1) ^ (((x>>7) & 1) * 0x1b));
}

// MixColumns function mixes the columns of the state matrix
static void MixColumns(state_t* state)
{
  uint8_t i;
  uint8_t Tmp, Tm, t;
  for (i = 0; i < 4; ++i)
  {  
    t   = (*state)[i][0];
    Tmp = (*state)[i][0] ^ (*state)[i][1] ^ (*state)[i][2] ^ (*state)[i][3] ;
    Tm  = (*state)[i][0] ^ (*state)[i][1] ; Tm = xtime(Tm);  (*state)[i][0] ^= Tm ^ Tmp ;
    Tm  = (*state)[i][1] ^ (*state)[i][2] ; Tm = xtime(Tm);  (*state)[i][1] ^= Tm ^ Tmp ;
    Tm  = (*state)[i][2] ^ (*state)[i][3] ; Tm = xtime(Tm);  (*state)[i][2] ^= Tm ^ Tmp ;
    Tm  = (*state)[i][3] ^ t ;              Tm = xtime(Tm);  (*state)[i][3] ^= Tm ^ Tmp ;
  }
}

// Multiply is used to multiply numbers in the field GF(2^8)
// Note: The last call to xtime() is unneeded, but often ends up generating a smaller binary
//       The compiler seems to be able to vectorize the operation better this way.
//       See https://github.com/kokke/tiny-AES-c/pull/34
#if MULTIPLY_AS_A_FUNCTION
static uint8_t Multiply(uint8_t x, uint8_t y)
{
  return (((y & 1) * x) ^
       ((y>>1 & 1) * xtime(x)) ^
       ((y>>2 & 1) * xtime(xtime(x))) ^
       ((y>>3 & 1) * xtime(xtime(xtime(x)))) ^
       ((y>>4 & 1) * xtime(xtime(xtime(xtime(x)))))); /* this last call to xtime() can be omitted */
  }
#else
#define Multiply(x, y)                                \
      (  ((y & 1) * x) ^                              \
      ((y>>1 & 1) * xtime(x)) ^                       \
      ((y>>2 & 1) * xtime(xtime(x))) ^                \
      ((y>>3 & 1) * xtime(xtime(xtime(x)))) ^         \
      ((y>>4 & 1) * xtime(xtime(xtime(xtime(x))))))   \

#endif

#if (defined(CBC) && CBC == 1) || (defined(ECB) && ECB == 1)
// MixColumns function mixes the columns of the state matrix.
// The method used to multiply may be difficult to understand for the inexperienced.
// Please use the references to gain more information.
static void InvMixColumns(state_t* state)
{
  int i;
  uint8_t a, b, c, d;
  for (i = 0; i < 4; ++i)
  { 
    a = (*state)[i][0];
    b = (*state)[i][1];
    c = (*state)[i][2];
    d = (*state)[i][3];

    (*state)[i][0] = Multiply(a, 0x0e) ^ Multiply(b, 0x0b) ^ Multiply(c, 0x0d) ^ Multiply(d, 0x09);
    (*state)[i][1] = Multiply(a, 0x09) ^ Multiply(b, 0x0e) ^ Multiply(c, 0x0b) ^ Multiply(d, 0x0d);
    (*state)[i][2] = Multiply(a, 0x0d) ^ Multiply(b, 0x09) ^ Multiply(c, 0x0e) ^ Multiply(d, 0x0b);
    (*state)[i][3] = Multiply(a, 0x0b) ^ Multiply(b, 0x0d) ^ Multiply(c, 0x09) ^ Multiply(d, 0x0e);
  }
}


// The SubBytes Function Substitutes the values in the
// state matrix with values in an S-box.
static void InvSubBytes(state_t* state)
{
  uint8_t i, j;
  for (i = 0; i < 4; ++i)
  {
    for (j = 0; j < 4; ++j)
    {
      (*state)[j][i] = getSBoxInvert((*state)[j][i]);
    }
  }
}

static void InvShiftRows(state_t* state)
{
  uint8_t temp;

  // Rotate first row 1 columns to right  
  temp = (*state)[3][1];
  (*state)[3][1] = (*state)[2][1];
  (*state)[2][1] = (*state)[1][1];
  (*state)[1][1] = (*state)[0][1];
  (*state)[0][1] = temp;

  // Rotate second row 2 columns to right 
  temp = (*state)[0][2];
  (*state)[0][2] = (*state)[2][2];
  (*state)[2][2] = temp;

  temp = (*state)[1][2];
  (*state)[1][2] = (*state)[3][2];
  (*state)[3][2] = temp;

  // Rotate third row 3 columns to right
  temp = (*state)[0][3];
  (*state)[0][3] = (*state)[1][3];
  (*state)[1][3] = (*state)[2][3];
  (*state)[2][3] = (*state)[3][3];
  (*state)[3][3] = temp;
}
#endif // #if (defined(CBC) && CBC == 1) || (defined(ECB) && ECB == 1)

// Cipher is the main function that encrypts the PlainText.
static void Cipher(state_t* state, uint8_t* RoundKey)
{
  uint8_t round = 0;

  // Add the First round key to the state before starting the rounds.
  AddRoundKey(0, state, RoundKey); 
  
  // There will be Nr rounds.
  // The first Nr-1 rounds are identical.
  // These Nr-1 rounds are executed in the loop below.
  for (round = 1; round < Nr; ++round)
  {
    SubBytes(state);
    ShiftRows(state);
    MixColumns(state);
    AddRoundKey(round, state, RoundKey);
  }
  
  // The last round is given below.
  // The MixColumns function is not here in the last round.
  SubBytes(state);
  ShiftRows(state);
  AddRoundKey(Nr, state, RoundKey);
}

#if (defined(CBC) && CBC == 1) || (defined(ECB) && ECB == 1)
static void InvCipher(state_t* state,uint8_t* RoundKey)
{
  uint8_t round = 0;

  // Add the First round key to the state before starting the rounds.
  AddRoundKey(Nr, state, RoundKey); 

  // There will be Nr rounds.
  // The first Nr-1 rounds are identical.
  // These Nr-1 rounds are executed in the loop below.
  for (round = (Nr - 1); round > 0; --round)
  {
    InvShiftRows(state);
    InvSubBytes(state);
    AddRoundKey(round, state, RoundKey);
    InvMixColumns(state);
  }
  
  // The last round is given below.
  // The MixColumns function is not here in the last round.
  InvShiftRows(state);
  InvSubBytes(state);
  AddRoundKey(0, state, RoundKey);
}
#endif // #if (defined(CBC) && CBC == 1) || (defined(ECB) && ECB == 1)

/*****************************************************************************/
/* Public functions:                                                         */
/*****************************************************************************/
#if defined(ECB) && (ECB == 1)


void AES_ECB_encrypt(struct AES_ctx *ctx, uint8_t* buf)
{
  // The next function call encrypts the PlainText with the Key using AES algorithm.
  Cipher((state_t*)buf, ctx->RoundKey);
}

void AES_ECB_decrypt(struct AES_ctx* ctx, uint8_t* buf)
{
  // The next function call decrypts the PlainText with the Key using AES algorithm.
  InvCipher((state_t*)buf, ctx->RoundKey);
}


#endif // #if defined(ECB) && (ECB == 1)





#if defined(CBC) && (CBC == 1)


static void XorWithIv(uint8_t* buf, uint8_t* Iv)
{
  uint8_t i;
  for (i = 0; i < AES_BLOCKLEN; ++i) // The block in AES is always 128bit no matter the key size
  {
    buf[i] ^= Iv[i];
  }
}

void AES_CBC_encrypt_buffer(struct AES_ctx *ctx,uint8_t* buf, uint32_t length)
{
  uintptr_t i;
  uint8_t *Iv = ctx->Iv;
  for (i = 0; i < length; i += AES_BLOCKLEN)
  {
    XorWithIv(buf, Iv);
    Cipher((state_t*)buf, ctx->RoundKey);
    Iv = buf;
    buf += AES_BLOCKLEN;
    //printf("Step %d - %d", i/16, i);
  }
  /* store Iv in ctx for next call */
  memcpy(ctx->Iv, Iv, AES_BLOCKLEN);
}

void AES_CBC_decrypt_buffer(struct AES_ctx* ctx, uint8_t* buf,  uint32_t length)
{
  uintptr_t i;
  uint8_t storeNextIv[AES_BLOCKLEN];
  for (i = 0; i < length; i += AES_BLOCKLEN)
  {
    memcpy(storeNextIv, buf, AES_BLOCKLEN);
    InvCipher((state_t*)buf, ctx->RoundKey);
    XorWithIv(buf, ctx->Iv);
    memcpy(ctx->Iv, storeNextIv, AES_BLOCKLEN);
    buf += AES_BLOCKLEN;
  }

}

#endif // #if defined(CBC) && (CBC == 1)



#if defined(CTR) && (CTR == 1)

/* Symmetrical operation: same function for encrypting as for decrypting. Note any IV/nonce should never be reused with the same key */
void AES_CTR_xcrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length)
{
  uint8_t buffer[AES_BLOCKLEN];
  
  unsigned i;
  int bi;
  for (i = 0, bi = AES_BLOCKLEN; i < length; ++i, ++bi)
  {
    if (bi == AES_BLOCKLEN) /* we need to regen xor compliment in buffer */
    {
      
      memcpy(buffer, ctx->Iv, AES_BLOCKLEN);
      Cipher((state_t*)buffer,ctx->RoundKey);

      /* Increment Iv and handle overflow */
      for (bi = (AES_BLOCKLEN - 1); bi >= 0; --bi)
      {
	/* inc will owerflow */
        if (ctx->Iv[bi] == 255)
	{
          ctx->Iv[bi] = 0;
          continue;
        } 
        ctx->Iv[bi] += 1;
        break;   
      }
      bi = 0;
    }

    buf[i] = (buf[i] ^ buffer[bi]);
  }
}

#endif // #if defined(CTR) && (CTR == 1)


#endif
//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




struct DtwStringArray * newDtwStringArray(){
    struct DtwStringArray *self = ( DtwStringArray*)malloc(sizeof(struct DtwStringArray));
    self->size = 0;

    self->strings = (char**)malloc(1);

    return self;
}

int DtwStringArray_find_position( DtwStringArray *self, const char *string){
    for(int i = 0; i < self->size; i++){
        if(strcmp(self->strings[i], string) == 0){
            return i;
        }
    }
    return -1;
}


void DtwStringArray_set_value( DtwStringArray *self, int index, const char *value){
    if(index < self->size && index >= 0){
        int size = strlen(value);
        self->strings[index] = (char*)realloc(self->strings[index], size + 1);
        self->strings[index][size] = '\0';
        strcpy(self->strings[index], value);
    }
}
void DtwStringArray_append_getting_ownership( DtwStringArray *self, char *string){
    self->strings =  (char**)realloc(self->strings, (self->size+ 1) * sizeof(char*));
    self->strings[self->size] = string;
    self->size+=1;
}

// Function prototypes
void DtwStringArray_append( DtwStringArray *self, const  char *string){

    self->strings =  (char**)realloc(self->strings, (self->size+ 1) * sizeof(char*));
    self->strings[self->size] = strdup(string);
    self->size+=1;
}

void DtwStringArray_pop( DtwStringArray *self, int position){
    free(self->strings[position]);
    for(int i = position; i < self->size -1; i++){
        self->strings[i] = self->strings[i+1];
    }
    self->size-=1;
}

void DtwStringArray_merge( DtwStringArray *self,  DtwStringArray *other){
    for(int i = 0; i < other->size; i++){
        DtwStringArray_append(self, other->strings[i]);
    }
}


void DtwStringArray_represent( DtwStringArray *self){
    for(int i = 0; i < self->size; i++){
        printf("%s\n", self->strings[i]);
    }
}

int private_dtw_string_cmp(const void *a, const void *b){

    bool a_its_number;

    double a_num_value = private_dtw_convert_string_to_number(*(const char **)a, &a_its_number);

    if(a_its_number){
        bool b_its_number;

        double b_num_value = private_dtw_convert_string_to_number(*(const char **)b, &b_its_number);

        if(b_its_number){


            return a_num_value - b_num_value;
        }
    }

    const char *str_a = *(const char **)a;
    const char *str_b = *(const char **)b;
    return strcmp(str_a, str_b);
}

void DtwStringArray_sort(struct DtwStringArray *self) {

    qsort(self->strings, self->size, sizeof(char*), private_dtw_string_cmp);
}

 DtwStringArray * DtwStringArray_clone(DtwStringArray *self){
    DtwStringArray  *clone = newDtwStringArray();
    for(int i = 0; i< self->size; i++){
        DtwStringArray_append(clone,self->strings[i]);
    }
    return clone;
}

char * privateDtwStringArray_append_if_not_included(DtwStringArray *self,char *value){
    long position=DtwStringArray_find_position(self,value);
    if(position != -1){
        free(value);
        return self->strings[position];
    }
    DtwStringArray_append_getting_ownership(self,value);
    return value;
}
void DtwStringArray_free(struct DtwStringArray *self){
    for(int i = 0; i < self->size; i++){
            free(self->strings[i]);
    }

    free(self->strings);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



void private_dtw_remove_double_bars_from_string_array(struct DtwStringArray*path){
    for(int i =0;i< path->size;i++){
        char *buffer = private_dtw_format_path(path->strings[i]);
        free(path->strings[i]);
        path->strings[i] = buffer;
    }
}

char *dtw_concat_path(const char *path1, const char *path2){

    if(path1 == NULL){
        return strdup(path2);
    }

    if(path2 == NULL){
        return strdup(path1);
    }
    int path1_size = strlen(path1);
    int path2_size = strlen(path2);

    char *final = (char*)malloc(path1_size+ path2_size + 2);
    int final_size = 0;


    bool start_path1_found = false;

    for(int i = path1_size-1; i >= 0; i--){
        char current = path1[i];

        if(current != '/' && current != '\\' && !start_path1_found){
            start_path1_found = true;
            final_size = i+1;
        }
        if(start_path1_found){
            final[i] = current;
        }


    }



    //concating
    #if  defined (__linux__)
        final[final_size] = '/';
        final_size+=1;
    #endif

    #if  defined (_WIN32)
        final[final_size] = '\\';
        final_size+=1;
    #endif
    bool path2_found = false;
    for(int i=0; i < path2_size;i++){
        char current = path2[i];
        if(current != '/' && current != '\\' && !path2_found){
            path2_found = true;
        }
        if(path2_found){
            final[final_size] = current;
            final_size+=1;

        }

    }

    final[final_size] = '\0';

    return final;




}

char * private_dtw_format_vaarg(const char *expresion, va_list args){

    va_list args_copy;
    va_copy(args_copy, args);
    long required_size = vsnprintf(NULL, 0,expresion,args_copy);
    va_end(args_copy);
    char *buffer = (char*)malloc(sizeof(char) * required_size + 2);
    vsnprintf(buffer,sizeof (char) * required_size+1,expresion,args);
    return buffer;
}

char *private_dtw_format_path(const char *path){
    int path_size = (int)strlen(path);
    char *buffer = (char*)malloc((path_size+2) * sizeof(char));
    int buffer_size = 0;
    bool already_concatened = false;
    for(long i = 0; i < path_size;i++){
        char current_char = path[i];

        bool is_a_divisor =current_char == '\\' || current_char == '/';

        if(is_a_divisor && already_concatened){
            continue;
        }
        if(is_a_divisor){
#ifdef __linux
            buffer[buffer_size] = '/';
#else
            buffer[buffer_size] = '\\';
#endif
            buffer_size+=1;
            already_concatened = true;
            continue;
        }

        already_concatened = false;
        buffer[buffer_size] = current_char;
        buffer_size+=1;

    }
    buffer[buffer_size] = '\0';
    return buffer;
}


char * private_dtw_sub_str(const char *str, long start,long end){
    long size = end - start;
    char *value = (char*)malloc(size+ 2);

    for(long i = 0; i <size; i++){
        value[i] = str[i+start];
    }
    value[size] = '\0';
    return value;
}


bool dtw_starts_with(const char *string, const char *prefix){
    if(!string || !prefix){
        return false;
    }
    if(strncmp(string, prefix, strlen(prefix)) == 0){
        return true;
    }
    return false;
}

bool dtw_ends_with(const char *string, const char *suffix){
    if(strlen(string) < strlen(suffix)){
        return false;
    }
    if(strcmp(string + strlen(string) - strlen(suffix), suffix) == 0){
        return true;
    }
    return false;
}

char *private_dtw_replace_string_once(const char *target, const char *old_element, const char *new_element) {

    const char *pos = strstr(target, old_element);

    int size_of_old_element = (int)strlen(old_element);
    int size_of_new_element = (int)strlen(new_element);
    // Allocate memory for the new string
    char *result = (char *)malloc(strlen(target) + size_of_new_element - size_of_old_element + 1);

    // Copy the part of the original string before the old substring
    strncpy(result, target, pos - target);

    // Copy the new substring to the result string
    strcpy(result + (pos - target), new_element);

    // Copy the rest of the original string after the old substring
    strcpy(result + (pos - target) + size_of_new_element, pos + size_of_old_element);

    return result;



}

char* dtw_replace_string(const char *target, const char *old_element, const char *new_element) {
    char *result = (char *)malloc(strlen(target) + 1);
    strcpy(result, target);
    char *temp = NULL;
    while (strstr(result, old_element) != NULL) {
        temp = private_dtw_replace_string_once(result, old_element, new_element);
        free(result);
        result = temp;
    }
    return result;
}



char *private_dtw_change_beginning_of_string(const char *target,int start_element_to_remove_size, const char *new_element) {
    int target_size = (int)strlen(target);
    int new_element_size = (int)strlen(new_element);
    char *result = (char *)malloc(target_size- start_element_to_remove_size + new_element_size   +2);
    strcpy(result, new_element);
    char *new_target = (char *)malloc(target_size - start_element_to_remove_size + 2);
    strcpy(new_target, target + start_element_to_remove_size);
    strcat(result, new_target);
    free(new_target);
    return result;
}



char *private_dtw_realoc_formatting(char *ptr,const char *format,...){

    va_list args;
    va_start(args, format);
    char *value = private_dtw_format_vaarg(format,args);
    va_end(args);
    if(ptr){
        free(ptr);
    }

    return value;
}
char *private_dtw_formatt(const char *format,...){

    va_list args;
    va_start(args, format);
    char *value = private_dtw_format_vaarg(format,args);
    va_end(args);
    return value;
}
bool dtw_is_string_at_point(
        const char *str,
        long str_size,
        const char *target,
        long target_size,
        long target_point
        ){

    if(target_size + target_point > str_size){
        return false;
    }
    for(long i = 0; i < target_size; i++ ){
        char current_char = target[i];
        char char_to_compare = str[i+target_point];
        if(current_char != char_to_compare){
            return  false;
        }
    }
    return true;
}

long  dtw_index_of_string(const char *str,const char *element){
    long str_size = (long)strlen(str);
    long element_size = (long)strlen(element);

    for(int i = 0; i <str_size; i++){
        if(dtw_is_string_at_point(str,str_size,element,element_size,i)){
            return i;
        }
    }
    return -1;
}

double private_dtw_convert_string_to_number(const char *num, bool *its_a_number){

    long size_num = strlen(num);

    if(size_num == 0){
        *its_a_number = false;
        return -1;
    }

    bool dot_found = false;

    for(int i = 0; i < size_num; i++){
        char current = num[i];

        if(current == '.'){
            if(i == 0 || dot_found || i == size_num - 1){
                *its_a_number = false;
                return -1;
            }

            dot_found = true;
            continue;
        }

        if(current == '0'){
            continue;
        }

        if(current == '1'){
            continue;
        }

        if(current == '2'){
            continue;
        }

        if(current == '3'){
            continue;
        }

        if(current == '4'){
            continue;
        }

        if(current == '5'){
            continue;
        }

        if(current == '6'){
            continue;
        }

        if(current == '7'){
            continue;
        }

        if(current == '8'){
            continue;
        }

        if(current == '9'){
            continue;
        }

        *its_a_number = false;

        return -1;
    }

    *its_a_number = true;

    return atof(num);


}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwActionTransaction * newDtwActionTransaction(){
    DtwActionTransaction *self = (DtwActionTransaction*) malloc(sizeof (DtwActionTransaction));
    *self= (DtwActionTransaction){0};
    return self;
}


DtwActionTransaction * DtwActionTransaction_write_any(const char *source, unsigned  char *content,long size,bool is_binary){
    DtwActionTransaction *self = newDtwActionTransaction();
    self->action_type = DTW_ACTION_WRITE;
    self->content = (unsigned char*)malloc(size +2);
    memcpy(self->content,content,size);
    self->content[size] = '\0';
    self->size = size;
    self->source = strdup(source);
    self->is_binary = is_binary;
    return self;
}


DtwActionTransaction * DtwActionTransaction_move_any(const char *source, const char *dest){
    DtwActionTransaction *self = newDtwActionTransaction();
    self->action_type = DTW_ACTION_MOVE;
    self->source = strdup(source);
    self->dest = strdup(dest);
    return self;

}


DtwActionTransaction * DtwActionTransaction_copy_any(const char *source, const char *dest){
    DtwActionTransaction *self = newDtwActionTransaction();
    self->action_type = DTW_ACTION_COPY;
    self->source = strdup(source);
    self->dest = strdup(dest);
    return self;
}
DtwActionTransaction * DtwActionTransaction_move_any_merging(const char *source, const char *dest){
    DtwActionTransaction *self = newDtwActionTransaction();
    self->action_type = DTW_ACTION_MOVE_MERGING;
    self->source = strdup(source);
    self->dest = strdup(dest);
    return self;
}

DtwActionTransaction * DtwActionTransaction_copy_any_merging(const char *source, const char *dest){
    DtwActionTransaction *self = newDtwActionTransaction();
    self->action_type = DTW_ACTION_COPY_MERGING;
    self->source = strdup(source);
    self->dest = strdup(dest);
    return self;
}

DtwActionTransaction * DtwActionTransaction_delete_any(const char *source){
    DtwActionTransaction *self = newDtwActionTransaction();
    *self = (DtwActionTransaction){0};
    self->action_type = DTW_ACTION_DELETE;
    self->source = strdup(source);
    return self;
}



void DtwActionTransaction_commit(DtwActionTransaction* self,const char *path){

    char *formated_source = dtw_concat_path(path,self->source);


    if(self->action_type == DTW_ACTION_WRITE){
        if(self->encryption){
            private_DtwEncriptionInterface_write_any_content_custom_mode(
                self->encryption,
                formated_source,
                self->content,
                self->size,
                self->encryption_mode
            );
            free(formated_source);
            return;
        }
        dtw_write_any_content(formated_source,self->content,self->size);
        free(formated_source);
        return;
    }
    if(self->action_type == DTW_ACTION_DELETE){
        dtw_remove_any(formated_source);
        free(formated_source);
        return;
    }
    char *formated_dest = dtw_concat_path(path,self->dest);

    if(self->action_type == DTW_ACTION_MOVE){
        dtw_move_any(formated_source,formated_dest,DTW_NOT_MERGE);
    }

    if(self->action_type == DTW_ACTION_MOVE_MERGING){
        dtw_move_any(formated_source,formated_dest,DTW_MERGE);
    }

    if(self->action_type == DTW_ACTION_COPY){
        dtw_copy_any(formated_source,formated_dest,DTW_NOT_MERGE);
    }

    if(self->action_type == DTW_ACTION_COPY_MERGING){
        dtw_copy_any(formated_source,formated_dest,DTW_MERGE);
    }

    free(formated_dest);
    free(formated_source);

}


void DtwActionTransaction_free(DtwActionTransaction* self){

    if(self->content){
        free(self->content);
    }
    if(self->source){
        free(self->source);
    }
    if(self->dest){
        free(self->dest);
    }
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



short DtwActionTransaction_convert_action_to_integer(char *action){
    if(strcmp(action,"write") == 0){
        return DTW_ACTION_WRITE;
    }

    if(strcmp(action,"move") == 0){
        return DTW_ACTION_MOVE;
    }

    if(strcmp(action,"copy") == 0){
        return DTW_ACTION_COPY;
    }

    if(strcmp(action,"delete") == 0){
        return DTW_ACTION_DELETE;
    }
    return -1;

}

const char * DtwActionTransaction_convert_action_to_string(int action){
    if(action == DTW_ACTION_WRITE){
        return "write";
    }
    if(action == DTW_ACTION_MOVE){
        return "move";
    }

    if(action == DTW_ACTION_COPY){
        return "copy";
    }
    if(action == DTW_ACTION_DELETE){
        return "delete";
    }
    return NULL;
}

DtwJsonTransactionError * private_dtw_validate_json_action_transaction(cJSON *json_obj){

    if(json_obj->type != cJSON_Object ){
        return private_new_DtwJsonTransactionError(
                JSON_TRANSACTION_WRONG_TYPE,
                "the action object its not an object",
                NULL
        );
    }

    cJSON *action = cJSON_GetObjectItem(json_obj,"action");

    if(!action){
        return private_new_DtwJsonTransactionError(
                JSON_TRANSACTION_NOT_PRESENT_VALUE,
                "the action is not present",
                "[\"action\"]"
        );
    }

    if(action->type != cJSON_String){
        return private_new_DtwJsonTransactionError(
                JSON_TRANSACTION_WRONG_TYPE,
                "the action is not an string",
                "[\"action\"]"
        );
    }


    int converted_action = DtwActionTransaction_convert_action_to_integer(action->valuestring);

    if(converted_action == -1){

        char *formated_mensage = (char*)calloc(sizeof (char),strlen(action->valuestring) + 30);
        sprintf(formated_mensage,"the action: %s its not valid",action->valuestring);
        DtwJsonTransactionError  *error = private_new_DtwJsonTransactionError(
                JSON_TRANSACTION_INVALID_ACTION,
                formated_mensage,
                "[\"action\"]"
        );
        free(formated_mensage);
        return error;
    }

    if(converted_action == DTW_ACTION_WRITE){
        cJSON  *content = cJSON_GetObjectItem(json_obj,"content");
        if(!content){
            return private_new_DtwJsonTransactionError(
                    JSON_TRANSACTION_NOT_PRESENT_VALUE,
                    "the content is not present",
                    "[\"content\"]"
            );
        }
        if(content->type != cJSON_String){
            return private_new_DtwJsonTransactionError(
                    JSON_TRANSACTION_WRONG_TYPE,
                    "the content is not an string",
                    "[\"content\"]"
            );
        }
        cJSON *is_binary = cJSON_GetObjectItem(json_obj,"is binary");
        if(is_binary){
            if(!cJSON_IsBool(is_binary)){
                return private_new_DtwJsonTransactionError(
                        JSON_TRANSACTION_WRONG_TYPE,
                        "the is binary is not an bool",
                        "[\"is binary\"]"
                );
            }
        }

    }




    cJSON *source = cJSON_GetObjectItem(json_obj,"source");
    if(!source){
        return private_new_DtwJsonTransactionError(
                JSON_TRANSACTION_NOT_PRESENT_VALUE,
                "the source is not present",
                "[\"source\"]"
        );
    }

    if(source->type != cJSON_String){
        return private_new_DtwJsonTransactionError(
                JSON_TRANSACTION_WRONG_TYPE,
                "the source is not an string",
                "[\"source\"]"
        );
    }

    if(converted_action == DTW_ACTION_MOVE || converted_action == DTW_ACTION_COPY){
        cJSON *dest = cJSON_GetObjectItem(json_obj,"dest");

        if(!dest){
            return private_new_DtwJsonTransactionError(
                    JSON_TRANSACTION_NOT_PRESENT_VALUE,
                    "the dest is not present",
                    "[\"dest\"]"
            );
        }
        if(dest->type != cJSON_String){
            return private_new_DtwJsonTransactionError(
                    JSON_TRANSACTION_WRONG_TYPE,
                    "the dest is not an string",
                    "[\"dest\"]"
            );
        }
    }
    return NULL;

}


DtwActionTransaction * private_DtwActionTransaction_parse_json_object(cJSON *json_obj){
    DtwActionTransaction  *self = newDtwActionTransaction();

    char *action = cJSON_GetObjectItem(json_obj,"action")->valuestring;
    self->action_type  = DtwActionTransaction_convert_action_to_integer(action);

    char *source = cJSON_GetObjectItem(json_obj,"source")->valuestring;
    self->source = strdup(source);

    if(self->action_type == DTW_ACTION_DELETE){
        return self;
    }

    if(self->action_type == DTW_ACTION_WRITE){
        cJSON *is_binary = cJSON_GetObjectItem(json_obj,"is binary");

        if(is_binary){
            if(is_binary->valueint){
                self->is_binary= true;
            }
        }

        char *content = cJSON_GetObjectItem(json_obj,"content")->valuestring;
        if(self->is_binary){
            self->content = dtw_base64_decode(content,&self->size);
        }
        else{
            self->content =(unsigned char*)strdup(content);
            self->size =(long)strlen(content);
        }

        return self;
    }
    char *dest  = cJSON_GetObjectItem(json_obj,"dest")->valuestring;
    self->dest = strdup(dest);
    return self;
}

cJSON *  private_DtwActionTransaction_create_json_object(DtwActionTransaction* self){
    cJSON * json_object = cJSON_CreateObject();
    cJSON_AddStringToObject(json_object,"action",DtwActionTransaction_convert_action_to_string(self->action_type));

    cJSON_AddStringToObject(json_object,"source",self->source);
    if(self->action_type ==DTW_ACTION_WRITE){
        if(self->is_binary){
            char *converted = dtw_base64_encode(self->content,self->size);
            cJSON_AddStringToObject(json_object,"content",converted);
            free(converted);
            cJSON_AddBoolToObject(json_object,"is binary",true);
        }
        else{
            cJSON_AddStringToObject(json_object,"content",(char*)self->content);
        }
    }
    if(self->action_type != DTW_ACTION_DELETE){
        cJSON_AddStringToObject(json_object,"dest",self->dest);
    }

    return json_object;
}



void DtwActionTransaction_represent(DtwActionTransaction* self){

    printf("\taction: %s\n", DtwActionTransaction_convert_action_to_string(self->action_type));
    printf("\tsource:%s\n",self->source);
    if(self->action_type == DTW_ACTION_WRITE){

        if(!self->is_binary && self->size <  30){

            printf("\tcontent : %s\n",(char*)self->content);
        }
        else{
            printf("\tcontent: impossible to show\n");
        }

        printf("\tsize:%ld\n",self->size);
        printf("\tis binary: %s\n",self->is_binary? "true":"false");
        return;
    }

    if(self->action_type != DTW_ACTION_DELETE){
        printf("\tdest: %s\n",self->dest);
    }

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end







DtwJsonTransactionError * private_new_DtwJsonTransactionError( int code,const char *mensage,const  char *path){
    DtwJsonTransactionError *self = (DtwJsonTransactionError*) malloc(sizeof(DtwJsonTransactionError));
    self->code  = code;
    self->mensage = strdup(mensage);
    self->path = NULL;
    if(path){
        self->path = strdup(path);
    }

    return self;
}

void DtwJsonTransactionError_represent(struct DtwJsonTransactionError *self){
    printf("code: %d\n",self->code);
    printf("mensage:%s\n",self->mensage);
    if(self->path){
        printf("path: %s",self->path);
    }
}

void DtwJsonTransactionError_prepend_path(struct DtwJsonTransactionError *self,char *path){
    if(self->path){

        char *new_path = (char*)calloc(sizeof (char), strlen(self->path) + strlen(path) + 2);

        sprintf(new_path,"%s%s",path,self->path);

        free(self->path);
        self->path = new_path;
        return;
    }
    self->path = strdup(path);
}


void DtwJsonTransactionError_free(struct DtwJsonTransactionError *self){
    free(self->mensage);
    if(self->path){
        free(self->path);
    }
    free(self);

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwTransaction * newDtwTransaction(){
    DtwTransaction *self = (DtwTransaction*) malloc(sizeof(DtwTransaction));
    *self = (DtwTransaction){0};
    self->actions = (DtwActionTransaction **) malloc(sizeof (DtwActionTransaction**));
    self->size = 0;

    return self;
}
void DtwTransaction_set_encryption(DtwTransaction *self,DtwEncriptionInterface *encryption,short encryiption_mode){
    self->encryption = encryption;
    self->encryption_mode = encryiption_mode;
}

void DtwTransaction_append_action(struct DtwTransaction *self,struct DtwActionTransaction  *action){
    self->actions =  (DtwActionTransaction**)realloc(
            self->actions,
            (sizeof(DtwActionTransaction*) * (self->size+1))
    );
    self->actions[self->size] = action;
    self->size++;
}


void DtwTransaction_remove_from_index(DtwTransaction *self,long index){


    DtwActionTransaction_free(self->actions[index]);
    self->size -=1;
    if(self->size == 0){
        return;
    }
    for(long i = index; i < self->size; i++){
        self->actions[i] = self->actions[i+1];
    }

}
void DtwTransaction_filter(DtwTransaction *self,bool (*callback)(DtwActionTransaction *action)){
    for(long i = 0; i < self->size; i++){
        DtwActionTransaction *current = self->actions[i];
        if(!callback(current)){
            DtwTransaction_remove_from_index(self,i);
            i-=1;
        }
    }
}

void DtwTransaction_remove_from_source(DtwTransaction *self,const char *source){
    for(long i = 0; i < self->size; i++){
        DtwActionTransaction *current = self->actions[i];
        if(strcmp(current->source,source) ==0){
            DtwTransaction_remove_from_index(self,i);
            i-=1;
        }
    }
}


void DtwTransaction_write_any(struct DtwTransaction *self,const char *path,unsigned char *content, long size,bool is_binary){
    DtwActionTransaction * action = DtwActionTransaction_write_any(path,content,size,is_binary);
    DtwTransaction_append_action(self,action);
}

void DtwTransaction_write_string(struct DtwTransaction *self,const char *path,const char *content){
    DtwActionTransaction * action = DtwActionTransaction_write_any(path,(unsigned char*)content, strlen(content),false);
    DtwTransaction_append_action(self,action);
}


void DtwTransaction_write_long(struct DtwTransaction *self,const char *path,long value){
    char converted[20] ={0};
    sprintf(converted,"%ld",value);
    DtwTransaction_write_string(self,path,converted);
}

void DtwTransaction_write_bool(struct DtwTransaction *self,const char *path,bool value){
    if(value){
        DtwTransaction_write_string(self,path,"t");
    }
    else{
        DtwTransaction_write_string(self,path,"f");
    }
}

void DtwTransaction_write_double(struct DtwTransaction *self,const char *path,double value){
    char converted[20] ={0};
    sprintf(converted,"%lf",value);
    DtwTransaction_write_string(self,path,converted);
}


void DtwTransaction_move_any(struct DtwTransaction *self,const char *source,const char *dest){
    DtwActionTransaction * action = DtwActionTransaction_move_any(source,dest);
    DtwTransaction_append_action(self,action);
}

void DtwTransaction_copy_any(struct DtwTransaction *self,const char *source,const char *dest){
    DtwActionTransaction * action = DtwActionTransaction_copy_any(source,dest);
    DtwTransaction_append_action(self,action);
}

void DtwTransaction_move_any_merging(struct DtwTransaction *self,const char *source,const char *dest){
    DtwActionTransaction * action = DtwActionTransaction_move_any_merging(source,dest);
    DtwTransaction_append_action(self,action);
}


void DtwTransaction_copy_any_merging(struct DtwTransaction *self,const char *source,const char *dest){
    DtwActionTransaction * action = DtwActionTransaction_copy_any_merging(source,dest);
    DtwTransaction_append_action(self,action);
}


void DtwTransaction_delete_any(struct DtwTransaction *self,const char *source){
     DtwActionTransaction  *action = DtwActionTransaction_delete_any(source);
     DtwTransaction_append_action(self,action);
}



void DtwTransaction_commit(struct DtwTransaction *self,const char *path){
    for(int i = 0; i < self->size; i++){
        DtwActionTransaction *action = self->actions[i];
        action->encryption  = self->encryption;
        action->encryption_mode = self->encryption_mode;
        DtwActionTransaction_commit(action,path);
    }
}



void DtwTransaction_free(struct DtwTransaction *self){
    for(int i =0; i < self->size; i++){
        DtwActionTransaction_free(self->actions[i]);
    }
    free(self->actions);
    free(self);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




DtwJsonTransactionError * dtw_validate_json_transaction(cJSON *json_entry){
    if(json_entry->type != cJSON_Array){
        return private_new_DtwJsonTransactionError(
                JSON_TRANSACTION_WRONG_TYPE,
                "the initial value its not an array",
                NULL
                );
    }
    long  element_size = cJSON_GetArraySize(json_entry);
    for(long  i = 0; i <element_size; i++){

        cJSON *current_obj = cJSON_GetArrayItem(json_entry,i);

        DtwJsonTransactionError  *current_error = private_dtw_validate_json_action_transaction(current_obj);
        if(current_error){
            char formated_path[20] = {0};
            sprintf(formated_path,"[%ld]",i);
            DtwJsonTransactionError_prepend_path(current_error,formated_path);

            return current_error;
        }

    }

    return NULL;
}


DtwJsonTransactionError * dtw_validate_json_transaction_file(const char *filename){
    char *content = dtw_load_string_file_content(filename);
    if(!content){
        char *formated_mensage = (char*)calloc(sizeof (char), strlen(filename) + 50);
        sprintf(formated_mensage, "file: %s not found",filename);
        DtwJsonTransactionError  *error = private_new_DtwJsonTransactionError(
                DTW_ACTION_FILE_NOT_FOUND,
                formated_mensage,
                NULL
                );
        free(formated_mensage);
        return error;
    }
    cJSON *parsed = cJSON_Parse(content);
    if(!parsed){
        char *formated_mensage = (char*)calloc(sizeof (char), strlen(filename) + 50);
        sprintf(formated_mensage, "file: %s its not an valid json",filename);
        DtwJsonTransactionError  *error = private_new_DtwJsonTransactionError(
                DTW_ACTION_ITS_NOT_JSON,
                formated_mensage,
                NULL
        );
        free(formated_mensage);
        free(content);
        return error;
    }
    DtwJsonTransactionError *generated_error = dtw_validate_json_transaction(parsed);

    free(content);
    cJSON_Delete(parsed);
    return generated_error;
}


DtwTransaction * newDtwTransaction_from_json(cJSON *json_entry){
    DtwJsonTransactionError *generated_error = dtw_validate_json_transaction(json_entry);
    if(generated_error) {
        DtwJsonTransactionError_free(generated_error);
        return NULL;
    }
    DtwTransaction *self = newDtwTransaction();
    long size = cJSON_GetArraySize(json_entry);
    for(int i  = 0; i < size; i ++){
        cJSON  *object_action = cJSON_GetArrayItem(json_entry,i);
        DtwActionTransaction  *current_action = private_DtwActionTransaction_parse_json_object(object_action);
        DtwTransaction_append_action(self,current_action);
    }
    return self;
}



DtwTransaction * newDtwTransaction_from_json_file(const char *filename){
    char *content = dtw_load_string_file_content(filename);
    if(!content){
        return NULL;
    }

    cJSON  *element = cJSON_Parse(content);
    free(content);
    if(!element){
        return NULL;
    }

    DtwJsonTransactionError *error = dtw_validate_json_transaction(element);
    if(error){
        DtwJsonTransactionError_free(error);
        cJSON_Delete(element);
        return NULL;
    }


    DtwTransaction  *self = newDtwTransaction_from_json(element);
    cJSON_Delete(element);

    return self;
}

cJSON * DtwTransaction_dumps_to_json(struct DtwTransaction *self){
    cJSON * json_array = cJSON_CreateArray();
    for(int i =0; i < self->size; i ++){

        cJSON_AddItemToArray(
                json_array,
                private_DtwActionTransaction_create_json_object(self->actions[i])
        );

    }
    return json_array;
}


void DtwTransaction_dumps_to_json_file(struct DtwTransaction *self,const char *filename){
    cJSON *json_array = DtwTransaction_dumps_to_json(self);
    char *result = cJSON_Print(json_array);
    dtw_write_string_file_content(filename,result);
    free(result);
    cJSON_Delete(json_array);
}

void DtwTransaction_represent(struct DtwTransaction *self){

    for(int i = 0; i < self->size; i++){

        DtwActionTransaction_represent(self->actions[i]);
        printf("------------------------------------\n");

    }

}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwJsonTreeError * newDtwJsonError(){
     DtwJsonTreeError *self =(DtwJsonTreeError*)malloc(sizeof(struct DtwJsonTreeError));
    return self;
}

DtwJsonTreeError * DtwJsonTreeError_validate_json_tree_by_cJSON(cJSON *json_tree){
     struct DtwJsonTreeError *json_error = newDtwJsonError();
    //verifiy if json_tre is not null
    if(json_tree == NULL){
        json_error->code = DTW_JSON_SYNTAX_ERROR;
        json_error->menssage = "json_tree is null";
        return json_error;
    }

    //verifiy if json_tre is an array
    if(!cJSON_IsArray(json_tree)){
        cJSON_Delete(json_tree);
        json_error->code = DTW_JSON_TYPE_ERROR;
        json_error->menssage = "json_tree is not an array";
        return json_error;
    }

    int size = cJSON_GetArraySize(json_tree);
    for(int i = 0; i < size; i++){
        json_error->position = i;
        cJSON *json_tree_part = cJSON_GetArrayItem(json_tree, i);
        cJSON *path = cJSON_GetObjectItemCaseSensitive(json_tree_part, "path");
        cJSON *original_path = cJSON_GetObjectItemCaseSensitive(json_tree_part, "original_path");
        cJSON *hardware_sha = cJSON_GetObjectItemCaseSensitive(json_tree_part, "hardware_sha256");
        cJSON *hardware_content_size = cJSON_GetObjectItemCaseSensitive(json_tree_part, "hardware_content_size");
        cJSON *last_modification_in_unix_time = cJSON_GetObjectItemCaseSensitive(json_tree_part, "last_modification_in_unix_time");
        cJSON *content_size = cJSON_GetObjectItemCaseSensitive(json_tree_part, "content_size");
        cJSON *is_binary = cJSON_GetObjectItemCaseSensitive(json_tree_part, "is_binary");
        cJSON *content = cJSON_GetObjectItemCaseSensitive(json_tree_part, "content");
        cJSON *ignore = cJSON_GetObjectItemCaseSensitive(json_tree_part, "ignore");
        cJSON *pending_action = cJSON_GetObjectItemCaseSensitive(json_tree_part, "pending_action");
        //path is required
        if(!cJSON_IsString(path)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_KEY_ERROR;
            json_error->menssage = "path is not a string";
            return json_error;
        }

        //Others are not required
        if(original_path != NULL && !cJSON_IsString(original_path)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
            json_error->menssage = "original_path is not a string";
            return json_error;
        }
        if(hardware_sha != NULL && !cJSON_IsString(hardware_sha)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
            json_error->menssage = "hardware_sha is not a string";
            return json_error;
        }
        if(hardware_content_size != NULL && !cJSON_IsNumber(hardware_content_size)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
            json_error->menssage = "hardware_content_size is not a number";
            return json_error;
        }
        if(last_modification_in_unix_time != NULL && !cJSON_IsNumber(last_modification_in_unix_time)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
            json_error->menssage = "last_modification_in_unix_time is not a number";
            return json_error;
        }
        if(content_size != NULL && !cJSON_IsNumber(content_size)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
            json_error->menssage = "content_size is not a number";
            return json_error;
        }

        if(is_binary != NULL && !cJSON_IsBool(is_binary)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
            json_error->menssage = "is_binary is not a bool";
            return json_error;
        }
        if(content != NULL && !cJSON_IsString(content)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
            json_error->menssage = "content is not a string";
            return json_error;
        }
        if(ignore != NULL && !cJSON_IsBool(ignore)){
            cJSON_Delete(json_tree);
            json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
            json_error->menssage = "ignore is not a bool";
            return json_error;
        }

        if(pending_action != NULL && cJSON_IsNull(pending_action) == false){

            if(cJSON_IsString(pending_action)){

                int action = private_dtw_convert_string_to_action(
                    cJSON_GetStringValue(pending_action)
                );
                if(action == DTW_ACTION_ERROR){
                    cJSON_Delete(json_tree);
                    json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
                    json_error->menssage = "pending_action is not a valid action";
                    return json_error;
                }
            }
            else{
                cJSON_Delete(json_tree);
                json_error->code = DTW_JSON_REQUIRED_VALUE_ERROR;
                json_error->menssage = "pending_action is not a valid action";
                return json_error;
            }


        }

    }
     DtwJsonTreeError_free(json_error);
     return NULL;
 }

 DtwJsonTreeError * DtwJsonTreeError_validate_json_tree_by_content(const char *content){
     cJSON *json_tree = cJSON_Parse(content);
     DtwJsonTreeError *json_error = DtwJsonTreeError_validate_json_tree_by_cJSON(json_tree);
     cJSON_Delete(json_tree);
     return json_error;
 }




void DtwJsonTreeError_represent( DtwJsonTreeError *self){

    if(self == NULL){
        return;
    }
    printf("code: %d\n", self->code);
    printf("position: %d\n", self->position);
    printf("menssage: %s\n", self->menssage);
}

void DtwJsonTreeError_free(struct DtwJsonTreeError *self){
     if(self){
         free(self);
     }
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




struct DtwTreeTransactionReport * newDtwTreeTransactionReport(){
    struct DtwTreeTransactionReport *new_report = (struct DtwTreeTransactionReport *)malloc(sizeof(struct DtwTreeTransactionReport));
    new_report->write = newDtwStringArray();
    new_report->modify = newDtwStringArray();
    new_report->remove = newDtwStringArray();
    return new_report;
}

void  DtwTreeTransactionReport_represent(struct DtwTreeTransactionReport *report){
    printf("Write:---------------------------------------\n");
    DtwStringArray_represent(report->write);
    printf("Modify:--------------------------------------\n");
    DtwStringArray_represent(report->modify);
    printf("Remove:--------------------------------------\n");
    DtwStringArray_represent(report->remove);
    puts("");
}

void  DtwTreeTransactionReport_free(struct DtwTreeTransactionReport *report){
    DtwStringArray_free(report->write);
    DtwStringArray_free(report->modify);
    DtwStringArray_free(report->remove);
    free(report);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




bool DtwTree_loads_json_tree(struct DtwTree *self, const char *all_tree){
    //load json
    cJSON *json_tree = cJSON_Parse(all_tree);
    if(json_tree == NULL){
        return false;
    }
    DtwJsonTreeError *json_error = DtwJsonTreeError_validate_json_tree_by_cJSON(json_tree);
    if(json_error){
        DtwJsonTreeError_free(json_error);
        return  false;
    }

    int size = cJSON_GetArraySize(json_tree);
    for(int i = 0; i < size; i++){

        cJSON *json_tree_part = cJSON_GetArrayItem(json_tree, i);
        cJSON *path = cJSON_GetObjectItemCaseSensitive(json_tree_part, "path");
        cJSON *original_path = cJSON_GetObjectItemCaseSensitive(json_tree_part, "original_path");
        cJSON *hardware_sha = cJSON_GetObjectItemCaseSensitive(json_tree_part, "hardware_sha256");
        cJSON *hardware_content_size = cJSON_GetObjectItemCaseSensitive(json_tree_part, "hardware_content_size");
        cJSON *last_modification_in_unix_time = cJSON_GetObjectItemCaseSensitive(json_tree_part, "last_modification_in_unix_time");
        cJSON *content_size = cJSON_GetObjectItemCaseSensitive(json_tree_part, "content_size");
        cJSON *is_binary = cJSON_GetObjectItemCaseSensitive(json_tree_part, "is_binary");
        cJSON *content = cJSON_GetObjectItemCaseSensitive(json_tree_part, "content");
        cJSON *pending_action = cJSON_GetObjectItemCaseSensitive(json_tree_part, "pending_action");
        cJSON *ignore = cJSON_GetObjectItemCaseSensitive(json_tree_part, "ignore");

        struct DtwTreePart *part = newDtwTreePartEmpty(
                path->valuestring
                );

        if(original_path != NULL){
            if(  part->path->original_path_string){
                free(  part->path->original_path_string);
            }
            part->path->original_path_string = strdup(original_path->valuestring);

        }

        if(hardware_sha != NULL){
            part->content_exist_in_hardware = true;
            part->hawdware_content_sha = (char *)realloc(part->hawdware_content_sha,strlen(hardware_sha->valuestring)+1);
            strcpy(part->hawdware_content_sha,hardware_sha->valuestring);

        }

        if(hardware_content_size != NULL){
            part->content_exist_in_hardware = true;
            part->hardware_content_size = hardware_content_size->valueint;
        }

        if(last_modification_in_unix_time != NULL){
            part->last_modification_time = last_modification_in_unix_time->valueint;
        }

        if(is_binary != NULL){
            part->is_binary = is_binary->valueint;
        }

        if(content_size != NULL){
            part->content_size = content_size->valueint;
        }

        if(content != NULL){

            if(part->is_binary){
                long out_size;
                unsigned char *decoded =dtw_base64_decode(
                    content->valuestring,
                    &out_size
                );
                DtwTreePart_set_binary_content(part,decoded,out_size);
                free(decoded);
            }
           else{
                DtwTreePart_set_string_content(part,content->valuestring);
           }
        }
        if(pending_action != NULL &&  pending_action->valuestring){

            part->pending_action = private_dtw_convert_string_to_action(
                pending_action->valuestring
            );
        }
        if(ignore != NULL){
            part->ignore = ignore->valueint;
        }

        DtwTree_add_tree_part_getting_onwership(self, part);

    }
    cJSON_Delete(json_tree);
    return  true;
}


bool DtwTree_loads_json_tree_from_file( DtwTree *self, const char *path){
    char *content = dtw_load_string_file_content(path);
    if(content == NULL){
        return false;
    }
    bool result = DtwTree_loads_json_tree(self,content);
    free(content);
    return result;
}

char * DtwTree_dumps_tree_json( DtwTree *self, DtwTreeProps  props){


    DtwTreeProps formated_props = DtwTreeProps_format_props(props);

    cJSON *json_array = cJSON_CreateArray();
    for(int i = 0; i < self->size; i++){

        cJSON *json_tree_part = cJSON_CreateObject();
        DtwTreePart *tree_part = self->tree_parts[i];
        char *path_string = DtwPath_get_path(tree_part->path);
        if(path_string ==NULL){
            cJSON_Delete(json_tree_part);
            continue;
        }

        if(formated_props.ignored_elements == DTW_INCLUDE && tree_part->ignore){
            continue;
        }

        if(tree_part->ignore){
            cJSON_AddItemToObject(
                json_tree_part,
                "ignore",
                cJSON_CreateBool(true)
            );
        }

        cJSON_AddItemToObject(
            json_tree_part,
            "path",
            cJSON_CreateString(path_string)
        );



        if(formated_props.path_atributes == DTW_INCLUDE ){
                char *dir_string = DtwPath_get_dir(tree_part->path);
                char *full_name_string = DtwPath_get_full_name(tree_part->path);
                char *name_string = DtwPath_get_name(tree_part->path);
                char *extension_string = DtwPath_get_extension(tree_part->path);
                if(tree_part->path->original_path_string != path_string){
                    cJSON_AddItemToObject(
                        json_tree_part,
                        "original_path",
                        cJSON_CreateString(tree_part->path->original_path_string)
                    );
                }
                cJSON_AddItemToObject(
                    json_tree_part,
                    "dir",
                    cJSON_CreateString(dir_string)
                );

                cJSON_AddItemToObject(
                    json_tree_part,
                    "full_name",
                    cJSON_CreateString(full_name_string)
                );

                cJSON_AddItemToObject(
                    json_tree_part,
                    "name",
                    cJSON_CreateString(name_string)
                );

                cJSON_AddItemToObject(
                    json_tree_part,
                    "extension",
                    cJSON_CreateString(extension_string)
                );


        }


        if(formated_props.hadware_data == DTW_INCLUDE && tree_part->metadata_loaded){
            cJSON_AddItemToObject(
                json_tree_part,
                "hardware_sha256",
                cJSON_CreateString(tree_part->hawdware_content_sha)
            );
            cJSON_AddItemToObject(
                json_tree_part,
                "last_modification_in_unix",
                cJSON_CreateNumber(tree_part->last_modification_time)
            );

            cJSON_AddItemToObject(
                json_tree_part,
                "hardware_content_size",
                cJSON_CreateNumber(tree_part->hardware_content_size)
            );

            cJSON_AddItemToObject(
                json_tree_part,
                "last_modification",
                cJSON_CreateString(tree_part->last_modification_in_str)
            );
        }

        if(formated_props.content_data == DTW_INCLUDE && tree_part->content){
            char *content_sha = DtwTreePart_get_content_sha(tree_part);
            cJSON_AddItemToObject(
                json_tree_part,
                "content_size",
                cJSON_CreateNumber(tree_part->content_size)
            );

            cJSON_AddItemToObject(
                json_tree_part,
                "content_sha256",
                cJSON_CreateString(content_sha)
            );

        }

        if(formated_props.content == DTW_INCLUDE && tree_part->content){

            cJSON_AddItemToObject(
                json_tree_part,
                "is_binary",
                cJSON_CreateBool(tree_part->is_binary)
            );
            if(tree_part->is_binary == false){
                cJSON_AddItemToObject(
                    json_tree_part,
                    "content",
                    cJSON_CreateString(DtwTreePart_get_content_string_by_reference(tree_part))
                );
            }
            else{
                char *content_base64 = dtw_base64_encode(tree_part->content, tree_part->content_size);


                cJSON_AddItemToObject(
                    json_tree_part,
                    "content",
                    cJSON_CreateString(content_base64)
                );
                free(content_base64);
            }
        }

        //adding action
        const char *action_string = private_dtw_convert_action_to_string(tree_part->pending_action);
        if(action_string != NULL){
            cJSON_AddItemToObject(
                json_tree_part,
                "pending_action",
                cJSON_CreateString(action_string)
            );
        }
        //Add json_tree_part
        cJSON_AddItemToArray(json_array,json_tree_part);

    }

    char *json_string = cJSON_Print(json_array);
    //set ident to 4 spaces
    if(formated_props.minification == DTW_MIMIFY){
        cJSON_Minify(json_string);
    }
    cJSON_Delete(json_array);
    return json_string;
}

void  DtwTree_dumps_tree_json_to_file(struct DtwTree *self, const char *path, DtwTreeProps  props){
    char *json_string = DtwTree_dumps_tree_json(self,props);
    dtw_write_string_file_content(path,json_string);
    free(json_string);
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



//listages
 DtwStringArray *DtwTree_list_files( DtwTree *self, const char *path,bool concat_path){
    DtwStringArray *formated_elements = newDtwStringArray();
    for(int i = 0; i < self->size; i++){
        DtwTreePart *current = self->tree_parts[i];
        DtwPath *current_path = current->path;
        char *current_path_string = DtwPath_get_path(current_path);

        long size = strlen(current_path_string);
        char last_char = current_path_string[size-1];
        if(last_char =='/'){
            continue;
        }

        if(dtw_starts_with(current_path_string,path)){
            //means its not an path from these dimension
            int path_size = strlen(path);
            bool insert = true;

            for(int i =path_size +1; i < size;i++){
                if(current_path_string[i] == '/'){
                    insert = false;
                    continue;
                }
            }

            if(insert){
                DtwStringArray_append(formated_elements,current_path_string);
            }

        }


    }
    if(!concat_path){

        DtwStringArray  *not_concatened = private_dtw_remove_start_path(formated_elements,path);
        DtwStringArray_free(formated_elements);
        return not_concatened;
    }


    return formated_elements;
}

 DtwStringArray *DtwTree_list_dirs( DtwTree *self, const char *path,bool concat_path){

    DtwStringArray *formated_elements = newDtwStringArray();
    for(int i = 0; i < self->size; i++){
        DtwTreePart *current = self->tree_parts[i];
        DtwPath *current_path = current->path;
        char *current_path_string = DtwPath_get_path(current_path);

        long size = strlen(current_path_string);
        char last_char = current_path_string[size-1];
        if(last_char !='/'){
            continue;
        }

        if(dtw_starts_with(current_path_string,path)){
            //means its not an path from these dimension
            int path_size = strlen(path);

            int total_found = 0;
            for(int i =path_size +1; i < size;i++){
                if(current_path_string[i] == '/'){
                    total_found+=1;
                    continue;
                }
            }

            if(total_found ==1){
                DtwStringArray_append(formated_elements,current_path_string);
            }

        }


    }
    if(!concat_path){

        DtwStringArray  *not_concatened = private_dtw_remove_start_path(formated_elements,path);
        DtwStringArray_free(formated_elements);
        return not_concatened;
    }


    return formated_elements;
}

struct DtwStringArray *DtwTree_list_all( DtwTree *self, const char *path,bool concat_path){

    DtwStringArray *formated_elements = newDtwStringArray();
    for(int i = 0; i < self->size; i++){
        DtwTreePart *current = self->tree_parts[i];
        DtwPath *current_path = current->path;
        char *current_path_string = DtwPath_get_path(current_path);

        if(dtw_starts_with(current_path_string,path)){
            //means its not an path from these dimension
            int path_size = strlen(path);
            long size = strlen(current_path_string);
            char last_char = current_path_string[size-1];

            int total_found = 0;
            for(int i =path_size+1; i < size;i++){
                if(current_path_string[i] == '/'){
                    total_found+=1;
                    continue;
                }
            }

            if(total_found ==1 && last_char == '/'){
                DtwStringArray_append(formated_elements,current_path_string);
            }
            if(total_found ==0){
                DtwStringArray_append(formated_elements,current_path_string);

            }



        }


    }
    if(!concat_path){

        DtwStringArray  *not_concatened = private_dtw_remove_start_path(formated_elements,path);
        DtwStringArray_free(formated_elements);
        return not_concatened;
    }


    return formated_elements;

}

 DtwStringArray *DtwTree_list_files_recursively( DtwTree *self, const char *path,bool concat_path){
    DtwStringArray *formated_elements = newDtwStringArray();
    for(int i = 0; i < self->size; i++){
        DtwTreePart *current = self->tree_parts[i];
        DtwPath *current_path = current->path;
        char *current_path_string = DtwPath_get_path(current_path);


        long size = strlen(current_path_string);
        char last_char = current_path_string[size-1];
        if(last_char =='/'){
            continue;
        }

        if(dtw_starts_with(current_path_string,path)){
            DtwStringArray_append(formated_elements,current_path_string);

        }


    }
    if(!concat_path){

        DtwStringArray  *not_concatened = private_dtw_remove_start_path(formated_elements,path);
        DtwStringArray_free(formated_elements);
        return not_concatened;
    }


    return formated_elements;
}

 DtwStringArray *DtwTree_list_dirs_recursively( DtwTree *self, const char *path,bool concat_path){
    DtwStringArray *formated_elements = newDtwStringArray();
    for(int i = 0; i < self->size; i++){
        DtwTreePart *current = self->tree_parts[i];
        DtwPath *current_path = current->path;
        char *current_path_string = DtwPath_get_path(current_path);

        long size = strlen(current_path_string);
        char last_char = current_path_string[size-1];
        if(last_char !='/'){
            continue;
        }

        if(dtw_starts_with(current_path_string,path)){
            DtwStringArray_append(formated_elements,current_path_string);

        }

    }
    if(!concat_path){

        DtwStringArray  *not_concatened = private_dtw_remove_start_path(formated_elements,path);
        DtwStringArray_free(formated_elements);
        return not_concatened;
    }


    return formated_elements;
}


 DtwStringArray *DtwTree_list_all_recursively( DtwTree *self, const char *path,bool concat_path){
    DtwStringArray *formated_elements = newDtwStringArray();
    for(int i = 0; i < self->size; i++){
        DtwTreePart *current = self->tree_parts[i];
        DtwPath *current_path = current->path;
        char *current_path_string = DtwPath_get_path(current_path);



        if(dtw_starts_with(current_path_string,path)){
            DtwStringArray_append(formated_elements,current_path_string);

        }

    }
    if(!concat_path){

        DtwStringArray  *not_concatened = private_dtw_remove_start_path(formated_elements,path);
        DtwStringArray_free(formated_elements);
        return not_concatened;
    }


    return formated_elements;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end





struct  DtwTree * newDtwTree(){

    struct DtwTree *self = (struct DtwTree*)malloc(sizeof(struct DtwTree));
    self->size = 0;
    self->tree_parts = (struct DtwTreePart**)malloc(1);

    return self;
}


struct DtwTree *DtwTree_get_sub_tree(struct DtwTree *self, const char *path, bool copy_content){
    struct DtwTree *sub_tree = newDtwTree();
    for(int i = 0; i < self->size; i++){
        struct DtwTreePart *tree_part = self->tree_parts[i];
        char *current_path =  DtwPath_get_path(tree_part->path);
        if(dtw_starts_with(current_path,path)){
            if(copy_content){
                DtwTree_add_tree_part_copy(sub_tree,tree_part);
            }
            if(!copy_content){
                DtwTree_add_tree_part_referencing(sub_tree, tree_part);
            }
        }
    }
    return sub_tree;
}

void DtwTree_add_tree_part_referencing(struct DtwTree *self, struct DtwTreePart *tree_part) {
    self->size++;
    self->tree_parts =  (struct DtwTreePart**)realloc(self->tree_parts, self->size * sizeof(struct DtwTreePart *));
    self->tree_parts[self->size - 1] = tree_part;
}

void DtwTree_add_tree_part_copy( DtwTree *self,  DtwTreePart *tree_part){
    self->size++;
    self->tree_parts =  (struct DtwTreePart**)realloc(self->tree_parts, self->size * sizeof(struct DtwTreePart *));
    DtwTreePart *copy = DtwTreePart_self_copy(tree_part);
    copy->owner = (void*)self;
    self->tree_parts[self->size - 1] = copy;

}

void DtwTree_remove_tree_part(struct DtwTree *self, int position){

    self->size--;
    DtwTreePart_free(self->tree_parts[position]);

    for(int i = position; i<self->size; i++){
        self->tree_parts[i] = self->tree_parts[i+1];
    }


}

struct DtwTreeTransactionReport * DtwTree_create_report(struct DtwTree *self){
    struct DtwTreeTransactionReport *report = newDtwTreeTransactionReport();
    for(int i = 0; i < self->size; i++){
        struct DtwTreePart *tree_part = self->tree_parts[i];
        int pending_action = tree_part->pending_action;
        char *path = DtwPath_get_path(tree_part->path);

        if (pending_action == DTW_WRITE){
            DtwStringArray_append(report->write, path);
        }

        else if (pending_action == DTW_MODIFY){
            DtwStringArray_append(report->modify, path);
        }

        else if (pending_action == DTW_REMOVE){
            DtwStringArray_append(report->remove, path);
        }


    }
    return report;
}


void DtwTree_add_tree_part_getting_onwership( DtwTree *self,  DtwTreePart *tree_part){
    DtwTree_add_tree_part_referencing(self,tree_part);
    tree_part->owner = (void*)self;
}



void DtwTree_represent( DtwTree *self){
    for(int i = 0; i < self->size; i++){
        DtwTreePart_represent(self->tree_parts[i]);
    }
}

void DtwTree_add_tree_parts_from_string_array( DtwTree *self,  DtwStringArray *paths,DtwTreeProps props){
    for(int i = 0; i < paths->size; i++){

        const char *current_path = paths->strings[i];
         DtwTreePart *tree_part = newDtwTreePart(
                current_path,
                props
        );

        DtwTree_add_tree_part_getting_onwership(self, tree_part);
    }
}


void DtwTree_add_tree_from_hardware( DtwTree *self,const char *path, DtwTreeProps props){
    DtwTreeProps formated_props = DtwTreeProps_format_props(props);
    struct DtwStringArray *path_array = dtw_list_all_recursively(path,DTW_CONCAT_PATH);
    DtwStringArray_sort(path_array);
    DtwTree_add_tree_parts_from_string_array(self, path_array,props);
    DtwStringArray_free(path_array);


    if(formated_props.path_atributes == DTW_INCLUDE){
        return;
    }
    if(self->size == 0){
        return;
    }
    DtwTree_remove_tree_part(self,0);

    int size_to_remove = strlen(path);
    if(!dtw_ends_with(path,"/")){
        size_to_remove+=1;
    }

    for(int i =0; i < self->size; i++){
         DtwTreePart *current_part = self->tree_parts[i];
         DtwPath *current_path = current_part->path;
        char *current_path_string = DtwPath_get_path(current_path);
        //remove the size toremove from string

        memmove(
                current_path_string,
                current_path_string+size_to_remove,
                strlen(current_path_string) - size_to_remove +1
                );
        DtwPath_set_path(current_path,current_path_string);

        current_path->original_path_string = current_path_string;

    }

}

void DtwTree_free( DtwTree *self){
    for(int i = 0; i < self->size; i++){
        DtwTreePart * part = self->tree_parts[i];
        if(part->owner == (void*)self) {
            DtwTreePart_free(part);

        }

    }

    free(self->tree_parts);
    free(self);
}
void DtwTree_insecure_hardware_remove_tree(struct DtwTree *self){
    for(int i = 0; i < self->size; i++){
        DtwTreePart_hardware_remove(self->tree_parts[i],DTW_EXECUTE_NOW);
    }
}

void DtwTree_insecure_hardware_write_tree(struct DtwTree *self){

    for(int i = 0; i < self->size; i++){
        struct DtwTreePart *tree_part = self->tree_parts[i];
        DtwTreePart_hardware_write(tree_part,DTW_EXECUTE_NOW);
    }
}

void DtwTree_hardware_commit_tree(struct DtwTree *self){
    for(int i = 0; i < self->size; i++){
        DtwTreePart_hardware_commit(self->tree_parts[i]);
    }
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



struct DtwTreePart *DtwTree_find_tree_part_by_function(
        struct DtwTree *self,
        bool (*caller)(struct  DtwTreePart *part,void *args),
        void *args
){
    for(int i = 0;i < self->size; i++){
        struct DtwTreePart *current = self->tree_parts[i];
        bool result = caller(current,args);
        if(result){
            return current;
        }
    }
    return NULL;
}

struct DtwTree *DtwTree_filter(
        struct DtwTree *self,
        bool (*caller)(struct  DtwTreePart *part)
){
    DtwTree *filtered_tree = newDtwTree();

    for(int i = 0;i < self->size; i++){

        DtwTreePart *current = self->tree_parts[i];

        bool result = caller(current);

        if(result){
            DtwTree_add_tree_part_copy(filtered_tree,current);
        }

    }
    return filtered_tree;
}


 DtwTree *DtwTree_map(DtwTree *self,DtwTreePart *(*caller)( DtwTreePart *part)){
     DtwTree *mapped_tree = newDtwTree();

    for(int i = 0;i < self->size; i++){
         DtwTreePart *current = self->tree_parts[i];
         DtwTreePart *copy = DtwTreePart_self_copy(current);
         DtwTreePart *result = caller(copy);
        DtwTree_add_tree_part_getting_onwership(mapped_tree, result);
    }
    return mapped_tree;
}


 DtwTreePart *DtwTree_find_tree_part_by_name( DtwTree *self, const char *name){
    for(int i = 0;i < self->size; i++){
        DtwTreePart *current = self->tree_parts[i];
        DtwPath *current_path = current->path;
        char *current_name = DtwPath_get_full_name(current_path);
        if(current_name){

            if(strcmp(current_name, name) == 0){
                return current;
            }
        }

    }

    return NULL;
}

 DtwTreePart *DtwTree_find_tree_part_by_path( DtwTree *self, const char *path){
    for(int i = 0;i < self->size; i++){
         DtwTreePart *current = self->tree_parts[i];
         DtwPath *current_path = current->path;
        char *current_path_string = DtwPath_get_path(current_path);
        if(current_path_string){
            if(strcmp(current_path_string, path) == 0){
                return current;
            }
        }

    }

    return NULL;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end








void DtwTreePart_load_content_from_hardware(struct DtwTreePart *self){

    char *path = DtwPath_get_path(self->path);

    if(path == NULL){
        return;
    }


    if(dtw_entity_type(path) != DTW_FILE_TYPE){
        return;
    }

    DtwTreePart_free_content(self);
    self->content = dtw_load_any_content(path,&self->content_size,&self->is_binary);
    self->hardware_content_size = self->content_size;
    self->content_exist_in_hardware = true;


}



bool DtwTreePart_hardware_remove(struct DtwTreePart *self, int transaction){
     if(self->ignore == true){
        return false;
     }
     if(transaction == DTW_SET_AS_ACTION){
        self->pending_action = DTW_REMOVE;
        return false;
     }

    char *path =DtwPath_get_path(self->path);

    remove(path);

    self->content_exist_in_hardware = false;
    return true;
}

bool DtwTreePart_hardware_write(struct DtwTreePart *self, int transaction){
    if(self->ignore == true){
        return false;
    }
    if(transaction == DTW_SET_AS_ACTION){
        self->pending_action = DTW_WRITE;
        return false;
    }
    //means that the content not exist in memory
    if(self->content == NULL){
        char *path = DtwPath_get_path(self->path);
        char *dir = DtwPath_get_dir(self->path);
        int entity_type = dtw_entity_type(path);

        if(entity_type== DTW_NOT_FOUND && dir!= NULL){
            dtw_create_dir_recursively(dir);

        }


        return true;
    }
    char *path = DtwPath_get_path(self->path);

    dtw_write_any_content(path,self->content,(long)self->content_size);
    free(self->hawdware_content_sha);
    self->hawdware_content_sha = dtw_generate_sha_from_any(self->content,self->content_size);
    self->content_exist_in_hardware = true;
    private_DtwTreePart_set_last_modification(self,dtw_get_time());
    return true;

}

bool DtwTreePart_hardware_modify(struct DtwTreePart *self, int transaction){
    if(self->ignore == true){
        return false;
    }
    if(transaction == DTW_SET_AS_ACTION){
        self->pending_action = DTW_MODIFY;
        return false;
    }
    bool changed_path =DtwPath_changed(self->path);


    if(changed_path == true && self->content == NULL){
        char *old_path = self->path->original_path_string;
        char *new_path = DtwPath_get_path(self->path);
        remove(old_path);
        dtw_create_dir_recursively(new_path);
        return true;
    }

    if(changed_path == false  && self->content == NULL){
        return  false;
    }

    bool write = false;
    if(changed_path == true){
        char *old_path = self->path->original_path_string;
        remove(old_path);
        write = true;
    }

    if(changed_path== false){
        if(self->metadata_loaded == true){
            char *hardware_sha = self->hawdware_content_sha;
            char *memory_sha = DtwTreePart_get_content_sha(self);
            if(strcmp(hardware_sha,memory_sha) != 0){
                write = true;
            }
        }
        else{
            write = true;
        }
    }

    if(write){
        char *path = DtwPath_get_path(self->path);
        dtw_write_any_content(
            path,
            self->content,
            (long)self->content_size
        );
        free(self->hawdware_content_sha);
        self->hawdware_content_sha = dtw_generate_sha_from_string((const char *)self->content);
        self->content_exist_in_hardware = true;
        private_DtwTreePart_set_last_modification(self,dtw_get_time());


        return true;
    }
    return false;
}

bool DtwTreePart_hardware_commit(struct DtwTreePart *self){
    if(self->ignore == true){
        return false;
    }
    if(self->pending_action == DTW_REMOVE){
        return DtwTreePart_hardware_remove(self,DTW_EXECUTE_NOW);
    }
    if(self->pending_action == DTW_WRITE){
        return DtwTreePart_hardware_write(self,DTW_EXECUTE_NOW);
    }
    if(self->pending_action == DTW_MODIFY){
        return DtwTreePart_hardware_modify(self,DTW_EXECUTE_NOW);
    }
    return false;
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end




void private_DtwTreePart_set_last_modification(DtwTreePart *self,long last_modification) {
    self->last_modification_time = last_modification;
    if(self->last_modification_in_str) {
        free(self->last_modification_in_str);
    }
    self->last_modification_in_str = dtw_convert_unix_time_to_string(last_modification);
}
 DtwTreePart * newDtwTreePart(const char *path, DtwTreeProps props){
    DtwTreeProps formated_props = DtwTreeProps_format_props(props);

    DtwTreePart *self = (DtwTreePart *)malloc(sizeof(struct DtwTreePart));
    *self = (DtwTreePart){0};
    self->path = newDtwPath(path);


    if(formated_props.content == DTW_INCLUDE || formated_props.hadware_data == DTW_INCLUDE){

        DtwTreePart_load_content_from_hardware(self);
        if(formated_props.hadware_data == DTW_INCLUDE && self->content){

            self->metadata_loaded = true;
            private_DtwTreePart_set_last_modification(self,dtw_get_entity_last_motification_in_unix(path));
            free(self->hawdware_content_sha);
            self->hawdware_content_sha = dtw_generate_sha_from_string((const char*)self->content);
        }

        if(formated_props.content == DTW_HIDE){
            DtwTreePart_free_content(self);
        }
    }

    return self;
}
char *DtwTreePart_get_content_string_by_reference(struct DtwTreePart *self){
    return (char *)self->content;
}

unsigned char *DtwTreePart_get_content_binary_by_reference(struct DtwTreePart *self){
    return self->content;
}


  DtwTreePart * DtwTreePart_self_copy( DtwTreePart *self){
    char *path = DtwPath_get_path(self->path);

    DtwTreeProps props = {.content =DTW_NOT_LOAD,.hadware_data = DTW_NOT_LOAD};
    DtwTreePart *new_tree_part = newDtwTreePart(
            path,
            props
    );

    new_tree_part->content_exist_in_hardware = self->content_exist_in_hardware;
    new_tree_part->is_binary = self->is_binary;
    new_tree_part->ignore = self->ignore;
    new_tree_part->content_size = self->content_size;

    char * current_sha = DtwTreePart_get_content_sha(self);

    if(current_sha) {
        new_tree_part->current_sha = strdup(current_sha);
    }

    if(self->hawdware_content_sha){
        new_tree_part->hawdware_content_sha = strdup(self->hawdware_content_sha);
    }

    if(self->content) {
        new_tree_part->content = (unsigned char *)malloc(self->content_size + 2);
        memcpy(new_tree_part->content,self->content,self->content_size);

        if(self->is_binary == false){
            new_tree_part->content[self->content_size] = '\0';
        }

    }



    return new_tree_part;
}

void DtwTreePart_set_any_content( DtwTreePart *self, unsigned char *content, long content_size, bool is_binary){

    DtwTreePart_free_content(self);
    self->is_binary = is_binary;
    self->content = (unsigned char *)malloc(content_size+2);
    memcpy(self->content,content,content_size);
    self->content_size = content_size;


}

void DtwTreePart_set_string_content( DtwTreePart *self, const char *content){
    DtwTreePart_set_any_content(
        self,
        (unsigned char*)content,
        strlen(content),
        false
    );

    self->content[self->content_size] = '\0';
}

void DtwTreePart_set_binary_content( DtwTreePart *self, unsigned char *content, long content_size){
    DtwTreePart_set_any_content(self,content,content_size,true);
}


char *DtwTreePart_get_content_sha( DtwTreePart *self){
    if(self->content == NULL) {
        return NULL;
    }
    if(self->current_sha) {
        free(self->current_sha);
    }
    self->current_sha =dtw_generate_sha_from_any(self->content,self->content_size);;
    return self->current_sha;
}







void DtwTreePart_represent(struct DtwTreePart *self){
    printf("------------------------------------------------------------\n");
    DtwPath_represent(self->path);
    printf("Content Exist in Memory: %s\n",self->content ? "true" : "false");
    printf("Ignore: %s\n",self->ignore ? "true" : "false");

    printf("Content Exist In Hardware: %s\n",self->content_exist_in_hardware ? "true" : "false");
    printf("Is Binary: %s\n",self->is_binary ? "true" : "false");

    if(self->last_modification_in_str){
        printf("Last Modification Time in Unix: %li\n",self->last_modification_time);
        printf("Last Modification Time: %s\n",self->last_modification_in_str);
    }

    printf("Content Size: %ld\n",(long)self->content_size);

    char *content_sha = DtwTreePart_get_content_sha(self);
    if(content_sha){
        printf("Content SHA:  %s\n",content_sha);
    }
    if(self->content && self->is_binary == false){
        printf ("Content: %s\n",(char*)self->content);
    }

    if(self->hawdware_content_sha) {
        printf("Original Hardware SHA:%s\n",self->hawdware_content_sha);
    }

    if(self->is_binary == true){
        printf("Content: Binary\n");
    }

    const char *action = private_dtw_convert_action_to_string(self->pending_action);
    if(action){
        printf("Pending Action: %s\n",action);

    }

}


void DtwTreePart_free_content(struct DtwTreePart *self){
    if(self->content){
        free(self->content);
    }
    self->content = NULL;

}
void DtwTreePart_free(struct DtwTreePart *self){
    if(self->path) {
        DtwPath_free(self->path);
    }

    if(self->hawdware_content_sha) {
        free(self->hawdware_content_sha);
    }
    if(self->current_sha) {
        free(self->current_sha);
    }
    if(self->last_modification_in_str) {
        free(self->last_modification_in_str);
    }
    DtwTreePart_free_content(self);
    free(self);
}

 DtwTreePart * newDtwTreePartEmpty(const char *path){
    DtwTreeProps  props = {.content =DTW_NOT_LOAD,.hadware_data = DTW_NOT_LOAD};
    return newDtwTreePart(
            path,
         props
    );

}


 DtwTreePart * newDtwTreePartLoading(const char *path){
    DtwTreeProps  props = {.content =DTW_LOAD,.hadware_data = DTW_LOAD};
    return newDtwTreePart(
            path,
            props
    );
}

//silver_chain_scope_start
//DONT MODIFY THIS COMMENT
//this import is computationally generated
//mannaged by SilverChain: https://github.com/OUIsolutions/SilverChain

//silver_chain_scope_end



DtwTreeProps DtwTreeProps_format_props(DtwTreeProps props){
    DtwTreeProps result = props;

    if(!result.minification){
        result.minification = DTW_NOT_MIMIFY;
    }
    if(!result.content){
        result.content = DTW_INCLUDE;
    }
    if(!result.path_atributes){
        result.path_atributes = DTW_INCLUDE;
    }
    if(!result.hadware_data){
        result.hadware_data = DTW_INCLUDE;
    }
    if(!result.content_data){
        result.content_data = DTW_INCLUDE;
    }
    if(!result.ignored_elements){
        result.ignored_elements = DTW_HIDE;
    }
    return result;
}

#endif


#endif //DO_THE_WORLD_H


// USE  THIS FILE ONLY FOR PRODUCTION
// This file is part of the DoTheWorld project.
// Do not edit this file, it is automatically generated.
// See the README.md file for more information.
/*
MIT License

Copyright (c) 2023 Mateus Moutinho Queiroz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/



#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif
#include <string.h>
//====================================CONSTS=========================================
const int MAX_BODY = 1000000000;

const char *HELP_MESSAGE = "Usage: ./program [options]\n"
                           "Options:\n"
                           "  --port, -p <port>                Set the server port\n"
                           "  --dynamic_lib, -d <path>         Path to the dynamic library\n"
                           "  --callback, -c <name>            Callback function name in the dynamic library\n"
                           "  --single_process, -s             Run server in single process mode (non-Windows only)\n"
                           "  --password, --pass <password>    Password for firmware routes\n"
                           "  --allow_read_dynamic_lib         Allow reading the dynamic library via firmware route\n"
                           "  --allow_exit                     Allow server exit via firmware route\n"
                           "  --allow_update_firmware          Allow updating the dynamic library via firmware route\n"
                           "  --version, -v                    Show the program version\n"
                           "  --help, -h                       Show this help message\n";

const int FLAGS_SIZE = 2;
const char *PORTS_FLAGS[]={
    "port",
    "p"
};

const char *DYNAMIC_LIV_FLAGS[]={
    "dynamic_lib",
    "d"
};

const char *SINGLE_PROCESS_FLAGS[]={
    "single_process",
    "s"
};

const char *CALLBACK_FLAGS[]={
    "callback",
    "c"
};

const char *HELP_FLAGS[]={
    "help",
    "h"
};

const char *PASSWORD_FLAGS[]={
    "password",
    "pass"
};

const char *ALLOW_READ_DYNAMIC_LIB_FLAGS[]={
    "allow_read_dynamic_lib",
    "allow_read"
};

const char *ALLOW_EXIT_FLAGS[]={
    "allow_exit",
    "allow_exit"
};

const char *ALLOW_UPDATE_FIRMWARE_FLAGS[]={
    "allow_update_firmware",
    "allow_update"
};

const char *VERSION_FLAGS[]={
    "version",
    "v"
};

//====================================ROUTES=========================================
const char *CWEB_FIRMWARE_ROUTE = "/cweb_firmware";
const char *READ_DYNAMIC_LIB = "/cweb_firmware/read_dynamic_lib";
const char *WRITE_DYNAMIC_LIB = "/cweb_firmware/write_dynamic_lib";
const char *EXIT_FIRMWARE = "/cweb_firmware/exit";

const char *PASSWORD_ENTRIE ="password";


//====================================GLOBALS=========================================
const char *dynamic_lib;
const char *callback_name;
int global_argc;
char **global_argv;
char password_sha[100] = {0};
bool allow_read_dynamic_lib = false;
bool allow_exit = false;
bool allow_update_firmware = false;
const char *VERSION = "0.1.0";

//====================================MAIN SERVER=========================================

CwebHttpResponse *main_sever(CwebHttpRequest *request ){

    if(dtw_starts_with(request->route, CWEB_FIRMWARE_ROUTE)) {
        const char *provided_password = CwebHttpRequest_get_header(request, PASSWORD_ENTRIE);
        if (provided_password == NULL) {
            provided_password = CwebHttpRequest_get_param(request, PASSWORD_ENTRIE);
        }

        if (provided_password == NULL) {
            return cweb_send_text("Password required for firmware route", 401);
        }
        char *user_password_sha   = dtw_generate_sha_from_string(provided_password);
        if (strcmp(user_password_sha, password_sha) != 0) {
            free(user_password_sha);
            return cweb_send_text("Invalid password", 401);
        }
        free(user_password_sha);
    }

    if(strcmp(request->route, EXIT_FIRMWARE) == 0) {
        if (!allow_exit) {
            return cweb_send_text("Exiting the server is not allowed. Use --allow_exit flag.", 403);
        }
        cweb_kill_single_process_server();
        return cweb_send_text("Server shutting down", 200);
    }

    if(strcmp(request->route, READ_DYNAMIC_LIB) == 0) {
        if (!allow_read_dynamic_lib) {
            return cweb_send_text("Reading dynamic library is not allowed. Use --allow_read_dynamic_lib flag.", 403);
        }
        CwebHttpResponse *response =  cweb_send_file(dynamic_lib,CWEB_AUTO_SET_CONTENT, 200);

        DtwPath *path  = newDtwPath(dynamic_lib);
        char *formmated = (char*)malloc(100 + strlen(dynamic_lib));
        sprintf(formmated, "attachment; filename=%s", DtwPath_get_full_name(path));
        CwebHttpResponse_add_header(response, "Content-Disposition", formmated);
        free(formmated);
        DtwPath_free(path);
        return response;
    }

    if(strcmp(request->route, WRITE_DYNAMIC_LIB) == 0) {
        if (!allow_update_firmware) {
            return cweb_send_text("Updating firmware is not allowed. Use --allow_update_firmware flag.", 403);
        }
        unsigned char *data = CwebHttpRequest_read_content(request,MAX_BODY);
        if(!data){
            return cweb_send_text("Error reading content", 404);
        }
        dtw_write_any_content(dynamic_lib, data, request->content_length);
        return cweb_send_text("Dynamic library updated", 202);
    }

#ifdef _WIN32
    HMODULE handler = LoadLibrary(dynamic_lib);
    if(!handler){
        printf("Error loading dynamic library: %lu\n", GetLastError());
        return cweb_send_var_html((char*)private_cweb_500, 500);
    }
    CwebHttpResponse *(*request_handler)(CwebHttpRequest *,int ,char*[]) =
    (CwebHttpResponse *(*)(CwebHttpRequest *,int ,char*[]))GetProcAddress(handler,callback_name);
#else
    void *handler = dlopen(dynamic_lib, RTLD_LAZY);
    if(!handler){
        printf("Error loading dynamic library: %s\n", dlerror());
        return cweb_send_var_html((char*)private_cweb_500, 500);
    }
    CwebHttpResponse *(*request_handler)(CwebHttpRequest *,int ,char*[]) =
    (CwebHttpResponse *(*)(CwebHttpRequest *,int ,char*[]))dlsym(handler,callback_name);
#endif

    CwebHttpResponse *response = request_handler(request,global_argc,global_argv);
    
#ifdef _WIN32
    FreeLibrary(handler);
#else
    dlclose(handler);
#endif

    return response;
}
//====================================MAIN=========================================
int main(int argc, char *argv[]){

   
    global_argc = argc;
    global_argv = argv;
    CArgvParse args = newCArgvParse(argc,argv);

    if (CArgvParse_is_flags_present(&args, HELP_FLAGS, FLAGS_SIZE) || CArgvParse_is_one_of_args_present(&args, HELP_FLAGS, FLAGS_SIZE)) {
        printf("%s", HELP_MESSAGE);
        return 0;
    }

    if (CArgvParse_is_flags_present(&args, VERSION_FLAGS, FLAGS_SIZE)) {
        printf("Version: %s\n", VERSION);
        return 0;
    }

    const char *port = CArgvParse_get_flag(&args,PORTS_FLAGS,FLAGS_SIZE,0);
    if(!port){
        printf("Port not provided\n");
        return 1;
    }
    int port_num = atoi(port);
    if(port_num <= 0){
        printf("--port not valid\n");
        return 1;
    }
   
    dynamic_lib = CArgvParse_get_flag(&args,DYNAMIC_LIV_FLAGS,FLAGS_SIZE,0);
    if(!dynamic_lib){
        printf("--dynamic_lib library not provided\n");
        return 1;
    }

    callback_name = CArgvParse_get_flag(&args,CALLBACK_FLAGS,FLAGS_SIZE,0);

    if(!callback_name){
        printf("--callback not provided\n");
        return 1;
    }

    bool single_process = CArgvParse_is_flags_present(&args,SINGLE_PROCESS_FLAGS,FLAGS_SIZE);
    allow_read_dynamic_lib = CArgvParse_is_flags_present(&args, ALLOW_READ_DYNAMIC_LIB_FLAGS, FLAGS_SIZE);
    allow_exit = CArgvParse_is_flags_present(&args, ALLOW_EXIT_FLAGS, FLAGS_SIZE);
    allow_update_firmware = CArgvParse_is_flags_present(&args, ALLOW_UPDATE_FIRMWARE_FLAGS, FLAGS_SIZE);

    const char *password = CArgvParse_get_flag(&args,PASSWORD_FLAGS,FLAGS_SIZE,0);
    if(!password){
        printf("Password not provided\n");
        return 1;
    }
    char *hash = dtw_generate_sha_from_string(password);
    strcpy(password_sha, hash);
    free(hash);

    CwebServer server = newCwebSever(port_num, main_sever);
    #ifndef _WIN32
    server.single_process = single_process;
    #endif 
    server.use_static =false;
    CwebServer_start(&server);
    return 0;
}
