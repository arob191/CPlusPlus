#include <iostream>
#include <string>
using namespace std;

template<typename T>
T maxValue(const T value1, const T value2)
{
    if (value1 > value2)
        return value1;
    else
        return value2;
}

template<typename T>
void sort(T list[], int listSize)
{
    for (int i = 0; i < listSize; i++)
    {
        T currentMin = list[i];
        int currentMinIndex = i;
        
        for (int j = i + 1; j < listSize; j++)
        {
            if(currentMin > list[j])
            {        
                currentMin = list[j];
                currentMinIndex = j;
            }
        }   

        if (currentMinIndex != i)
        {
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
    }
}

template<typename T>
void printArray(const T list[], int listSize)
{
  for (int i = 0; i < listSize; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;
}

int main()
{
    int x = 3;
    int y = 4;

    cout << maxValue(x, y);

    int list1[] = {10, 3, 9, 11};

    sort(list1, 4);
    printArray(list1, 4);

    return 0;
}

