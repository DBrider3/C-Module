#include <iostream>
#include <vector>
#include <time.h>

int	main(void)
{
	typedef std::vector<int>								  ints_t;
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );

	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	printf("%lu\n", amounts_size);
	std::cout << *dep_begin << std::endl;
	std::cout << *(dep_end - 1) << std::endl;
	std::cout << d_size << std::endl;

	time_t rawtime;
	char buf[18];

	time(&rawtime);
	strftime(buf, 18, "[%Y%m%d_%H%M%S]", localtime(&rawtime));
	std::cout << buf;
	std::cout << " index:0;amount:42;created" << std::endl;
	std::cout << buf;
	std::cout << " index:1;amount:54;created" << std::endl;


}
