#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class Mutantstack : public std::stack<T>
{
	public:
	class iterator
	{
		public:
			iterator() : ptr(NULL) {}
			iterator(T* param) : ptr(param) {}
			~iterator() { ptr = NULL; }
			iterator(const iterator &copy) { *this = copy; }
			T& getPtr() const { return (ptr); }
			iterator& operator = (const iterator& i) { ptr = i.ptr; return (*this); }
			iterator& operator ++() { ++ptr; return *this; }
			iterator operator ++(int) { iterator temp(ptr); ++(ptr); return temp; }
			iterator& operator --() { --ptr; return *this; }
			iterator operator --(int) { iterator temp(ptr); --(ptr); return temp; }
			T* operator *() { return ptr; }
			T* operator *() { return ptr; }
		private:
			T *ptr;
	};
	Mutantstack() {}
	~Mutantstack() {}
	Mutantstack(Mutantstack &copy) { *this = copy; }
	Mutantstack &operator=(const Mutantstack &ms)
	{
		*this = ms;
		return (ms);
	}

	iterator begin()
	{
		iterator i( &(this->top()) - (this->size()) );
		//iterator i = new iterator(&(this->top()) - (this->size()));
		return i;
	}
	iterator end()
	{
		iterator i( &(this->top()) + 1 );
		//iterator i = new iterator(&(this->top()) + 1);
		return i;
	}
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const T& i)
{
	os << i.ptr;
    return os;
}

#endif
