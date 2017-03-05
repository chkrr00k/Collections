#pragma once
#include <set>

template<class T> class Set{
private:
	std::set<T> storage;
public:
	Set<T>();
	Set<T>(std::set<T> input);
	// inner access functions;
	std::set<T>& getInnerSet();
	// inserting functions;
	Set<T>& append(T el);
	// getting functions;
	std::set<T> getAll();
	// deleting functions;
	void remove(T el);
	// information functions;
	int size();
	bool contains(T el);
	// others;
	Set<T> operator=(Set<T> input);
	~Set<T>();
};

template<class T>
Set<T>::Set(std::set<T> input)
	:storage(input){
}

template<class T>
Set<T>::Set()
	: storage() {
}

template<class T>
std::set<T>& Set<T>::getInnerSet() {
	return this->storage;
}

template<class T>
Set<T>& Set<T>::append(T el) {
	this->storage.insert(el);
	return *(this);
}

template<class T>
std::set<T> Set<T>::getAll() {
	return this->storage;
}

template<class T>
void Set<T>::remove(T el) {
	this->storage.erase(el);
}

template<class T>
int Set<T>::size() {
	return this->storage.size();
}

template<class T>
bool Set<T>::contains(T el) {
	for (T current : this->storage) {
		if (current == el) {
			return true;
		}
	}
	return false;
}

template<class T>
Set<T> Set<T>::operator=(Set<T> input) {
	std::set<T> copied = input.getInnerSet();
	return Set<T>(copied);
}

template<class T>
Set<T>::~Set() {
}

//operators;

template<class T>
std::ostream& operator<<(std::ostream& os, Set<T>& dt) {
	os << "[";
	for (T el : dt.getAll()) {
		os << el << ", ";
	}
	os << "\b\b]"; // this is beautiful;
	return os;
}

