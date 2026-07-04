class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a;
        int m = matrix.size();    
        int n = matrix[0].size();
        int i=0;
        int j=0;
        int i_init=0;
        int j_init=0;
        int i_end=m;
        int j_end=n;
        int c=0;
        int d=0;
        
        while(1){
            c=0;
            
            while(j<j_end){
                a.push_back(matrix[i][j]);
                d++;
                j++;
                c++;
            }
            if(d>=m*n){
                break;
            }
            j--;
            j_end--;
            i++;
            while(i<i_end){
                a.push_back(matrix[i][j]);
                 d++;
                i++;
                c++;
            }
            if(d>=m*n){
                break;
            }
            i--;
            i_end--;
            j--;
            while(j>=j_init){
                a.push_back(matrix[i][j]);
                 d++;
                j--;
                c++;
            }
            if(d>=m*n){
                break;
            }
            j++;
            j_init++;
            i--;
            while(i>i_init){
                a.push_back(matrix[i][j]);
                 d++;
                i--;
                c++;
            }
            i++;
            i_init++;
            j++;
            if(d>=m*n){
                break;
            }
            
            // if(c==0){
            //     break;
            // }
            



        }
        return a;
        
    }
};