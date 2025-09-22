#include <iostream>
#include <vector>
#include <string>

std::string user_logic(const std::string& word) {
    std::string s = word;   //word get stored in s
    size_t pos = s.find("nancy");//find nancy word

    if(pos==std::string::npos){ //if not return -1
        return "-1";
    }

    while((pos = s.find("nancy")) != std::string::npos ){ //loop will continue until nancy is found
        s.replace(pos, 5, "sanvi");
    }
    return s;
}

int main() {
    int T;
    std::cin >> T;
    
    std::vector<std::string> testCases(T);
    for (int i = 0; i < T; ++i) {
        std::cin >> testCases[i];
    }
    
    for (const auto& word : testCases) {
        std::string result = user_logic(word);
        std::cout << result << std::endl;
    }
    
    return 0;
}