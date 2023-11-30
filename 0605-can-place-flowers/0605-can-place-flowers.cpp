class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        if(n > size) return false;
        if(size==1) return ((n==1 && flowerbed[0]==0) || (n==0));
        
        int i = 0;
        while(i < size){
            
            if(flowerbed[i] == 0){
                if(i == 0){
                    if(flowerbed[i+1] == 0){
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else if(i == size - 1){
                    if(flowerbed[i - 1] == 0){
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else {
                    if(flowerbed[i+1] == 0 && flowerbed[i-1] == 0){
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                
            }
            i++;
        }
        
        return n<=0;
    }
};