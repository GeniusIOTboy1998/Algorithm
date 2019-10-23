// yerongrong on 9.7

#include "User.h"
// #include <iostream>


User::User()
{
   //初始化
	 memset(sku_top,0,sizeof(sku_top));
     memset(user_top,0,sizeof(user_top));

     //U_his.clear();
     //sku_pro.clear();
}

User::~User()
{

}

std::vector<int> User::History(int user_ID)
{
    for(int i=0;i<v.size();++i)
    {
         U_his[ (v[i].userID) ].push_back(v[i].orderID);
    }
    return U_his[user_ID]; 
}
// 返回用户ID对应的订单


double User::Probability(int skuid)
{
     for(int i=0;i<v.size();++i)
     {
     	sku_pro[ (v[i].skuID) ].push_back(v[i].status);
     }
     int sus=0;
     for (int i = 0; i < sku_pro[skuid].size(); ++i)
     {
     	if( sku_pro[skuid][i] == 1)
     		sus++;
     }
     double pro = sus/ sku_pro[skuid].size();
     return pro;
}
// 返回商品实际付款的概率

void User::Sku_top(int time)
{
	std::vector<Indent> v_t;
    for(int i=0;i<v.size();++i)
    {
        if(v[1].orderTime == time)
        	v_t.push_back(v[1]);
    }

    for(int i=0;i<v_t.size();++i)
    {
    	if(v_t[i].skuID_t != 1)
    		continue;

        for (int j = i+1; i < v_t.size(); ++j)
        {
        	if(v_t[i].skuID == v_t[j].skuID)
             {
                v_t[i].skuID_t++;
                v_t[j].skuID_t++;	
             }
        }
        //
    }

    sort(v_t.begin(),v_t.end(),cmp_skuID);

    for (int i = 0; i < 10 ; ++i)
    {
    	if(i==0) {
    		sku_top[0]=v_t[1].skuID;
    		continue;
    	}

    	if( i>0 && v_t[i].skuID != v_t[i-1].skuID)
    		sku_top[i] = v_t[i].skuID;
    	else
    		--i;
    }
}

void User::Time_top(int time)
{
    
	std::vector<Indent> v_t;
    for(int i=0;i<v.size();++i)
    {
        if(v[1].orderTime == time)
        	v_t.push_back(v[1]);
    }


    for(int i=0;i<v_t.size();++i)
    {
    	if(v_t[i].user_t != 1)
    		continue;

        for (int j = i+1; i < v_t.size(); ++j)
        {
        	if(v_t[i].userID == v_t[j].userID)
             {
                v_t[i].user_t++;
                v_t[j].user_t++;	
             }
        }
        //
    }

    sort(v_t.begin(),v_t.end(),cmp_user);

    for (int i = 0; i < 10 ; ++i)
    {
    	if(i==0) {
    		user_top[0]=v_t[0].UserID;
    		continue;
    	}

    	if( i>0 && v_t[i].userID != v_t[i-1].userID)
    		user_top[i] = v_t[i].userID;
    	else
    		--i;
    }
}



int User::Alike(int A,int B)
{
    int alike=0;
    // 相似度以一个整数表示，alike越大越相似

    // for (vector<Indent>::iterator it_a = v.begin(); it_a != v.end(); ++it_a)
    // {
    // 	if( (*it_a).UserID==A)
    // 	{
    //         for (vector<Indent>::iterator it_b = v.begin(); it_b != v.end(); ++it_b)
    //         {
    //         	if( (*it_b).UserID==B)
    //             {
                    
    //                 if( (*it_a).skuID == (*it_b).sku_ID)
    //                 	++alike;
    //             }
    //         }
    // 	    // 找到是否有skuID相同的订单，若有，则++alike
    //     }
        
    // }

    for (int i = 0; i < U_his[A].size(); ++i)
    {
    	int indent_A = U_his[A][i];
    	for (int j = 0; j < U_his[B].size(); ++j)
    	{
    		int indent_B = U_his[B][i];

    		if(indent_A==indent_B)
    			alike++;
    	}
    }

    return alike;
}