#include "string"
#include "nlohmann/json.hpp"

class response {
    int code;
    std::string msg;
public:
    explicit response(int _code);
    response(int _code, std::string _msg);
    nlohmann::json to_json();
    std::string to_string();
    int get_code();
};
