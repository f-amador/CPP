#include "Data.hpp"
#include "Serializer.hpp"

int main() {
    Data *a = new Data;
    Data *b = new Data;

    std::cout << "Data a address: " << a << "\n";
    std::cout << "Data b address: " << b << "\n";

    uintptr_t a_serialized = Serializer::serialize(a);
    uintptr_t b_serialized = Serializer::serialize(b);
    std::cout << "Serialized a: " << a_serialized << "\n";
    std::cout << "Serialized b: " << b_serialized << "\n";

    Data *a_deserialized = Serializer::deserialize(a_serialized);
    Data *b_deserialized = Serializer::deserialize(b_serialized);
    std::cout << "Deserialized a: " << a_deserialized << "\n";
    std::cout << "Deserialized b: " << b_deserialized << "\n";

    delete a;  // a_deserialized becomes invalid here!
    delete b;  // b_deserialized becomes invalid here!
}