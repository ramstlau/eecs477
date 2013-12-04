#ifndef _PQ_H_
#define _PQ_H_

#include "input.h"
#include <queue>
#include <deque>
#include <vector>

using namespace std;

class PQElement {
  public:
    int creation_stamp;  // marks when this elt was made. These incr over time.
    int antenna;
    int delta;  // aka, change

  PQElement() {
    creation_stamp = -1;
    antenna = -1;
    delta = -1;
  }
  PQElement(const PQElement &src) {
    creation_stamp = src.creation_stamp;
    antenna = src.antenna;
    delta = src.delta;
  }
  PQElement(int _antenna, int _delta, int _creation_stamp) {
    antenna = _antenna;
    delta = _delta;
    creation_stamp = _creation_stamp;
  }
  bool is_valid( vector<int> validity_table ) {
    return validity_table[antenna] <= creation_stamp;
  }
};

#endif /* _PQ_H_ */
