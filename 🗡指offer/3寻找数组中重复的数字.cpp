//#include <iostream>
//
////using namespace std;
//
//int countRange(const int* numbers, int length, int start, int end);
//
//// ����:
////        numbers:     һ����������
////        length:      ����ĳ���
//// ����ֵ:             
////        ����  - ������Ч�����������д����ظ������֣�����ֵΪ�ظ�������
////        ����  - ������Ч������������û���ظ�������
//int getDuplication(const int* numbers, int length)
//{
//    if(numbers == nullptr || length <= 0)
//        return -1;
//
//    int start = 1;
//    int end = length - 1;
//    while(end >= start)
//    {
//        int middle = ((end - start) >> 1) + start;
//        int count = countRange(numbers, length, start, middle);
//        if(end == start)
//        {
//            if(count > 1)
//                return start;
//            else
//                break;
//        }
//
//        if(count > (middle - start + 1))
//            end = middle;
//        else
//            start = middle + 1;
//    }
//    return -1;
//}
//
//int countRange(const int* numbers, int length, int start, int end)
//{
//    if(numbers == nullptr)
//        return 0;
//
//    int count = 0;
//    for(int i = 0; i < length; i++)
//        if(numbers[i] >= start && numbers[i] <= end)
//            ++count;
//    return count;
//}
//
//// ====================���Դ���====================
//void test(const char* testName, int* numbers, int length, int* duplications, int dupLength)
//{
//    int result = getDuplication(numbers, length);
//    for(int i = 0; i < dupLength; ++i)
//    {
//        if(result == duplications[i])
//        {
//            std::cout << testName << " passed." << std::endl;
//            return;
//        }
//    }
//    std::cout << testName << " FAILED." << std::endl;
//}
//
//// ����ظ�������
//void test1()
//{
//    int numbers[] = { 2, 3, 5, 4, 3, 2, 6, 7 };
//    int duplications[] = { 2, 3 };
//    test("test1", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// һ���ظ�������
//void test2()
//{
//    int numbers[] = { 3, 2, 1, 4, 4, 5, 6, 7 };
//    int duplications[] = { 4 };
//    test("test2", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// �ظ�����������������С������
//void test3()
//{
//    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 1, 8 };
//    int duplications[] = { 1 };
//    test("test3", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// �ظ�����������������������
//void test4()
//{
//    int numbers[] = { 1, 7, 3, 4, 5, 6, 8, 2, 8 };
//    int duplications[] = { 8 };
//    test("test4", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// ������ֻ����������
//void test5()
//{
//    int numbers[] = { 1, 1 };
//    int duplications[] = { 1 };
//    test("test5", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// �ظ�������λ�����鵱��
//void test6()
//{
//    int numbers[] = { 3, 2, 1, 3, 4, 5, 6, 7 };
//    int duplications[] = { 3 };
//    test("test6", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// ����ظ�������
//void test7()
//{
//    int numbers[] = { 1, 2, 2, 6, 4, 5, 6 };
//    int duplications[] = { 2, 6 };
//    test("test7", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// һ�������ظ�����
//void test8()
//{
//    int numbers[] = { 1, 2, 2, 6, 4, 5, 2 };
//    int duplications[] = { 2 };
//    test("test8", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// û���ظ�������
//void test9()
//{
//    int numbers[] = { 1, 2, 6, 4, 5, 3 };
//    int duplications[] = { -1 };
//    test("test9", numbers, sizeof(numbers) / sizeof(int), duplications, sizeof(duplications) / sizeof(int));
//}
//
//// ��Ч������
//void test10()
//{
//    int* numbers = nullptr;
//    int duplications[] = { -1 };
//    test("test10", numbers, 0, duplications, sizeof(duplications) / sizeof(int));
//}
//
//void main()
//{
//    test1();
//    test2();
//    test3();
//    test4();
//    test5();
//    test6();
//    test7();
//    test8();
//    test9();
//    test10();
//}
//

#include<iostream>
using namespace std;

bool duplicate(int numbers[],int length,int *duplicate){
	if(number == nullptr || length<=0)
	{
		return false;
	}
	for(int i=0;i<length;++i){
		if(numbers[i]<0||numbers[i]>length-1)
		   return false;   
	}
	for(int i=0;i<length;++i){
		while(numbers[i]!=i)
		{
			if(numbers[i]==numbers[numbers[i]])
			{
				*duplication=numbers[i];
				return true;
			}
			int temp=numbers[i];
			numbers[i]=numbers[temp];
			numbers[temp]=temp;
		}
	} 
	return false;
}

int main(){
	
	
	
	return 0;
}
