
思路：
已知条件：后序序列最后一个值为root；二叉搜索树左子树值都比root小，右子树值都比root大。
1、确定root；
2、遍历序列（除去root结点），找到第一个大于root的位置，则该位置左边为左子树，右边为右子树；
3、遍历右子树，若发现有小于root的值，则直接返回false；
4、分别判断左子树和右子树是否仍是二叉搜索树（即递归步骤1、2、3）。


class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
         if(!sequence.size()) return false;
         return judge(sequence,0,sequence.size()-1);
    }
private:
	bool judge(vector<int> a,int l,int r){
		if(l>=r) return true;
		int i=r;
        while(i > l && a[i - 1] > a[r]) --i;
        for(int j = i - 1; j >= l; --j) if(a[j] > a[r]) return false;
        return judge(a, l, i - 1) && (judge(a, i, r - 1));
	}
};


