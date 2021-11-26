#include "default.h"

response *index(protocol::HttpRequest *req) {
    return new response(0, "Hello this is Kininaru C++ server");
}
