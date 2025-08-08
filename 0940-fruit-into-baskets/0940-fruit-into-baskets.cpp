class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int,int> basket;
        int i=0,ans = 0;
        
        for(int j=0; j<fruits.size(); ++j){
            basket[fruits[j]]++;
            while(basket.size() > 2){
                basket[fruits[i]]--;
                if(basket[fruits[i]] == 0){
                    basket.erase(fruits[i]);
                }
                i++;
            }
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};