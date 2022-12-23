#include <vector>
#include <algorithm>
#include <unordered_map>

int nonConstructibleChange(std::vector<int> coins)
{ 
  if( coins.size() == 0){
    return 1;
  }
  std::sort(coins.begin(), coins.end());
    // Create an unordered map to store the seen totals
  std::unordered_map<int, int> construct;

    // Initialize the running total to the first coin
  int total = coins[0];

    // Iterate through the coins
  for (auto coin : coins)
    {
        // Check if the running total has been seen before
        if (construct.count(total))
        {
            // Return the current total if it has been seen before
            return total;
        }

        // Add the current coin to the running total
        total += coin;

        // Add the current total to the map
        construct[total] = 1;
    }
  return -1;
}
