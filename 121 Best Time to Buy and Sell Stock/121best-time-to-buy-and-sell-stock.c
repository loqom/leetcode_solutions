int maxProfit(int* prices, int pricesSize) {
    int minprice=prices[0];
    int maxprofit=0;
    for(int i=1;i<pricesSize;i++){
        if(minprice>prices[i]){
            minprice=prices[i];
        }
        else if(maxprofit<prices[i]-minprice){
            maxprofit = prices[i] - minprice;
        }
    }
    return maxprofit;
}