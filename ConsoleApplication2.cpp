#include <iostream>

using namespace std;

void main()
{
    double start_time = clock();
    for (int i = 0; i <= 100; i++)
    {
        cout << i << " ";
    }
    double end_time = clock();
    double search_time = end_time - start_time;
    cout << "\nTime is: " << search_time << " sec";
}