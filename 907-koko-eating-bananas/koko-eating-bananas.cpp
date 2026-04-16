class Solution {
public:
    bool canEatcoco(vector<int>& piles,int mid,int h){
        int primaryhour=0;
        for(int x:piles){
            primaryhour+=x/mid;
            if(x%mid!=0){
            primaryhour++;
        }
        }
        
        return primaryhour<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(canEatcoco(piles,mid,h)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};