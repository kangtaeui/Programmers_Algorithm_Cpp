#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> day(progresses.size(),0);
    int num=0;
    int days=0;
    int cnt=1;
    for(int i=0; i <progresses.size(); i++)
    {
        num = 100 - progresses[i];
        days = (num/speeds[i]);
        if(num%speeds[i]!=0)
            days++;
        day[i] = days;
    }
    for (int i=0; i<day.size(); i++)
    {
        int j=i+1;
        while(j!=day.size())
        {
            if(day[i]<day[j])
            {
                break;
            }
            j++;
            cnt++;
        }
        i=j-1;
        answer.push_back(cnt);
        cnt=1;
        
    }
    
    return answer;
}
