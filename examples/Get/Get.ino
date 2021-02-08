#include <Arduino.h>
#include <tuple>
#include <boost/pfr.hpp>

struct Dados
{
    int i;
};

void setup()
{
    Serial.begin(115200);
    std::tuple<int, int> t;
    std::get<1>(t);
    Serial.printf("Tuples has : %i elements\r\n", std::tuple_size<decltype(t)>::value);
    Dados test;
    test.i = 23;
    auto &e1 = boost::pfr::get<0>(test);
    Serial.printf("Tuples has : %i elements\r\n", e1);
}

void loop()
{
}