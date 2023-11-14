#include<string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector <char> v1;
    int i=0;
    while (i!=s.length())
    {
        if(s[i]==')' && i==0) 
            return answer = false;
        if(s[i]=='(')
        {
            v1.push_back('(');
        }
        else
        {
            if(v1.empty())
            {
                return answer=false;
            }
            v1.pop_back();   
        }
        i++;
    }
    
    return v1.empty()? answer=true:false;
}
