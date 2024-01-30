#ifndef MY_FORWARD_LIST_INL
#define MY_FORWARD_LIST_INL
 
#include "forward_list.hpp"
 
namespace my
{
 
inline Forward_list::Forward_list()
: head( nullptr )
{
}
 
inline Data_t& Forward_list::front() noexcept
{
    return head->data ;
}
 
inline const Data_t& Forward_list::front() const noexcept
{
    return head->data ;
}
 
inline bool Forward_list::empty() const noexcept
{
    return head == nullptr ;
}
 
inline void Forward_list::push_front( const Data_t& data )
{
    head = new Node( data, head ) ;
}
 
inline Forward_list::~Forward_list()
{
    clear() ;
}
 
 
/* ---- Forward_list::Node's space ---- */
inline Forward_list::Node::Node( const Data_t& data_, Node* next_ )
: data( data_ ), next( next_ )
{
}
 
}
 
#endif /* MY_FORWARD_LIST_INL */
