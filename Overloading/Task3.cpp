// Task 3 - Distance Converter (Default Argument)

#include <iostream>

double convertToKm(double, std::string unit = "m");

int main()
{
  std::cout << "1000 m in km: " << convertToKm(1500) << std::endl;
  std::cout << "1000 cm in km: " << convertToKm(1800, "cm") << std::endl;
  std::cout << "1 km in km: " << convertToKm(7.8, "km") << std::endl;

  return 0;
}

double convertToKm(double distance, std::string unit)
{
  if (unit == "m")
    return distance / 1000;
  else if (unit == "cm")
    return distance / 100000;
  else if (unit == "km")
    return distance;
  else
  {
    std::cerr << "Unknown unit: " << unit << std::endl;
    return -1;
  }
}