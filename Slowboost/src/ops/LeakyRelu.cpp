//
// Created by Edwin Carlsson on 2022-02-07.
//

#include "ops/LeakyRelu.hpp"

#include <utility>

LeakyRelu::LeakyRelu(SharedNodePtr value, double leak)
	: Operation(std::move(value), {}, "LeakyRelu")
	, leak_factor(leak)
{
}

SharedNodePtr LeakyRelu::execute() { return std::make_unique<Variable>(left->get_output().unaryExpr(leaky_relu)); }

std::array<Matrix, 2> LeakyRelu::backprop(const Matrix& wrt) { return {}; }
