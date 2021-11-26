#include "router.h"

response *process(protocol::HttpRequest *req) {
    auto path = req->get_request_uri();
    if (!strcmp(path, "/")) return index(req);
    return new response(-1, "Not found");
}