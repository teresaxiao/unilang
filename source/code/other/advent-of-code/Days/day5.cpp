#include "day5.hpp"







 void Day5::Go(){
  auto input = Read_Each_Line_Of_File_Into_Vector("data/5.txt");
  using namespace std;
  
  std::string start = "wtnhxymk";
  
  unsigned int i = 0;
  
  std::string answer="______________";
  while(true){
    Try(start,i,answer);
    ++i;
  }
  cout << "md5 of 'grape': " << md5("grape") << endl;
  
}

 void Day5::Try(std::string s, unsigned int i, std::string & answer){
    s += std::to_string(i);
    std::string hash = md5(s);
    
    //if it starts with 5 0s
    bool yes=true;
    for (int i = 0; i < 5; ++i){
        if (hash[i] != '0'){
            yes = false;
            break;
        }
    }
    
    if (yes){
        auto position = hash[5];
        
        if (Is_A_Numeric_Character(position)){
            std::string temp;
            temp += position;
            auto pos_int = as_signed(temp);
            
            //replace
            answer[pos_int] = hash[6];
            std::cout << answer << std::endl;
        }
    }
}
