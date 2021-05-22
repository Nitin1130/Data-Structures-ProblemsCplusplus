#include<bits/stdc++.h>
using namespace std;

string find_window(string s, string pat) {
    int sL = s.length();
    int pL = pat.length();
    //1. Corner case
    if(pL > sL) {
        return "No String";
    }
    //2. Freq Maps
    int FS[256] = {0};
    int FP[256] = {0};
    for(int i = 0; i < pL; i++) {
        char ch = pat[i];
        FP[ch]++;
    }

    //3.) Sliding Window(Expansion & Contraction) 
    int startIdx = -1, start = 0, min_len = INT_MAX, count = 0;
    for(int i = 0; i < sL; i++) {
        char ch = s[i];
        FS[ch]++;
        //if string's char matches with pattern's with 
        if(FP[ch] != 0 && FS[ch] <= FP[ch]) {
            count++;
        }
        //if all characters match
        if(count == pL) {
            //start shrinking the window
            char temp = s[start];
            //loop
            while(FS[temp] == 0 || FS[temp] > FP[temp]) {
                FS[temp]--;
                start++;
                temp = s[start];
            }
            //window size
            int window_len = i - start + 1;
            if(window_len < min_len) {
                min_len = window_len;
                startIdx = start; 
            }

        }
    }
    if(startIdx == -1) {
        return "No String";
    }
    string ans = s.substr(startIdx, min_len);
    return ans;

}


int main() {
    string s, pat;
    getline(cin , s);
    getline(cin , pat);
    string res = find_window(s, pat);
    cout << res;

    return 0;
}