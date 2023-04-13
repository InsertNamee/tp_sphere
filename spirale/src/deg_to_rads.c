/*
 * E89 Pedagogical & Technical Lab
 * project:     deg to rads
 * created on:  2023-01-12 - 09:48 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: convert degre into radiant
 */

#include <math.h>

double deg_to_rads (int degrees)
{
    double result;

    return (result = (degrees*(M_PI*2))/360);
}
