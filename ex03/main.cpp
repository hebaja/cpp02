#include "Point.h"
#include <iostream>

void	example_a(void)
{
	//Triangle
	Point	const p1(8, 2);
	Point	const p2(4, 10);
	Point	const p3(13, 12);
	//Points
	Point	const a(8, 7);
	Point	const b(5, 5);
	Point	const c(3, 1);
	Point	const d(15, 6);
	Point	const e(17, 14);
	Point	const f(6, 1);
	Point	const g(1, 13);
	Point	const h(11, 8);
	Point	const i(11, 11);

	bool	ra = bsp(p1, p2, p3, a);
	bool	rb = bsp(p1, p2, p3, b);
	bool	rc = bsp(p1, p2, p3, c);
	bool	rd = bsp(p1, p2, p3, d);
	bool	re = bsp(p1, p2, p3, e);
	bool	rf = bsp(p1, p2, p3, f);
	bool	rg = bsp(p1, p2, p3, g);
	bool	rh = bsp(p1, p2, p3, h);
	bool	ri = bsp(p1, p2, p3, i);

	std::cout << "a -> " << ra << std::endl;
	std::cout << "b -> " << rb << std::endl;
	std::cout << "c -> " << rc << std::endl;
	std::cout << "d -> " << rd << std::endl;
	std::cout << "e -> " << re << std::endl;
	std::cout << "f -> " << rf << std::endl;
	std::cout << "g -> " << rg << std::endl;
	std::cout << "h -> " << rh << std::endl;
	std::cout << "i -> "<< ri << std::endl;
}

void	example_b(void)
{
	//Triangle
	Point	const p1(0, 9);
	Point	const p2(6, 0);
	Point	const p3(15, 9);
	//Points
	Point	const a(6, 5);
	Point	const b(-3, 5);
	Point	const c(2, 4);
	Point	const d(3, -1);
	Point	const e(8, 2);
	Point	const f(14, 6);
	Point	const g(12, 8);
	Point	const h(4, 10);

	bool	ra = bsp(p1, p2, p3, a);
	bool	rb = bsp(p1, p2, p3, b);
	bool	rc = bsp(p1, p2, p3, c);
	bool	rd = bsp(p1, p2, p3, d);
	bool	re = bsp(p1, p2, p3, e);
	bool	rf = bsp(p1, p2, p3, f);
	bool	rg = bsp(p1, p2, p3, g);
	bool	rh = bsp(p1, p2, p3, h);

	std::cout << "a -> " << ra << std::endl;
	std::cout << "b -> " << rb << std::endl;
	std::cout << "c -> " << rc << std::endl;
	std::cout << "d -> " << rd << std::endl;
	std::cout << "e -> " << re << std::endl;
	std::cout << "f -> " << rf << std::endl;
	std::cout << "g -> " << rg << std::endl;
	std::cout << "h -> " << rh << std::endl;
}

void	example_c(void)
{
	//Triangle
	Point	const p1(-0.1f, -0.2f);
	Point	const p2(-0.2f, 0.3f);
	Point	const p3(0.3f, 0.2f);
	//Points
	Point	const a(-0.2f, -0.1f);
	Point	const b(0.3f, -0.1f);
	Point	const c(0.0f, 0.1f);
	bool	ra = bsp(p1, p2, p3, a);
	bool	rb = bsp(p1, p2, p3, b);
	bool	rc = bsp(p1, p2, p3, c);
	std::cout << "a -> " << ra << std::endl;
	std::cout << "b -> " << rb << std::endl;
	std::cout << "c -> " << rc << std::endl;
}

int	main(void)
{
	example_a();
	std::cout << std::endl;
	example_b();
	std::cout << std::endl;
	example_c();
	return (0);
}
