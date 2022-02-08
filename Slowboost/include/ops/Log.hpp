//
// Created by Edwin Carlsson on 2022-02-04.
//

#ifndef COMP_GRAPH_LOG_HPP
#define COMP_GRAPH_LOG_HPP

#include "Operation.hpp"

class Log : public Operation {
public:
	~Log() override = default;
	explicit Log(SharedNodePtr value);
	SharedNodePtr execute() override;
	Matrix differentiate() override;
};

#endif // COMP_GRAPH_LOG_HPP
