// Sort an array (bubble sort).

#include <iostream>

int *bubbleSort(int arr[], int length)
{
  bool swapped;
  for (int i = 0; i < length - 1; i++)
  {
    swapped = false;
    for (int j = 0; j < length - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        std::swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
  return arr;
}

int main()
{
  int arr[] = {12, 5, 8, 1, 6, 2};
  int length = sizeof(arr) / sizeof(arr[0]);

  int *sortedArray = bubbleSort(arr, length);

  std::cout << "Sorted array: ";
  for (int i = 0; i < length; i++)
  {
    std::cout << sortedArray[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
