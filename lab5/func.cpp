#include "func.h"



void input(int& size, int& down, int& up) {
    cin >> size;
    while (size <= 0 || cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Enter correct amount: ";
        cin >> size;
    }
    cout << "Enter down limit for generated numbers: ";
    cin >> down;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Enter correct number: ";
        cin >> down;

    }
    cout << "Enter up limit for generated numbers: ";
    cin >> up;
    while (cin.fail() || up < down)
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Enter correct number:";
        cin >> up;

    }
}

TIntNumber* GenerateRandomBinNumbers(int m, int up, int down) {
    srand(time(NULL));
    TIntNumber* array = new TIntNumber2[m];
    TIntNumber2 object;
    for (int i = 0; i < m; i++)
    {
        object.set_number(object.ToBin((rand() % (up - down + 1)) + down));
        array[i] = object;
    }
    return array;
}

TIntNumber* GenerateRandomHexNumbers(int n, int up, int down) {
    srand(time(NULL));
    TIntNumber* array = new TIntNumber16[n];
    TIntNumber16 object;
    for (int i = 0; i < n; i++)
    {
        object.set_number(object.ToHex((rand() % (up - down + 1)) + down));
        array[i] = object;
    }
    return array;
}
void Increment_Decrement(TIntNumber* a, TIntNumber* b, int m, int n) {
    cout << "Decremented binary numbers:" << endl;
    for (int i = 0; i < m; i++)
    {
        --a[i];
        cout << a[i].get_number() << "  ";
    }cout << endl;
    cout << "Incremented hex numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        ++b[i];
        cout << b[i].get_number() << "  ";
    }cout << endl;
    cout << "___________________________________" << endl;
}
void PrintArrayDec(TIntNumber* a, int size) {

    for (int i = 0; i < size; i++)
    {
        cout << a[i].ToDecimal() << "  ";
    }cout << endl;
}
void PrintArray(TIntNumber* a, int size) {

    for (int i = 0; i < size; i++)
    {
        a[i].print();
    }cout << endl << "___________________________________" << endl << endl;
}
int FindTheBiggestDecNumber(TIntNumber* a, TIntNumber* b, int m, int n) {
    int max = a[0].ToDecimal();
    for (int i = 0; i < m; i++)
    {
        if (a[i].ToDecimal() > max)
            max = a[i].ToDecimal();
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i].ToDecimal() > max)
            max = b[i].ToDecimal();
    }
    return max;
}

vector <string> IndexesOfBiggest(TIntNumber* a, TIntNumber* b, int m, int n) {
    vector <string> numbers;
    int max = FindTheBiggestDecNumber(a,b, m, n);
    for (int i = 0; i < m; i++)
    {
        if (a[i].ToDecimal() == max)
        {
            numbers.push_back(a[i].get_number());
            numbers.push_back("binary");
            break;
        }

    }
    for (int i = 0; i < n; i++)
    {
        if (b[i].ToDecimal() == max)
        {
            numbers.push_back(b[i].get_number());
            numbers.push_back("hex");
            break;
        }
    }
    return numbers;
}
