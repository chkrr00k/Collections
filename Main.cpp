#include "List.h"
#include "Map.h"
#include "Set.h"
#include <iostream>

bool compare(const int first, const int second) {
	return first > second;
}
/*
int main(void) {

	List<int> a = List<int>();
	a.push(1).push(9).push(3).push(2).push(4);
	List<int> e = a;
	std::cout << "Printing list: "<< a << std::endl << "Getting 3rd element: " << a.get(3) << std::endl;
	std::cout << "Poping last element: " << a.pop() << std::endl;
	std::cout << "Inserting element 20 in 0 position: " << a.insert(20, 0) << std::endl;
	std::cout << "Getting list's size: " << a.size() << std::endl;
	a.remove(0);
	std::cout << "Checking if list contains element just removed: " << a.contains(0) << std::endl;
	a.sort(compare);
	std::cout << "Checking if a is sorted and if it's different form copied list: "  << a << " and copied: " << e << std::endl;
	List<int> jj = a + e;
	std::cout << "summing lists: " << jj << std::endl;

	Map<int, int> b = Map<int, int>();
	b.insert(1, 10).insert(2, 20).insert(3, 30);
	Map<int, int> d = b;
	b.remove(2);
	std::cout << "Printing map: " << b << std::endl << "Printing copied map: " << d << std::endl << "Checking if b contains 4: "<< b.contains(4)
		<< std::endl << "Printing keyset: " << Set<int>(b.keySet()) << std::endl;
	
	Set<int> c = Set<int>();
	c.append(1).append(2).append(3).append(4);
	Set<int> f = c;
	f.remove(1);
	std::cout << "Printing set: " << c << std::endl << "Printing copied set: " << f << std::endl;
	return 0;

}*/