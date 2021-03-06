#include <random.h>

std::string random_string(const int len) {
    const std::string alpha_numeric("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890");
//    
    std::default_random_engine generator{ std::random_device{}() };  
    const std::uniform_int_distribution< std::string::size_type > distribution{ 0, alpha_numeric.size() - 1 };
//    
    std::string str(len, 0);
    for (auto& it : str) {
        it = alpha_numeric[distribution(generator)];
    }
    return str;
}

- Main - !!

SetConsoleTitle(random_string(20).c_str());

// You no need this shit in your code

#####################################################################################################################
