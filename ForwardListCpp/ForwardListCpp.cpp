#include <iostream>
#include "Headers\forward_list.hpp"

int main()
{
    using namespace my;

    Forward_list fwd_list;

    std::cout << "fwd_list.empty() : " << fwd_list.empty() << std::endl;

    fwd_list.push_front(1); // fwd_list.remove(1)
    fwd_list.push_front(1); // fwd_list.remove(1)
    fwd_list.push_front(1); // fwd_list.remove(1)

    fwd_list.push_front(2); // fwd_list.find(2) - 1
    fwd_list.push_front(2); // fwd_list.find(2) - 2
    fwd_list.push_front(2); // fwd_list.find(2) - 3

    fwd_list.push_front(3); // fwd_list.front()/2
    fwd_list.push_front(4); // fwd_list.front()/1, fwd_list.pop_front()

    std::cout << "fwd_list.empty() : " << fwd_list.empty() << std::endl;
    std::cout << "fwd_list.find(2) : " << fwd_list.find(2) << std::endl;

    fwd_list.remove(1);

    std::cout << "fwd_list.front() : " << fwd_list.front() << std::endl;
    fwd_list.pop_front();
    std::cout << "fwd_list.pop_front();" << std::endl;
    std::cout << "fwd_list.front() : " << fwd_list.front() << std::endl;

    fwd_list.clear();
    std::cout << "fwd_list.clear();" << std::endl;
    std::cout << "fwd_list.empty() : " << fwd_list.empty() << std::endl;
}
