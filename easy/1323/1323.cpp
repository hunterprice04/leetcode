#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string n = to_string(num);
        int len = n.size();
        int max=num, i;
        
        for(i = 0; i < len; i++){
            if(n[i] == '6'){
                n[i] = '9';
                if(max < stoi(n)) max = stoi(n);
                break;
            }
            
        }
        
        return max;
    }
};

int main(){
    std::vector<int> test_cases = {9669, 9996, 9999};
    int size=test_cases.size(), i, curr;

    Solution s;

    for(i = 0; i < size; i++){
        curr = test_cases[i];
        printf("test case - %d :: answer - %d\n",curr,s.maximum69Number(curr));
    }

    return 0;
}