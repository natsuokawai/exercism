#include "space_age.h"
#define ONE_EARTH_YEAR_SECONDS 31557600.0

float get_earth_year_unit(planet_t planet);

float convert_planet_age(planet_t planet, int64_t input) {
    float earth_year = input / ONE_EARTH_YEAR_SECONDS;
    float unit = get_earth_year_unit(planet);
    return earth_year / unit;
}

float get_earth_year_unit(planet_t planet) {
    switch (planet) {
        case EARTH:
            return 1.0;
        case MERCURY:
            return 0.2408467;
        case VENUS:
            return 0.61519726;
        case MARS:
            return 1.8808158;
        case JUPITER:
            return 11.862615;
        case SATURN:
            return 29.447498;
        case URANUS:
            return 84.016846;
        case NEPTUNE:
            return 164.79132;
    }
}
