#include <math.h>
#include "physics_constants.h"

double ballPosition(double tower_height, double t)
{
    double distance_dropped{constants::gravity * pow(t, 2.0) / 2.0};
    if (distance_dropped > tower_height)
    {
        return(0.0);
    }
    return tower_height - distance_dropped;
}
