#pragma once
#include <string>
#include "avm.h"

enum PrepareResult {
	prepare_success,
	prepare_unrecognized_statement,
	prepare_bad_syntax
};

class SqlCompiler {
public:
	PrepareResult prepare_statement(std::string& input_buffer, Statement* statement);
};

