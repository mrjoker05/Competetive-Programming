// Todo : Improve complexity
/*
The ZCO scholarship contest offers scholarships to first time ZCO participants. 
You are participating in it for the first time. So you want to know the number of participants who'll get the scholarship.
You know that the maximum number of scholarships offered is R and there are a total of N participants numbered from 1 to N.
Out of these, you know the set of people (denoted by X) who you know, had participated in previous year ZCOs and hence, 
they shall not get the scholarship.
Further, as the world isn't free from plagiarism, so is the case with the scholarship contest. 
And from your secret sources, you also know the set of people (denoted by set Y) who were involved 
in plagiarism and therefore aren't eligible for scholarship either.
Find out the number of participants who shall get the scholarship.

PS: Don't ask how so many scholarships are being offered when you see the constraints on R. 
You never questioned it when in mathematics classes, some person bought 80 watermelons twice just to compare them and save ₹1.

Input:
The first line will contain a single integer, T, the number of testcases. Then the testcases follow.
The first line of each test case contains four integers; N, R, |X| and |Y| denoting the number of participants, 
maximum number of scholarships offered, number of old participants, and the number of participants involved in plagiarism, 
respectively.
The second line of each test case contains |X| space separated integers x1,x2…x|X| denoting the indices of people who 
participated in previous years. If X is empty, this line is skipped and no empty line is in the input.
The third line of each test case contains |Y| space separated integers y1,y2…y|Y| denoting the indices of people who are 
involved in plagiarism. If Y is empty, this line is skipped and no empty line is in input.
Output:
For each testcase, print a single integer in a new line, denoting the number of participants who shall get the scholarship.

Constraints
1≤T≤1000
1≤N≤1015
0≤R≤1015
0≤|X|,|Y|≤min(N,2∗105)
1≤xi,yi≤N
All xi are distinct
All yi are distinct
Sum of |X| over all test cases does not exceed 5∗105
Sum of |Y| over all test cases does not exceed 5∗105
Subtasks
20 points : 1≤N≤103, and the sum of N over all test cases does not exceed 3∗103
30 points : 1≤N≤2∗105, and the sum of N over all test cases does not exceed 5∗105
50 points: Original constraints
Sample Input:
3
5 3 0 1
4
10 2 4 6
3 1 7 6
4 3 1 5 9 7
10 4 4 6
3 1 7 6
4 3 1 5 9 7
Sample Output:
3
2
3
EXPLANATION:
In the first testcase, only participant 4 is involved in plagiarism, and thus not eligible for the scholarship. 
No user has participated in previous years, and so no empty line is there in the sample. All participants except participant 4 
are eligible for the scholarship, but only three of them get it because R=3.
Both second and third testcases are the same, except for R. In both samples, only participants 2, 8 and 10 are eligible for 
scholarships.
In the second testcase, since the maximum number of scholarships is 2, only 2 participants get scholarships.
In the third testcase, all three eligible participants get scholarships.
*/

#include<iostream>
using namespace std;

int main()
{
    int T, N , R , X , Y , result, input;
    cin >> T;
    while(T--)
    {
        result = 0;
        input = 0;
        cin >> N;
        cin >> R;
        cin >> X;
        cin >> Y;
        int v[N+1] = {0};
        X = X+Y;
        
        while(X--)
        {
            cin >> input;
             v[input] = 1;
        }
        
        for(int i = 1; i <=N ; i++)
        {
            if(v[i] == 0)
                result++;
        }

        if(R < result && result != 0)
            cout << R << endl;
        else if (R > result && result != 0)
            cout << result << endl;
        else if( R == result && result !=0 )
            cout << R << endl;
        else
            cout << 0 << endl;

    }

    return 0;
}
