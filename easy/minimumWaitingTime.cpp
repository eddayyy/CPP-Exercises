#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

int minimumWaitingTime(std::vector<int> queries) {
  std::sort(queries.begin(), queries.end());
  return std::inner_product(queries.begin(), queries.end(), queries.size() - 1, 0);
}
