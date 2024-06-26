#include <vector>
#include <iostream>
#include "../include/intersection.h"
#include "../include/shapes/shape.h"

Intersection::Intersection(Shape *object, double t) : object(object), t(t) {}

namespace intersection
{
    std::optional<Intersection *> hit(std::vector<Intersection> &intersections)
    {
        if (intersections.size() == 0)
        {
            return std::nullopt;
        }

        double t = std::numeric_limits<double>::infinity();
        std::optional<Intersection *> hit = std::nullopt;

        for (auto &i : intersections)
        {
            if (i.t >= 0 && i.t < t)
            {
                t = i.t;
                hit = &i;
            }
        }

        return hit;
    }
}
