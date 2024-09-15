#include <iostream>
using namespace std;

int main()
{
    //1
    /*
    int arr[5];
    cout << "Input 5 numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Reverse: " << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;*/

    //2
    /*int arr[20];
    srand(time(0));

    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand() % 40;
    }

    cout << "All numbers: " << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Even numbers: " << endl;
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;*/

    //3

    /*int arr[10], n = 0, sum = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = -20 + rand() % (20 + 20 + 1);
        if (arr[i] > 0)
        {
            sum += arr[i];
            n++;
        }
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Average of positive numbers = " << sum / n << endl;*/

    //4
    /*int arr[10];
    int positive = 0, negative = 0, zero = 0;

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = -5 + rand() % (5 + 5 + 1);
    }

    cout << "All nimbers: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    cout << endl;

    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;*/

    //5
    /*int arr[10];
    int sumOdd = 0, sumEven = 0, q = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1 + rand() % (10 - 1 + 1);
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
        }
        else if (arr[i] % 2 == 1)
        {
            sumOdd += arr[i];
            q++;
        }
        cout << arr[i] << " " << endl;
    }
    cout << endl << "Sum of EVEN numbers = " << sumEven << endl;
    cout << "Average of ODD numbers = " << sumOdd / q << endl;*/


}