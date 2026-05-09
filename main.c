/*
Berny Perez
Praticing how to program a ray tracer in c
*/

/*
What is ray tracing?
 -a technique for modeling light transport for rendering. Building an image by 
 extending rays into scene and bouncing them off surfaces and towards sources of light to approximate the color value of pixels.

How does ray tracing work summary?
sample light over a domain typically gernate multiple rays and often rely on denoisind to reduced the resulting noise.

camera -> ->  | images o -> view arrays   () scence object  -> 9 Light source
*/


#include <stdio.h>
#include <math.h>
#include "vec3.h"
#include "color.h"
#include "ray.h"


/*
PURPOSE: Creates a ppm file
Input: image witdh and height
Ouput: prints out rgb values 
*/
void ppm_format(int img_height, int img_width)
{

    //formating into a .ppm file
    printf("P3\n image width %d , image height %d\n255\n", img_width, img_height);

    //render
    /*
       writing pixels to rows, left to right, top to bottom, 
    */
    for(int j = 0; j < img_height; j++)
    {
        for(int i =0; i < img_width; i++)
        {
            Vec3 pixel_color = {(double) i / (img_width-1) , (double) j / (img_height-1),0.0};
            write_color(pixel_color);
        }
    }
}


int main() 
{
    //image

    double aspect_ratio = 16.0/9.0;
    int img_width = 256;

    //calculate the image height, and ensure that it's atleast 1.
    int img_height = (int)(img_width / aspect_ration);
    
    if(img_height < 1)
    {
        img_height = 1;
    }
    
    //viewport widths lest than one are ok since the are real valued.
    double viewport_height = 2.0;
    double viewport_height * ((double)(img_width)/img_height);
    
    ppm_format(img_height, img_width);
      
    return 0;
}
