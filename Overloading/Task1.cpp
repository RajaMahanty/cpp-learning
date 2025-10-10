// 🧩 Task 1 - Area Calculator

#include <iostream>

// area of square, rectangle, and circle
int area(int);
int area(int, int);
double area(double);

int main()
{
  std::cout << "Area of square with side 5 is " << area(5) << std::endl;
  std::cout << "Area of rectangle with length 5 and breadth 10 is " << area(5, 10) << std::endl;
  std::cout << "Area of circle with radius 5 is " << area(5.0) << std::endl;
  return 0;
}

// area of square, rectangle, and circle
int area(int side)
{
  return side * side;
}

int area(int length, int breadth)
{
  return length * breadth;
}

double area(double radius)
{
  return (22 / 7) * radius * radius;
}
