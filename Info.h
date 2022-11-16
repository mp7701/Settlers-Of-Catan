#ifndef _INFO_H
#define _INFO_H

#include <string>

enum class Residence
{
    NoRes,
    Basement,
    House,
    Tower
};
enum class Resource
{
    Null,
    Brick,
    Energy,
    Glass,
    Heat,
    Wifi,
    Park
};

struct Info
{
    Resource resource;
    int numResources;
};

Resource intToResource(int resource);

int stringToInt(std::string s);

int resourceToInteger(Resource r);

#endif
