/*
In Ciel's restaurant, a waiter is training.
Since the waiter isn't good at arithmetic, sometimes he gives guests wrong change. 
Ciel gives him a simple problem. What is A-B (A minus B) ?
Surprisingly, his answer is wrong. To be more precise, his answer has exactly one wrong digit. 
Can you imagine this? Can you make the same mistake in this problem?

Input
An input contains 2 integers A and B.

Output
Print a wrong answer of A-B. Your answer must be a positive integer containing the same number of digits as the correct answer, 
and exactly one digit must differ from the correct answer. Leading zeros are not allowed. If there are multiple answers satisfying 
the above conditions, anyone will do.

Constraints
1 ≤ B < A ≤ 10000

Sample Input
5858 1234
Sample Output
1624
Output details
The correct answer of 5858-1234 is 4624. So, for instance, 2624, 4324, 4623, 4604 and 4629 will be accepted, 
but 0624, 624, 5858, 4624 and 04624 will be rejected.
*/

#include<iostream>
using namespace std;
#define ll long long int

int main()
{
    ll A,B,res,temp;

        cin >> A >> B;
        if( A > B)
            res = A - B;
        else
            res = B - A;

        if(res == 0)
        {
            cout << 1 << endl;
        }

        else
        {
            temp = res % 10;
            
            if(temp == 9)
                res = res - 1;
            else
                res = res + 1;
        }

        cout << res << endl;
    return 0;
}