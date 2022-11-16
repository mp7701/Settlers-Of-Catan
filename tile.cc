#include <iostream>
#include <string>
#include <set>

#include "vertice.h"
#include "tile.h"
#include "Info.h"

Tile::Tile(int location, Resource resource, int value) : location{location}, resource{resource}, value{value}, geese{false} {}

// returns location
int Tile::getLocation()
{
    return location;
}

// returns value
int Tile::getValue()
{
    return value;
}

// Sets goose to the current tile
void Tile::setGeese(bool val)
{
    geese = val;
}

// prints goose if true
std::string Tile::printGeese()
{
    if (geese)
    {
        return std::string("  ") + "GEESE";
    }
    else
    {
        return std::string("       ");
    }
}

// prints the position of the tile (formatted)
std::string Tile::printLocation()
{
    if (location < 10)
    {
        return std::string(" ") + std::to_string(location);
    }
    else
    {
        return std::to_string(location);
    }
}

// prints the value of the tile (formatted)
std::string Tile::printValue()
{
    if (resource == Resource::Park)
    {
        return std::string("  ");
    }
    if (value < 10)
    {
        return std::string(" ") + std::to_string(value);
    }
    else
    {
        return std::to_string(value);
    }
}

// prints the resource of the tile (formatted)
std::string Tile::printResource()
{
    if (resource == Resource::Energy)
    {
        return std::string(" ") + "ENERGY" + std::string("  ");
    }
    else if (resource == Resource::Brick)
    {
        return std::string("  ") + "BRICK" + std::string("  ");
    }
    else if (resource == Resource::Heat)
    {
        return std::string("  ") + "HEAT" + std::string("   ");
    }
    else if (resource == Resource::Wifi)
    {
        return std::string("  ") + "WIFI" + std::string("   ");
    }
    else if (resource == Resource::Glass)
    {
        return std::string("  ") + "GLASS" + std::string("  ");
    }
    else if (resource == Resource::Park)
    {
        return std::string("  ") + "PARK" + std::string("   ");
    }
}

// Override from Subject class
Info Tile::getInfo() const
{
    if (geese)
    {
        return {
            resource,
            0};
    }
    else
    {
        return {
            resource,
            1};
    }
}
// returns true if geese is present on tile
bool Tile::getGeese()
{
    return geese;
}
