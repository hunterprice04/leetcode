#include <string>
#include <vector>

class Solution {
public:
    int subtractProductAndSum(int n) {
        int len = std::to_string(n).size();
        int sum=0 , product=1, i, curr;
        
        for(i = 0; i < len; i++){
            curr = n % 10;            
            sum = sum + curr;
            product = product * curr;
            n = n / 10;
        }
        return product - sum;
    }
};

int main(){
    std::vector<int> test_cases = {234, 4421};
    int size=test_cases.size(), i, curr;

    Solution s;

    for(i = 0; i < size; i++){
        curr = test_cases[i];
        printf("test case - %d :: answer - %d\n",curr,s.subtractProductAndSum(curr));
    }

    return 0;
}