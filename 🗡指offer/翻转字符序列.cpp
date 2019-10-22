#include <iostream>

using namespace std;

string ReverseSentence(string str) {
        string res="",tmp="";
        for(int i=0;i<str.size();++i)
        {
        //    if(str[i]==' ') res=" "+tmp+res,tmp="";
            if(str[i]==' ') res=" "+res+tmp,tmp="";
            else tmp +=str[i];
        }
        if(tmp.size()) res=tmp+res;
        return res;
}

 string reverseWords(string s) {
        string r="";
        int i=s.size()-1,l=i;
        while(i>=0){
            while(i>=0&&s[i]==' ')i--;
            if(i<0)break;
            l=i;
            while(i>=0&&s[i]!=' ')i--;
            r+=s.substr(i+1,l-i)+" ";
        }
        if(!r.empty())  r.pop_back();
        return r;
    }
    
    
int main()
{
//	string str;
//	getline(cin,str);
//	cout<<ReverseSentence(str)<<endl;
//    cout<<reverseWords(str)<<endl;

	return 0;
}


//    int i=9;
//    while(i) i--;
//    cout<<i<<endl;
