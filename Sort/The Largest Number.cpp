#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(int a, int b)
{
    
    string stra = to_string(a);
    string strb = to_string(b);
    return stra+strb>strb+stra;
}
string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), cmp);
    for (int i=0; i<numbers.size(); i++)
    {
        if(numbers[0]==0)
        {
            return answer='0';
        }
        answer += to_string(numbers[i]);
        
    }
    

    return answer;
}
