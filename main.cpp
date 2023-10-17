#include <iostream>
#include "ForwardList.h"
#include <algorithm>

int main() {
    ForwardList<int> list;
    list.PushBack(1);
    list.PushBack(2);
    list.PushBack(3);
    list.PushBack(4);
    auto first = list.begin();

    std::for_each(list.begin(), list.end(), [](int i){ std::cout<<i << std::endl; });

    std::for_each(list.begin(), list.end(), [](int& i){ i++; std::cout<<i; });

    auto found = std::find_if(list.begin(), list.end(), [] (int i){return i > 3; });
    auto it = list.begin();
    std::advance(it, 3);
    auto distance = std::distance(list.begin(), it);
    std::cout<<">>>>>"<<distance<<std::endl;
}