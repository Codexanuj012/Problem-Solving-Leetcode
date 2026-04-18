class Solution {
public:
    int canbloomDay(vector<int>& bloomDay,int m,int k,int mid){
        int bouguetCount=0;
        int AdjacentCount=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                AdjacentCount++;
            }
            else{
                AdjacentCount=0;

            }
            if(AdjacentCount==k){
                bouguetCount++;
                AdjacentCount=0;
            }
        }
        return bouguetCount;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low=0;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int day=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canbloomDay(bloomDay,m,k,mid)>=m){
                day=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return day;
        
        
    }
    
};