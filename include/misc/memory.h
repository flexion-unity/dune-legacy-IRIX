#ifndef MEMORY_INCLUDED
#define MEMORY_INCLUDED

#if __cplusplus >= 201103L
#include <memory>
#else
#include <tr1/memory>

namespace std {
	using std::tr1::shared_ptr;

	using std::tr1::dynamic_pointer_cast;
}
#endif

#endif //MEMORY_INCLUDED
