#pragma once

// std
#include <vector>
#include <string>

namespace vae {
	class ProductionRule
	{
	public:
		ProductionRule(std::string unparsed, float prob);

		std::string getReplacementString();
		float getProbablity() { return probability; };
		bool matches(std::vector<char>& leftSyms);
		void printInfo();
	private:
		std::vector<char> left;
		std::vector<char> right;
		float probability;
	};
}

