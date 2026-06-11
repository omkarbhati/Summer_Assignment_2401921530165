class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
    stack<int> numStack;
    
    string curr = "";
    int num = 0;
    
    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0'); // handle multi-digit
        }
        else if (c == '[') {
            strStack.push(curr);
            numStack.push(num);
            curr = "";
            num = 0;
        }
        else if (c == ']') {
            string temp = curr;
            curr = strStack.top();
            strStack.pop();
            
            int repeat = numStack.top();
            numStack.pop();
            
            while (repeat--) {
                curr += temp;
            }
        }
        else {
            curr += c;
        }
    }
    
    return curr;
    }
};