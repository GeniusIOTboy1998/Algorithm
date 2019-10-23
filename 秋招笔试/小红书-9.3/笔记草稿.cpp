/**********************************

题目描述：
薯队长写了一篇笔记草稿，请你帮忙输出最后内容。

1.输入字符包括英文字符，"(" , ")" 和 "<"。

2.英文字符表示笔记内容。

3. (  ) 之间表示注释内容，任何字符都无效。 括号保证成对出现。

4. "<" 表示退格, 删去前面一个笔记内容字符。 括号不受 "<" 影响 。


输入：
输入一行字符串。长度 <= 10000.

输出：
输出一行字符串，表示最终的笔记内容。



**********************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
    string str;  cin>>str;

   // string s;

    bool cur=true;
 //   vector<char> v;

    for (int i = 0; i < str.size()-1; ++i)
    {
    	if(str[i]=='<')
    	{
           int k=i;

           while(k)
           {
           	  if(str[k]=='<')
           	  {
           	  	k--;
           	  	continue
           	  }
           	  else{
           	  	 str[k]='0';
           	  	 break;
           	  }
           }
    	}


        if(cur)
        {
        	if(str[i]!=='(')
        	{
        		continue;
        	}else if(str[i]==')')
        	{
        		cur=true;
        	}

        }

    }

    for (int i = 0; i < str.size()-1; ++i)
    {
    	if(str[i]!='0')
    		cout<<str[i];
    }

    return 0;
}