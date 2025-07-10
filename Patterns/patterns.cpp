#include <iostream>
using namespace std;

void print1(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print7(int n)
{
    for (int i = 1; i < n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {

            cout << "*";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n)

{
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * n) - (2 * i) + 1; j++)
        {

            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print9(int n) // you can combine 7th and 8th two pattrens to get this pattern actually its a good way of practice of coding
{
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print10(int n)

{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }
}

void print11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int j = 1; j < 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {

            cout << k;
        }

        cout << endl;
    }
}
void prit111(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        space = space + 2;
    }
}
void print13(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = start + 1;
        }

        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char c = 'A'; c < 'A' + i; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}
void print15(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print16(int n)
{
    for (char c = 'A'; c < 'A' + n; c++)
    {
        for (char ch = 'A'; ch <= c; ch++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}
void print17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        int breakpoint = (2 * i) / 2;
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << ch << " ";
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}
void print18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}
void print19(int n)
{
    int space = 0;
    for (int i = 1; i <= n; i++)
    {

        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        // spaces

        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        space = space + 2;
        cout << endl;
    }
    int space2 = (2 * n) - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= space2; k++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        space2 = space2 - 2;
        cout << endl;
    }
}
void print20(int n)
{
    int space = n + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        space -= 2;
        cout << endl;
    }
    int space2 = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        space = space + 2;
        cout << endl;
    }
}
void print21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void print22(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            int top = i - 1;
            int left = j - 1;
            int right = (2 * n - 1) - j;
            int bottom = (2 * n - 1) - i;
            cout << (n - (min(min(top, bottom), min(left, right))));
        }
        cout << endl;
    }
}

int main()
{
    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    //     int n;
    //     cin >> n;
    //     int m;
    //     cin >> m;
    //     print1(n, m);
    // };

    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {

        int a;
        cin >> a;

        print11(a);
    }
}
