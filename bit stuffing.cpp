#include <iostream>
using namespace std;
void bitStuffing(int n, int arr[])
{
    int brr[30];
    int i, j, k;
    i = 0;
    j = 0;

    int count = 1;

    while (i < n)
    {

        if (arr[i] == 1)
        {

            brr[j] = arr[i];

            for (k = i + 1; arr[k] == 1 && k < n && count < 5;
                 k++)
            {
                j++;
                brr[j] = arr[k];
                count++;

                if (count == 5)
                {
                    j++;
                    brr[j] = 0;
                }
                i = k;
            }
        }

        else
        {
            brr[j] = arr[i];
        }
        i++;
        j++;
    }
    for (i = 0; i < j; i++)
        cout <<"after stuffing :- "<< brr[i]<<endl;
}

void bitDestuffing(int n, int arr[])
{
    int brr[30];
    int i, j, k;
    i = 0;
    j = 0;

    int count = 1;

    while (i < n)
    {
        if (arr[i] == 1)
        {
            brr[j] = arr[i];
            for (k = i + 1; arr[k] == 1 && k < n && count < 5; k++)
            {
                j++;
                brr[j] = arr[k];
                count++;
                if (count == 5)
                {
                    k++;
                }
                i = k;
            }
        }
        else
        {
            brr[j] = arr[i];
        }
        i++;
        j++;
    }
    for (i = 0; i < j; i++)
        cout <<"after destuffing : -"<<brr[i]<<endl;
}

int main()
{

 int n = 6;
    int arr[] = { 1, 1, 1, 1, 1, 1 };
 
    bitStuffing(n, arr);
    
    bitDestuffing(n, arr);

}
