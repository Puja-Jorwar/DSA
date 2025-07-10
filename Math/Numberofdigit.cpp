#include <bits/stdc++.h>
int countDigit(long long x)
{
    int count = 0;
    while (x > 0)
    {
        long long lastdigit = x % 10; /// not need
        count += 1;
        x = x / 10;
    }
    return count;
}
int main(){
    return 0;
}

// Another way
/* 
int countDigit(long long x) {
  int count = int(log(n)+1);
  
  return count;
  
}


TC -> O(log base 10 (n))

remember when therer is division by 10 TC wil br log to the base 10
if division by 2 TC will log to the base 2