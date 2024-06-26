#ifndef TUPLE_H
#define TUPLE_H

#include <string>

class Tuple
{
public:
    double x, y, z, w;
    Tuple();
    Tuple(double x, double y, double z, double w);

    bool is_point() const;
    bool is_vector() const;

    double operator[](int i) const;
    bool operator==(const Tuple &other) const;
    Tuple operator+(const Tuple &other) const;
    Tuple operator-() const;
    Tuple operator-(const Tuple &other) const;
    Tuple operator*(double scalar) const;
    Tuple operator*(const Tuple &other) const;
    Tuple operator/(double scalar) const;

    double magnitude() const;
    Tuple normalize() const;
    double dot(const Tuple &other) const;
    Tuple cross(const Tuple &other) const;
    std::string to_string() const;
};

namespace tuple
{
    Tuple tuple();
    Tuple tuple(double x, double y, double z, double w);
    Tuple point();
    Tuple point(double x, double y, double z);
    Tuple vec();
    Tuple vec(double x, double y, double z);

    Tuple reflect(const Tuple &in, const Tuple &normal);

    // double dot(Tuple &a, Tuple &b);
    // Tuple cross(Tuple &a, Tuple &b);
}

#endif