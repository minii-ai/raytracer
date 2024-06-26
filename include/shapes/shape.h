#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include "../matrix.h"
#include "../material.h"
#include "../transforms.h"
#include "../intersection.h"
#include "../ray.h"

class Shape
{
public:
    Shape *parent = nullptr;
    Matrix transform = transforms::eye();
    Material material = Material();
    Ray saved_ray = Ray(tuple::point(0, 0, 0), tuple::vec(0, 0, 0));

    Shape();
    virtual ~Shape() = default;

    std::vector<Intersection> intersects(Ray &ray);
    virtual std::vector<Intersection> local_intersects(Ray &local_ray);

    Tuple normal_at(const Tuple &world_point) const;
    virtual Tuple local_normal_at(const Tuple &local_point) const;

    Color pattern_at(const Tuple &world_point) const;
    Tuple world_to_object(const Tuple &point) const;
    Tuple normal_to_world(const Tuple &normal) const;
};

#endif