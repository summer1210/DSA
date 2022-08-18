class Solution {
public:
    int candy(vector<int>& rat) {
     
        if(rat.size()==0)
            return 0;
        if(rat.size()==1)
            return 1;
        
        vector<int> forward(rat.size()),backward(rat.size());
        forward[0]=1;
        for(int i=1;i<rat.size();i++)
        {   
         if(rat[i]>rat[i-1]){
             forward[i]=forward[i-1]+1;
         }else{
             forward[i]=1;
         }  
        }
        
        
        backward[rat.size()-1]=1;
        for(int i=rat.size()-2;i>=0;i--){
            if(rat[i]>rat[i+1]){
             backward[i]=backward[i+1]+1;
         }else{
             backward[i]=1;
         } 
        }
        long result=0;
        
        for(int i=0;i<rat.size();i++){
           
            result+=max(forward[i],backward[i]);
        }
        return result;
    }
};