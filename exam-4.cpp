#include <iostream>
using namespace std;


void ArrayOutput(int mas[], int size)
{
    int k = 0;
    int min = mas[0];
    int minnegative = mas[0];
    for (int i = 0; i < size; i++)
    {
        if (mas[i] > 0) k++;
        if (mas[i] > 0 && (k == 1 || mas[i] < min)) min = mas[i];
    }

    for (int i = 0; i < size; ++i) 
    {
        if (i <= 0)
            if (mas[i] < minnegative)
            {
                minnegative = mas[i];
            }
    }
    int ans = minnegative - min;
    cout <<"Ans: " << ans <<"   ";
    
}


int main()
{
    int b[26] = { -5,7,8,2,2,1,2,2,2,3,4,4,4,4,5,5,6,7,7 };
    int* a = new int[19];
    for (int i = 0; i < 19; i++)
    {
        cin >> a[i];
    }
    ArrayOutput(a, 19);
    ArrayOutput(b, 26);
}


