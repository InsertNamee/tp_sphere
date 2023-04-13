/*
 * E89 Pedagogical & Technical Lab
 * project:     main
 * created on:  2023-01-12 - 09:48 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: execute deg to rads
 */

#include <stdio.h>   //TEMPORAIRE

double deg_to_rads (int degrees);

int main (void)
{
    printf("0deg = %f \n",deg_to_rads(0));
    printf("90deg= %f \n",deg_to_rads(90));
    printf("180deg= %f \n",deg_to_rads(180));
    printf("270deg= %f \n",deg_to_rads(270));
    printf("360deg= %f \n",deg_to_rads(360));
}
