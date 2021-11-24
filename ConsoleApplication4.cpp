#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);

}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
double iMax(int* a, const int size)
{
    int max = a[0], index = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }
    
    return index;


}
double iMin(int* a, const int size)
{
    int min = a[0], index = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    return index;

}


int main()
{
    srand((unsigned)time(NULL));
    int n = 0;  // размер массива
    cout << "N = "; cin >> n;
    int* a = new int[n];
    int Low = -10;
    int High = 10;
    Create(a, n, Low, High);
    Print(a, n);

    cout << "max = " << iMax(a, n) << endl;
    cout << "min = " << iMin(a, n) << endl;
    cout << "average = "  << (iMin(a, n) + iMax(a, n))/2 << endl;


    return 0;

    delete[] a;

}