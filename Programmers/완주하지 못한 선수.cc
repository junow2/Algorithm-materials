#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    map <string, int> m; 
    for (string p: participant) {
        if (m.find(p) != m.end()) m[p]++;
        else m[p]++;
    }
    for (string c: completion) m[c]--;
    
    string answer = "";
    for (auto i: m) 
        if (i.second != 0) answer += i.first;
    
    return answer;
}