#ifndef VEC3_H
#define VEC3_H

#include <math.h>

//vector struct
typedef struct
{
    float x,y,z;
} Vec3;


//point used later for ray class
typedef Vec3 Point3

/*---------------------------------------------------------------------Vector ops -*/

/*
Purpose: adds two vectors
Input: 2 vectors to add togethor
ouput: new vector valule
*/

Vec3 vec_add(Vec3 v1,Vec3 v2)
{
   return (Vec3) {v1.x + v2.x, v1.y + v2.y,v1.z + v2.z}; 
};


/*
Purpose: sub two vectors
Input: 2 vectors to sub togethor
ouput: new vector valule
*/

Vec3 vec_sub(Vec3 v1,Vec3 v2)
{
   return (Vec3) {v1.x - v2.x, v1.y - v2.y,v1.z - v2.z}; 
};


/*
Purpose: mul two vectors
Input: 2 vectors to mul togethor
ouput: new vector valule
*/

Vec3 vec_mul(Vec3 v1,Vec3 v2)
{
   return (Vec3) {v1.x * v2.x, v1.y * v2.y,v1.z * v2.z}; 
};


/*
Purpose: scale vectors
Input: vector and scale values
ouput: new vector valule
*/

Vec3 vec_scale(Vec3 v1,int scale)
{
   return (Vec3) {v1.x * scale , v1.y * scale, v1.z * scale}; 
};


/*
Purpose: scale vectors
Input: vector and double type scale values
ouput: new vector valule
*/

Vec3 vec_double_scale(Vec3 v1,double scale)
{
   return (Vec3) {v1.x * scale, v1.y * scale, v1.z * scale}; 
};


/*
Purpose: divdes vector values
Input: vector and scale values
ouput: new vector valule
*/

Vec3 vec_double_div(Vec3 v1,double scale)
{
   return (Vec3) {v1.x * (1/scale), v1.y * (1/scale),v1.z * (1/scale)}; 
};


/*
Purpose: Preforms the dot product on two vectror
Input: two vectros
Output: Returns dot prodcut
*/
double dot_product(Vec3 v1, Vec3 v2)
{
    //1x1 * 1x1 = 1
    return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));

}


/*
PURPOSE: Preforms vector cross
Input: Two vectors
Ouput: returns a vector
*/
Vec3 cross_vec(Vec3 v1, Vec3 v2)
{
    return (Vec3) {(v1.y * v2.z) - (v1.z*v2.y), (v1.z * v2.x) - (v1.x * v2.z),(v1.x * v2.y) - (v1.y * v2.x)};
}

///--------------------------------------------------Getting unit vector

/*
Purpose: gets the sqrt length of a vector give this value to vec_double_div
input: a vector
Oupt: lenght of vector
*/
double length(const Vec3 v1)
{
    return sqrt((v1.x * v1.x) + (v1.y * v1.y) + (v1.z * v1.z));
}


#endif 
