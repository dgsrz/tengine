#ifndef _NGX_HTTP_PROBE_H_INCLUDED_

#define _NGX_HTTP_PROBE_H_INCLUDED_

#if NGX_HTTP_REQUEST_PROFILE

#include <ngx_http_request_profile_provider.h>

#define ngx_http_probe_accept(c)           NGINX_HTTP_PROBE_ACCEPT(c)
#define ngx_http_probe_close(c)            NGINX_HTTP_PROBE_CLOSE(c)
#define ngx_http_probe_ssl_handshaked(c)   NGINX_HTTP_PROBE_SSL_HANDSHAKED(c)
#define ngx_http_probe_head_read(r)        NGINX_HTTP_PROBE_HEAD_READ(r)
#define ngx_http_probe_body_read(r)        NGINX_HTTP_PROBE_BODY_READ(r)
#define ngx_http_probe_first_byte(r)       NGINX_HTTP_PROBE_FIRST_BYTE(r)
#define ngx_http_probe_request_fin(r)      NGINX_HTTP_PROBE_REQUEST_FIN(r)
#define ngx_http_probe_keepalive_start(r)  NGINX_HTTP_PROBE_KEEPALIVE_START(r)
#define ngx_http_probe_lingering_close(r)  NGINX_HTTP_PROBE_LINGERING_CLOSE(r)

#else

#define ngx_http_probe_accept(c)
#define ngx_http_probe_close(c)
#define ngx_http_probe_ssl_handshaked(c)
#define ngx_http_probe_head_read(r)
#define ngx_http_probe_body_read(r)
#define ngx_http_probe_first_byte(r)
#define ngx_http_probe_request_fin(r)
#define ngx_http_probe_keepalive_start(r)
#define ngx_http_probe_lingering_close(r)

#endif

#endif /* _NGX_HTTP_PROBE_H_INCLUDED_ */
