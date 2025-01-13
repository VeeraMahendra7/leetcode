class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0, a = 0, n = 0, l = 0, o = 0;
        int s = text.size();
        for(int i=0;i<s;i++){
            if(text[i] == 'b') b++;
            else if(text[i] == 'a') a++;
            else if(text[i] == 'n') n++;
            else if(text[i] == 'l') l++;
            else if(text[i] == 'o') o++;
        }
        vector<int> v;
        v.push_back(b);
        v.push_back(a);
        v.push_back(n);
        v.push_back(l/2);
        v.push_back(o/2);
        int mn = INT_MAX;
        for(int i: v){
            mn = min(i,mn);
        }
        return mn;
    }
};