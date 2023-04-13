/*
 * E89 Pedagogical & Technical Lab
 * project:     set_circle
 * created on:  2023-01-12 - 10:37 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: draw a circle
 */

#include "stu.h"

void stu_set_spiral (t_bunny_pixelarray *pxa,
                     int x,
                     int y,
                     int radius,
                     int loop)
{
    t_bunny_position pos;
    float deg;
    float rad;
    int i;
    double radiant;
    double tmp;

    i = 0;
    deg = 0;
    radiant = (double)radius;
    tmp = (double)radius/360;
    while (i != loop){
        while (deg < 360) {
            rad = (deg_to_rads (deg));
            pos.x = ((cos(rad)*radiant)+x);
            pos.y = ((sin(rad)*radiant * -1)+y);
            put_pixel(pxa,&pos,WHITE);
            deg += 1;
            radiant += tmp;
            printf("%f \n",radiant);
        }
        deg = 0;
        i += 1;
    }
}
