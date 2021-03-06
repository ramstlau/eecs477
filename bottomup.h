#ifndef _BOTTOMUP_H_
#define _BOTTOMUP_H_

#include "input.h"
#include "pq.h"
#include <queue>
#include <deque>
#include <vector>

using namespace std;

void bottomup(
    HittingSetData &data, 
    vector<bool> &set_antenna, 
    int &num_covered_base_stations);
void bottomup_int(
    HittingSetData &data, 
    vector<int> &set_antenna, 
    int &num_covered_base_stations);

#endif /* _BOTTOMUP_H_ */
