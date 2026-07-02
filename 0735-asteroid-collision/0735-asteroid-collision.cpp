class Solution {
public:
    int mod(int a){
        if(a<0){
            return -a;
        }
        else{
            return a;
        }
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> a;
        int n=asteroids.size();
        a.push_back(asteroids[0]);
        for(int i=1;i<n;i++){
            if(!a.empty()&&a.back()*asteroids[i]<0){
                if(asteroids[i]>0){
                    a.push_back(asteroids[i]);
                }
                else if(mod(a.back())>mod(asteroids[i])){
                    continue;
                }
                else if(mod(a.back())<mod(asteroids[i])){
                    while(!a.empty()&&mod(a.back())<mod(asteroids[i])){
                        if(a.back()*asteroids[i]>0){
                            break;
                        }
                        a.pop_back(); 
                    }
                    if(a.empty()){
                        a.push_back(asteroids[i]);
                    }
                    else if(!a.empty()&&a.back()*asteroids[i]>0){
                        a.push_back(asteroids[i]);
                    }
                    else if(!a.empty()&&mod(a.back())==mod(asteroids[i])){
                        a.pop_back();
                    }
                    else if(!a.empty()&&a.back()>asteroids[i]){
                        continue;
                    }
                    

                   
                }
                else if(mod(a.back())==mod(asteroids[i])){
                    a.pop_back();
                }
            }
            else{
                a.push_back(asteroids[i]);
            }
        }
        return a;
        
    }
};