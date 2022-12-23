#include <vector>
#include <iostream> 
#include <map>


std::string tournamentWinner(std::vector<std::vector<std::string>> competitions,
                        std::vector<int> results) {
  // Write your code here.
  std::map<std::string, int> hashMap;

  for (auto result : results){
    if(result == 0) {
        hashMap[competitions.at(result).at(1)] += 3;
    }
    if(result == 1){
        hashMap[competitions.at(result).at(0)] += 3;
    }
  }
  std::string x;
  int highestScore = 0;
  for (const auto& [team, score] : hashMap){
    if(score > highestScore){
      highestScore = score;
      x = team;
    }
  }
  return x;
}
