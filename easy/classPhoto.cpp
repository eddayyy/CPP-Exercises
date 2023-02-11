// Author: Eduardo Nunez
// Author email: eduaardonunez@csu.fullerton.edu

#include <vector>
#include <algorithm>
bool classPhotos(std::vector<int> redShirtHeights, std::vector<int> blueShirtHeights) {
  // Write your code here.
  bool possible;
  int redCount = 0, blueCount = 0, size = redShirtHeights.size();
  
  std::sort(redShirtHeights.begin(), redShirtHeights.end());
  std::sort(blueShirtHeights.begin(), blueShirtHeights.end());

  for(int i = 0; i < size; i++){
    if(redShirtHeights.at(i) > blueShirtHeights.at(i)){ redCount++; }
    else if(blueShirtHeights.at(i) > redShirtHeights.at(i)){ blueCount++; }
  }

  return redCount == size || blueCount == size;
}
/*
Conditions for true:
1. All students in one array must be taller than all the students in the opposite array  

How do we check if this is the case?
1. Create a for loop to iterate through either array
2. Use i to index an array
3. Compare values to see if the array is greater 
4. Update the integer variable 
5. Repeaat for the opposite array
*/