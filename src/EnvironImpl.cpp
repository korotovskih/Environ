#include "EnvironImpl.h"

std::string EnvironImpl::Get(const std::string &name) { 
    const char *env_key = name.c_str();
    const char* env_val = std::getenv(env_key);
    if (env_val) {
        const std::string result(env_val);
        return result;
    }
    return "";
}
