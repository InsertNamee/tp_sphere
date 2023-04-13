/*
 * E89 Pedagogical & Technical Lab
 * project:     set_circle
 * created on:  2023-01-12 - 10:37 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: draw a circle
 */

#include "stu.h"

void stu_set_circle (t_bunny_pixelarray *pxa,
                    int x,
                    int y,
                    int radius)
{
    t_bunny_position pos;
    float deg;
    float rad;

    deg = 0;
    while (deg < 360) {
        rad = (deg_to_rads (deg));
        pos.x = ((cos(rad)*radius)+x);
        pos.y = ((sin(rad)*radius)+y * -1);
        put_pixel(pxa,&pos,WHITE);
        deg += 1;
    }
}
