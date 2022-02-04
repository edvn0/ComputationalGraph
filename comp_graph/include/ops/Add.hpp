//
// Created by Edwin Carlsson on 2022-02-03.
//

#ifndef COMP_GRAPH_ADD_HPP
#define COMP_GRAPH_ADD_HPP

#include "Operation.hpp"

class Add : public Operation {
public:
	~Add() override = default;
	Add(NodePtr left, NodePtr right);
	NodePtr execute() override;
	Matrix differentiate() override;
};

#endif // COMP_GRAPH_ADD_HPP
