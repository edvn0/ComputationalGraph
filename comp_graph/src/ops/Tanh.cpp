//
// Created by Edwin Carlsson on 2022-02-03.
//

#include "ops/Tanh.hpp"

Tanh::Tanh(NodePtr value)
	: Operation(std::move(value), {}, "Tanh"){};

NodePtr Tanh::execute()
{
	auto matrix = left->get_output();

	return std::make_unique<Variable>(matrix.unaryExpr(_tanh));
}

Matrix Tanh::differentiate() { return left->get_output().unaryExpr(tanh_diff); }
