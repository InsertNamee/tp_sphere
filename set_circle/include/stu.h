/*
 * E89 Pedagogical & Technical Lab
 * project:     nolan.h
 * created on:  2022-11-14 - 10:02 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: my library
 */

#ifndef NOLAN_H_
#define NOLAN_H_

#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

void stu_set_circle (t_bunny_pixelarray *pxa,
                     int x,
                     int y,
                     int radius);

double deg_to_rads (int degrees);

void put_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color);
#endif
