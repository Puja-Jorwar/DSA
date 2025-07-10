
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i;
        }
    }
}
// TC -> big O(n)

int n;
cin >> n;

//   i*i<=n // 6*6 =<36  7*7<=36
// TC -> O(sqrt(n))

for (int i = 1; i <= sqrt(n); i++)
{
    if (n % i == 0)
}
cout << i;
if ((n % i) != i)
    cout << n % i;
}
}
}
// O(n log n) n is no of factors
sort(ls.begin(), ls.end());
for (auto it : ls)
    cout << it;
}

/*
int* printDivisors(int n,int &size ){
    vector<int>ls;
for (int i = 1; i <= sqrt(n); i++)
{
    if (n % i == 0){
        ls.push_back(i);
        if(n/i != i){
            ls.push_back(n/i);
        }
    }

}
sort(ls.begin(),ls.end());

size = ls.size();

int* result = new int[size];
for(int i=0 ; i< size;i++)

    result[i] = ls[i];
    return result;


}



###########################################################################
void printDivisors(int n ){
    vector<int>ls;
for (int i = 1; i <= sqrt(n); i++)
{
    if (n % i == 0){
        ls.push_back(i);
        if(n/i != i){
            ls.push_back(n/i);
        }
    }

}
sort(ls.begin(),ls.end());
for(auto it : ls)
cout << it;
}
