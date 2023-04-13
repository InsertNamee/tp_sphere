/*
 * E89 Pedagogical & Technical Lab
 * project:     main
 * created on:  2023-01-12 - 10:36 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: execute set_circle
 */

#include "stu.h"

int main(void)
{

    t_bunny_window *win;
    t_bunny_pixelarray *px;
    t_bunny_position origin;
    int x;
    int y;
    int h;
    int l;

    y = 300;
    x = 400;
    h = 600;
    l= 800;
    win = bunny_start(l, h, false,"fl: test");
    px = bunny_new_pixelarray(l, h);
    origin.x = 0;
    origin.y = 0;
    stu_set_spiral(px,x,y,10,40);
    bunny_blit( &win->buffer, &px->clipable, &origin);
    bunny_display(win);
    usleep (3e6);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
