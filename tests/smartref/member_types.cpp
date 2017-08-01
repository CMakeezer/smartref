#include <smartref.h>

#include <type_traits>
#include <vector>
#include <list>


namespace tests {

using smartref::using_;

//! A basic check to test support for std::vector<int>::value_type
static_assert(
    std::is_same<
        using_<std::vector<int>>::value_type,
               std::vector<int> ::value_type
    >::value);

//! Check whether we are not hard-coding support for std::vector
static_assert(
    std::is_same<
        using_<std::list<int>>::value_type,
               std::list<int> ::value_type
    >::value);

//! Check whether we are not hard-coding support for std::vector<int>
static_assert(
    std::is_same<
        using_<std::list<float>>::value_type,
               std::list<float> ::value_type
    >::value);

} // namespace tests
