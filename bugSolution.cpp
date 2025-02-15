std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

if (!vec.empty()) {
  for (int i = 0; i < vec.size(); ++i) { 
    std::cout << vec[i] << " ";
  }
} else {
  std::cout << "Vector is empty" << std::endl;
}
//This is the correct way. First checks if vector is empty before accessing elements.