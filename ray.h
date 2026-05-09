#ifndef RAY_H
#define RAY_H


/*
BERNY PEREZ
Purpose: Hold the ray classs that consist of origin and direction. It also holds functions used for rays operation
*/


#include "vec3.h"

//ray function P(t) = A + tb. P 3d position along a line in 3D. A is ray origin, 
//b is the ray direction. t is real number and a double in code.



typedef struct
{
   Point3 orig;
   Vec3 dir;

}ray;


const Point3 origin(const ray) const
{
   return ray.orig;
}

const Vec3& direction(const ray) const
{
    return ray.dir;
}


point3 at(const ray,double t) const
{
    return ray.orig + (t * ray.dir);
}




#endif
