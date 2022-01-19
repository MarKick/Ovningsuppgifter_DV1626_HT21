#include <iostream> // 
#include <algorithm> // std::reverse
#include <vector> // std::vector

std::vector<int> reverse(const std::vector<int>& vec) {
    std::vector<int> reversed;
    
    // Kan även göras med
    // std::reverse(vec.begin(),vec.end());a
    // return vec
    for(int i = vec.size()-1; i >= 0; --i) {
        reversed.push_back(vec[i]);
    }

    return reversed;
}

int main() {
    std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12};

    std::vector<int> reversed = reverse(vec);

    for(int i = 0; i < reversed.size(); ++i) {
        std::cout << reversed[i] << std::endl;
    }
}
