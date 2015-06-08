/*
The MIT License (MIT)

Copyright (c) 2012-2013

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef SNET_NET_H
#define SNET_NET_H


#ifdef SNET_EXPORTS
#define SNET_API __declspec(dllexport)
#else
#define SNET_API __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C" {
#endif


int SNET_API snet_tcp_socket();

void SNET_API snet_tcp_close(int fd);

int SNET_API snet_tcp_set_timeout(int fd, unsigned int sts, unsigned int rts); // ms

int SNET_API snet_tcp_set_buffer(int fd, unsigned int sbs, unsigned int rbs);

int SNET_API snet_tcp_listen(int fd, const char* ip, unsigned short port, int blocklog);

int SNET_API snet_tcp_poll(int fd, unsigned int ts); // ts: ms

int SNET_API snet_tcp_accept(int fd, unsigned int ts); // ms

int SNET_API snet_tcp_connect(int fd, const char* ip, unsigned short port);

int SNET_API snet_tcp_send(int fd, const void *buf, unsigned int size, int flags);

int SNET_API snet_tcp_recv(int fd, void *buf, unsigned int size, int flags);

int SNET_API snet_tcp_last_error();


#ifdef __cplusplus
}
#endif


#endif	// SNET_NET_H