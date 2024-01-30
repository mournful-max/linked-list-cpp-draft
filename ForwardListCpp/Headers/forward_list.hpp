#ifndef MY_FORWARD_LIST_HPP
#define MY_FORWARD_LIST_HPP
 
#include <cstddef>
 
namespace my
{
 
using Data_t = int ;
 
 
class Forward_list
{
    struct Node ;
 
    Forward_list( const Forward_list& )            = delete ;
    Forward_list& operator=( const Forward_list& ) = delete ;
 
public:
    Forward_list() ;
          Data_t& front()       noexcept ;         // Check last added element to the list (allow to modify its value)
    const Data_t& front() const noexcept ;         // Check last added element to the list
    bool empty() const noexcept ;                  // Check if list is empty
    void clear() ;                                 // Clears the list
    void push_front( const Data_t& data ) ;        // Add new element in front of the list
    void pop_front() ;                             // Pops last added element from the list
    void remove( const Data_t& data ) ;            // Delete all occurrences of @data
    std::size_t find( const Data_t& data ) const ; // Count of @data occurrences
    ~Forward_list() ;
 
private:
    Node* head ;
};
 
struct Forward_list::Node
{
    Node( const Data_t& data_, Node* next_ = nullptr ) ;
 
    Data_t data ;
    Node*  next ;
};
 
}
 
#include "forward_list.inl"
 
#endif /* MY_FORWARD_LIST_HPP */
