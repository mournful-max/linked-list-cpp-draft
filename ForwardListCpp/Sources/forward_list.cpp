#include "..\Headers\forward_list.hpp"
 
namespace my
{
 
void Forward_list::clear()
{
    while ( !empty() )
    {
        pop_front() ;
    }
}
 
void Forward_list::pop_front()
{
    auto dead_head = head ;
    head = head->next ;
    delete dead_head ;
}
 
void Forward_list::remove( const Data_t& data )
{
    decltype ( head ) current_node = head,
                      prev_node    = nullptr ;
 
    while ( current_node )
    {
        if ( current_node->data == data )
        {
            if ( current_node == head )
                head = head->next ;
 
            if ( prev_node )
                prev_node->next = current_node->next ;
 
            auto dead_sought = current_node ;
            current_node = current_node->next ;
 
            delete dead_sought ;
        }
        else
        {
            prev_node = current_node ;
            current_node = current_node->next ;
        }
    }
}
 
std::size_t Forward_list::find( const Data_t& data ) const
{
    std::size_t count  = 0 ;
    auto        sought = head ;
 
    while ( sought )
    {
        if ( sought->data == data )
            count += 1 ;
 
        sought = sought->next ;
    }
 
    return count ;
}
 
}
