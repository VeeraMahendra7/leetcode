class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>v(n+1,0);
        vector<int>res;
        int comn = 0;
        for(int i=0;i<n;i++){
            if(++v[A[i]] == 2) comn++;
            if(++v[B[i]] == 2) comn++;
            res.push_back(comn);
        }
        return res;
    }
};