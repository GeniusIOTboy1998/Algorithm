/*****************************
解题思路：

编写两个函数（1）先把整个句子反转过来
           （2）然后再依次把各个单词的顺序反转过来，就达到了反转单词顺序的效果

*****************************/

void Reverse(char *begin , char *end)
{
     if(begin == NULL || end == NULL)
          return;

     while(begin < end)
     {
          char temp = *begin;
          *begin = *end;
          *end = temp;

          begin++;
          end--;
     }
}

char *ReverseSentence(char *data)
{
     if(data == NULL)
          return NULL;

     char *begin = data;
     char *end = data;

     while(*end != '\0') 
         end++;
     end--;

     Reverse(begin,end);

     begin=end=data;

     while(*begin != '\0')
     {
          if(*begin == ' ')
          {
               begin++;
               end++:
               continue;
          }
          else if(*pEnd == ' ' || *pEnd == '\0')  
            {  
                  Reverse(pBegin, --pEnd);  
                  pBegin = ++pEnd;  
            }  
            else  
            {  
                  pEnd ++;  
            }  
     }
     return data;
}