#ifndef Environ_H
#define Environ_H

#include "Component.h"
#include "EnvironImpl.h"

class Environ final : public Component {
public:
    Environ();

private:
    std::string extensionName() override;

    variant_t get(const variant_t &name);

    EnvironImpl impl;
};

#endif //Environ_H
