/*
 * Copyright (C) <2016>  <chenp>
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
 * 
 */
#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include<math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

/*
preprocesseur des fonctions graphiques
*/

void pause2();
void putpixel(int xe, int ye, Uint32 c);
Uint32 getpixel(int xe, int ye); 
void line(int x0,int y0, int x1,int y1, Uint32 c);
void linewithwidth(int x1, int y1, int x2, int y2, int width,Uint32 c);
void floodfill( int x,int y, Uint32 cr,Uint32 cb);
