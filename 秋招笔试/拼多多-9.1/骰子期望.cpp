#include <iostream>
#include <vector>

using namespace std;
 
int main(){
    int n,tmp;
    int m_max=0;
    vector<int> cnt;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        m_max = (m_max<tmp)?tmp:m_max;
        cnt.push_back(tmp);
    }
     
    vector<double> p(n);
    double q1=0.0,q2=0.0,res=0.0;
    for(int k=1;k<=m_max;k++){
        q1=1.0;
        for(int i=0;i<n;i++){
            p[i]=(cnt[i]>=k)?((1.0*k)/cnt[i]):1.0;
            q1 *= p[i];
        }
        res += (q1-q2)*k;
        q2=q1;
    }
    printf("%.2f",res);
     
    return 0;
}
