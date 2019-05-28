#pragma once

#include <string>
#include <memory>

#include "Common.h"

struct I_register {
	virtual ~I_register() = 0;
};
I_register::~I_register() {}

struct addres_register : public I_register {
	addres_register(std::unique_ptr<I_node> ptr)
		: addres_(ptr.get())
	{

	}
	std::unique_ptr<I_node> addres_;
};
std::map<std::string, addres_register> add_regs_map;

struct gen_register : public I_register {
	gen_register(std::string name, int64_t value)
		: name_(name)
		, value_(value)
	{
	}
	std::string name_;
	int64_t value_;
};
std::map<std::string, gen_register> gen_regs_map;
