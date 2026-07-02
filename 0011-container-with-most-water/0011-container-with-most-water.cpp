class Solution {
public:
    int area(int i, int j,vector<int>& height){
       int area=(j-i)*min(height[j],height[i]);
       return area;
    }
    int min(int a,int b){
        if(a>b){
            return b;
        }
        else{
            return a;
        }
    }
    int maxArea(vector<int>& height) {
        int i=0;
        int n=height.size();
        int j=n-1;
        int a=0;
        int ar=0;
        while(j>i){
            ar=area(i,j,height);
            if(ar>a){
                a=ar;
            }
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return a;
    }
    };