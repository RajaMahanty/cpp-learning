// 📦 Task 4 - Volume Calculator (Overload + Default Arg Combo)

#include <iostream>

double volume(double side) // cube
{
  return side * side * side;
}
double volume(double radius, double height) // cylinder
{
  return (22 / 7) * radius * radius * height;
}
double volume(double l, double b, double h) // cuboid
{
  return l * b * h;
}

int main()
{
  double side = 5;
  double radius = 3;
  double height = 7;
  double l = 8;
  double b = 4;

  std::cout << "Volume of cube: " << volume(side) << std::endl;
  std::cout << "Volume of cylinder: " << volume(radius, height) << std::endl;
  std::cout << "Volume of cuboid (default height=1): " << volume(l, b, 1)
            << std::endl;
  std::cout << "Volume of cuboid with height: " << volume(l, b, height)
            << std::endl;

  return 0;
}