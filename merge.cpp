#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::vector<std::string>names(names1);
    names.insert(names.begin(),names2.begin(),names2.end());
    std::sort(names.begin(),names.end());
    names.erase(std::unique(names.begin(),names.end()),names.end());
    return names;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif
