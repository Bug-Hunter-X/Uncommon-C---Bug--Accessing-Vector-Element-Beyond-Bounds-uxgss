std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) { 
  std::cout << vec[i] << " ";
}

//This is wrong. The correct way is to check for empty vector before iterating