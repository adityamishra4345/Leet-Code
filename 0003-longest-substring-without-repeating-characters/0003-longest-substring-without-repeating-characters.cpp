class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int len=0;
        int arr[256]={0};
        arr[int(s[0])]++;
        if(n==0){
            return 0;
        }
        int c=0;
        while(l!=n && r!=n){
            if(arr[int(s[r])]>1){
                if(c>len){
                     len=c;
                     }
                c--;
                
                arr[int(s[l])]--;
                l++;
            }
            else{
                r++;
                arr[int(s[r])]++;
                c++;
            }

        }  
        if(c>len){
            len=c;
        }
        return len;    
    }
};