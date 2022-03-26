#include "Box.h"
#include <iostream>

// Implement setters and getters
void Box::setLength(int plength)
{
  length = plength;
}
void Box::setWidth(int pwidth)
{
  width = pwidth;
}
void Box::setHeight(int pheight)
{
  height = pheight;
}

int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
