typedef struct { int dummy; } ngx_http_request_t;
typedef struct { int dummy; } ngx_connection_t;

provider nginx {
    probe http_probe_accept(ngx_connection_t *c);
    probe http_probe_close(ngx_connection_t *c);
    probe http_probe_ssl_handshaked(ngx_connection_t *c);
    probe http_probe_head_read(ngx_http_request_t *r);
    probe http_probe_body_read(ngx_http_request_t *r);
    probe http_probe_first_byte(ngx_http_request_t *r);
    probe http_probe_last_byte(ngx_http_request_t *r);
    probe http_probe_request_fin(ngx_http_request_t *r);
    probe http_probe_keepalive_start(ngx_http_request_t *r);
    probe http_probe_lingering_close(ngx_http_request_t *r);
};
