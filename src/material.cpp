#include "../include/material.h"
#include "../include/color.h"

Material::Material()
{
    this->color = Color(1, 1, 1);
    this->ambient = 0.1;
    this->diffuse = 0.9;
    this->specular = 0.9;
    this->shininess = 200.0;
    this->reflective = 0.0;
    this->transparency = 0.0;
    this->refractive_index = 1.0;
}

Material::~Material()
{
    // delete this->pattern;
}