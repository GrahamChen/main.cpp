#include <iostream>

using namespace std;
class Solution{
public:
    string reolaceSpace(string s){
        int len=s.size();
        int count=0;

        for(int i=0;i<len;i++)
        {
            if(s[i]==' ')
                count++;

        }
        s.resize(len+count*2);
        for(int i=s.size()-1,j=len-1;j>=0&&i>=0;j--)
        {
            if(s[j]!=' ') {
                s[i--] = s[j];
            }
            else
            {
                s[i--]='%';
                s[i--]='2';
                s[i--]='0';
            }
        }
        return s;
    }
};

int main() {

    string s="hh hh hh c n m";
    Solution tihuan;
    s=tihuan.reolaceSpace(s);
    std::cout << s << std::endl;
    return 0;
}
