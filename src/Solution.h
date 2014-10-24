/*
 * Solution.h
 *
 *  Created on: Oct 1, 2014
 *      Author: zerokol.com
 */

#include <vector>
using namespace std;

#ifndef SOLUTION_H_
#define SOLUTION_H_

class Solution {
public:
	int numberOfObjectives;
	int rank;
	vector<float> objectives;
	float distance;

	Solution(int numberOfObjectives);
	virtual ~Solution();
	virtual void evaluateSolution();
	virtual void crossover(Solution other);
	virtual void mutate();
	bool rightShift(Solution other);
	bool leftShift(Solution other);

private:
	vector<int> attributes;
};

#endif /* SOLUTION_H_ */
