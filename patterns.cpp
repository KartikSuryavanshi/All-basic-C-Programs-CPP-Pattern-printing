/*
🔹 Pattern 1: Square Star Pattern

*****
*****
*****
*****
*****

🔹 Pattern 2: Right-Angled Triangle Star Pattern

*
**
***
****
*****

🔹 Pattern 3: Right-Angled Number Pattern

1
1 2
1 2 3
1 2 3 4

🔹 Pattern 4: Inverted Right-Angled Star Pattern

* * * * *
* * * *
* * *
* *
*

🔹 Pattern 5: Repeated Number Triangle

1
22
333
4444

🔹 Pattern 6: Inverted Number Triangle

1 2 3 4
1 2 3
1 2
1

🔹 Pattern 7: Pyramid Star Pattern

    *
   ***
  *****
 *******

🔹 Pattern 8: Inverted Pyramid Star Pattern

*******
 *****
  ***
   *

🔹 Pattern 9: Diamond Star Pattern
(Combination of Pattern 7 and Pattern 8)

    *
   ***
  *****
 *******
  *****
   ***
    *

🔹 Pattern 10: Half Diamond Star Pattern

*
**
***
****
***
**
*

🔹 Pattern 11: Binary Number Triangle Pattern

0
1 0
0 1 0
1 0 1 0

🔹 Pattern 12: Number Crown Pattern

1      1
12    21
123  321
12344321

🔹 Pattern 13: Increasing Number Triangle

1
2 3
4 5 6
7 8 9 10

🔹 Pattern 14: Alphabet Triangle Pattern

A
A B
A B C
A B C D

🔹 Pattern 15: Inverted Alphabet Triangle

A B C D
A B C
A B
A

🔹 Pattern 16: Repeated Alphabet Triangle

A
B B
C C C
D D D D

🔹 Pattern 17: Alphabet Pyramid Pattern

    A
   ABA
  ABCBA
 ABCDCBA

🔹 Pattern 18: Alphabet Increasing Pattern (Reverse Start)

E
D E
C D E
B C D E
A B C D E

🔹 Pattern 19: Double Star Pyramid Pattern

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

🔹 Pattern 20: Symmetric Double Star Pattern

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

🔹 Pattern 21: Hollow Square Star Pattern

*****
*   *
*   *
*   *
*****

🔹 Pattern 22: Concentric Number Square Pattern

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

Languages Used:-
* C++
*/





#include <iostream>
using namespace std;

void printpattern1(int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void printpattern2(int n)
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

void printpattern3(int n)
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

void printpattern4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < n - i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void printpattern5(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
}

void printpattern6(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n-i+1; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

void printpattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    //space
    for (int j = 0; j < n-i-1; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2*i +1; j++)
    {
      cout << "*";
    }

    // space

    for (int j = 0; j < n-i-1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void printpattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    //space
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2*n-(2*i +1); j++)
    {
      cout << "*";
    }

    // space

    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

// void printpattern9 is the combination of printpattern7 and printpattern8

void printpattern10(int n)
{
  for (int i = 0; i <= 2*n-1; i++)
  {
    int stars = i;
    if(i>n) stars = 2*n-i;
    for (int j = 1; j < stars; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void printpattern11(int n)
{
  for (int i = 1; i <n; i++)
  {
    int start =1;
    if (i%2==0) start =1;
    else start =0;
    for (int j = 1; j <i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void printpattern12(int n)
{
  int space = 2*(n-1);
  for (int i = 1; i <= n; i++)
  {
    //numbers
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    // space
    for (int j = 1; j<=space; j++)
    {
      cout << " ";
    }

    // numbers

    for (int j = i; j>=1; j--)
    {
      cout << j;
    }
    cout << endl;
    space -= 2;
  }
}

void printpattern13(int n)
{
  int num=1;
  for (int i = 1; i <= n; i++)
  {
    
    for (int j = 1; j <= i; j++)
    {
      cout << num<< " ";
      num=num+1;
    }
    cout << endl; 
  }
}

void printpattern14(int n)
{
  int num=1;
  for (int i = 0; i < n; i++)
  {
    
    for (char ch ='A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
    }
    cout << endl; 
  }
}

void printpattern15(int n)
{
  int num=1;
  for (int i = 0; i < n; i++)
  {
    
    for (char ch ='A'; ch <= 'A' +(n-i-1); ch++)
    {
      cout << ch << " ";
    }
    cout << endl; 
  }
}

void printpattern16(int n)
{
  int num=1;
  for (int i = 0; i < n; i++)
  {
    char ch ='A'+i;
    for (int j = 0; j <= i; j++)
    {
      cout << ch << " ";
    }
    cout << endl; 
  }
}

void printpattern17(int n)
{
  for (int i = 0; i < n; i++)
  {
    //space
    for (int j = 0; j < n-i-1; j++)
    {
      cout << " ";
    }
    // stars
    char ch = 'A' ;
    int breakpoint = (2*i +1)/2;
    for (int j= 1; j <= 2*i+1; j++)
    { 
      cout << ch;
      if(j<=breakpoint) ch++;
      else ch--;
    }
    

    // space

    for (int j = 0; j < n-i-1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void printpattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'E' - i;
        for (; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void printpattern19(int n)
{
  int iniS = 0;
  for (int i = 0; i < n; i++)
  {
    //stars
    for (int j = 1; j <=n-i; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j<=iniS; j++)
    {
      cout << " ";
    }

    // stars

    for (int j = 1; j<=n-i; j++)
    {
      cout << "*";
    }
    iniS += 2;
    cout << endl;
  }
  iniS=2*n-2;

  for (int i = 0; i < n; i++)
  {
    //stars
    for (int j = 1; j <=i+1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j<=iniS; j++)
    {
      cout << " ";
    }

    // stars

    for (int j = 1; j<=i+1; j++)
    {
      cout << "*";
    }
    iniS -= 2;
    cout << endl;
  }


}

void printpattern20(int n)
{
    int spaces = 2*n - 2;

    for (int i = 1; i <= 2*n - 1; i++)
    {
        int stars;
        if (i <= n)
            stars = i;
        else
            stars = 2*n - i;

        // left stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        // spaces
        for (int j = 1; j <= spaces; j++)
            cout << " ";

        // right stars
        for (int j = 1; j <= stars; j++)
            cout << "*";

        cout << endl;

        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}

void printpattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void printpattern22(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
          int top = i;
          int left = j;
          int right = (2*n-2) - j;
          int bottom = (2*n-2) - i;
          int minDist = min(min(top, bottom), min(left, right));
          cout << n - minDist << " ";
        }
        cout << endl;
    }
}





int main()
{
  int n;
  cin >> n;
  // printpattern1(n);
  // printpattern2(n);
  // printpattern3(n);
  // printpattern4(n);
  // printpattern5(n);
  // printpattern6(n);
  // printpattern7(n);
  // printpattern8(n);
  // printpattern10(n);
  // printpattern11(n);
  // printpattern12(n);
  // printpattern13(n);
  // printpattern14(n);
  // printpattern15(n);
  // printpattern16(n);
  // printpattern17(n);
  // printpattern18(n);
  // printpattern19(n);
  // printpattern20(n);
  // printpattern21(n);
  printpattern22(n);

  return 0;
}
