class Solution {
public:
    void reverseString(vector<char>& s) {
        int srt=0;
        int lst=s.size()-1;
        while(srt<lst){
            swap(s[srt],s[lst]);
            srt++;
            lst--;
        }
    }
};