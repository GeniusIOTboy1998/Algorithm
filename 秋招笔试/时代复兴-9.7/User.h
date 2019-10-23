// yerongrong on 9.7


#ifndef MY_USER_H
#define MY_USER_H

// #include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <algorithm>


struct Indent
{
	   int orderID;   //订单ID 
       int orderTime; // 下单时间
       int skuID;    // 商品ID
       int userID;  // 用户ID
       int status;  // 订单状态 0 待付款 1 已付款 2 取消

       double price; // 价格
       double pay;   //支付金额

        int user_t=1; //出现的次数
        int skuID_t=1;
};

bool cmp_user(Indent A,Indent B)
{
	return A.user_t > B.user_t;
} 

bool cmp_skuID(Indent A,Indent B)
{
	return A.skuID_t > B.skuID_t;
}

class User{
    public:
       User(); 
       
       ~User();

    std::vector<int> History(int user_ID); //获取订单历史

    double Probability(int skuid);  // 付款概率

    void Sku_top(int time);

    void Time_top(int time);

    int Alike(int A,int B); //比较相似度



    private:
     std::vector<Indent> v;  // 数据集
     
     std::map<int,std::vector<int> > U_his;
     std::map<int,std::vector<int> > sku_pro;

    public:
     
     int sku_top[10];  // top10
     int user_top[10];

};

#endif