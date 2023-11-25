#include <iostream>
#include <string>
#include <climits>

using namespace std;

string findSmallestSubstring(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 == 0 || len2 == 0)
        return "-1";

    int count[256] = {0};
    for (int i = 0; i < len2; i++)
        count[s2[i]]++;

    int start = 0, startIndex = -1, minLength = INT_MAX;
    
    int windowCount[256] = {0};
    
    int foundCount = 0;

    for (int j=0; j < len1; j++) {
        windowCount[s1[j]]++;
        if (count[s1[j]] > 0 && windowCount[s1[j]] <= count[s1[j]])
            foundCount++;
         
        if (foundCount == len2) {
            while (windowCount[s1[start]] > count[s1[start]] || count[s1[start]] == 0) {
                if (windowCount[s1[start]] > count[s1[start]])
                    windowCount[s1[start]]--;
                start++;
            }
             
            int windowLength = j - start + 1;
            if (minLength > windowLength) {
                minLength = windowLength;
                startIndex = start;
            }
        }
    }

    if (startIndex == -1)
        return "-1";

    return s1.substr(startIndex, minLength);
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        string smallestSubstring = findSmallestSubstring(s1, s2);
        cout << smallestSubstring << endl;
    }
    return 0;
}