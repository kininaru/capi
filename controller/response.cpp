#include "response.h"

response::response(int _code, std::string _msg) {
    this->code = _code;
    this->msg = std::move(_msg);
}

nlohmann::json response::to_json() {
    nlohmann::json ret;
    ret["code"] = this->code;
    ret["msg"] = this->msg;
    return ret;
}

std::string response::to_string() {
    return nlohmann::to_string(this->to_json());
}

response::response(int _code) {
    this->code = _code;
    this->msg = "";
}

int response::get_code() {
    return this->code;
}
