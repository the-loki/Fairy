//
// Created by loki on 24-4-21.
//

#pragma once

#include <string>
#include <memory>
#include <vector>
#include <runtime/runtime.h>
#include <runtime/core/type_traits.h>

namespace leyla::runtime::render {

class Pass : public core::NonCopyable {
public:
	explicit Pass(std::string name);
	~Pass() = default;

protected:
	void register_sink(std::unique_ptr<Sink> sink);
	void register_source(std::unique_ptr<Source> source);
private:
	std::string name_;
	std::vector<std::unique_ptr<Sink>> sinks_;
	std::vector<std::unique_ptr<Source>> sources_;
};

}
