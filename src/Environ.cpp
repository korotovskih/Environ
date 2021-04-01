#include "Environ.h"

std::string Environ::extensionName() {
    return "Environ";
}

Environ::Environ() {
    AddMethod(L"Get", L"Получить", this, &Environ::get);
}

variant_t Environ::get(const variant_t &name) {
    return impl.Get(std::get<std::string>(name));
}
