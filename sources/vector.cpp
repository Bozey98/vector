#include "vector.hpp"
// MusatovIU8-22.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>



int main()
{
    return 0;
}

vector_t::vector_t() : size_{ 0 }, capacity_{ 0 }, ptr_{ nullptr } {
	
	
}

	vector_t::vector_t(unsigned int size) {
	
		ptr_ = new int[size];
		size_ = size;
		capacity_ = size;
		

	}

	vector_t::vector_t(const vector_t& other) {
		size_ = other.size_;
		capacity_ = other.capacity_;

		ptr_ = new int[capacity_];
		for (int i = 0; i < capacity_; i++) {
				ptr_[i] = other.ptr_[i];
			}
		
	}

	vector_t::~vector_t() {
		
		delete[] ptr_;
	}

	vector_t& vector_t::operator=(const vector_t& other) {

		capacity_ = other.capacity_;
		size_ = other.size_;
		ptr_ = new int[other.capacity_];

		for (int i = 0; i < other.capacity_; i++) {
			ptr_[i] = other.ptr_[i];
		}

	}

	auto vector_t::size() const noexcept -> unsigned int {
		return size_;
	}


	auto vector_t::capacity() const noexcept -> unsigned int {
		return capacity_;

	}

	auto vector_t::operator[](unsigned int index) const noexcept -> int {

		return ptr_[index];
	}

	auto vector_t::push_back(int value) -> void {
		vector_t vec;
		vec.ptr_ = new int[capacity_];

	}
