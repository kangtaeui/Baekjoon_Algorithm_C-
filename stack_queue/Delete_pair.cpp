#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector <char> v;

int solution(string s)
{
    int answer = 0;
    int top=-1;
    
    for (int i=0; i<s.length(); i++)
    {
        if (v.empty() || v[top]!= s[i])
        {
            v.push_back(s[i]);
            top++;
        }
        else if( v[top]==s[i])
        {
            v.pop_back();
            top--;
        }
    }
     if(v.empty())
        {
            answer= 1;
        }
     else
        {
            answer = 0;
        }
    return answer;
}
