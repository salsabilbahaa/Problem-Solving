class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int planted = 0, lastOne = -1, firstOne = -1;
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 1){
                if (firstOne == -1){
                    firstOne = i;
                    planted += firstOne/2;
                }
                else{
                    planted += (i - lastOne - 2) / 2;
                }
                lastOne = i;
            }
        }
        if (lastOne == -1){
            planted += (flowerbed.size() - lastOne) / 2;
        }
        else {
            planted += (flowerbed.size() - lastOne - 1) / 2;
        }
        return planted >= n;
    }
};