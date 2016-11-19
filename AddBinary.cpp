class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()>b.length()) return addBinary(b,a);
       string tmp;
       int i=a.length()-1;
       int j=b.length()-1;
        int carry = 0;
        while(i>=0){
            cout<<carry<<endl;
            int abit = a[i]-'0';
            int bbit = b[j]-'0';
            int sol = abit+bbit+carry;
            if(sol>1) carry = 1;
            else carry = 0;
            tmp = to_string(sol%2) + tmp;
            i--;
            j--;
        }
        while(j>=0){
            int bbit = b[j] - '0';
            int sol = bbit+carry;
            if(sol>1) carry = 1;
            else carry = 0;
            tmp = to_string(sol%2) + tmp;
            j--;
        }
        if(carry) tmp = '1'+tmp;
        return tmp;
    }
};
