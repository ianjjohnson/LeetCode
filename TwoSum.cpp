vector<int> twoSum(vector<int>& nums, int target) {

  vector<int> ret;
  unordered_map<int, int> hash;

  for(int i = 0; i < nums.size(); i++){

      int diff = target - nums[i];

      if(hash.find(diff) == hash.end()){
          hash[nums[i]] = i;
      } else {
          ret.push_back(hash[diff]);
          ret.push_back(i);
          break;
      }
  }

  return ret;

}
