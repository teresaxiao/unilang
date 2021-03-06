#include "day2_2017.hpp"








 bool Day2_2017::Evenly_Divisible(int start, int off){

    if (off > start){
        std::swap(off,start);
    }
    
    while (true){
        start -= off;
        
        if (start == 0){
            return true;
        }
        
        if (start < 0){
            return false;
        }
    }
}


 int Day2_2017::Row_Answer(std::vector<int> row){
    for (int i = 0; i < row.size(); ++i){
        for (int j = 0; j < row.size(); ++j){
            if (i != j){
                
                auto num1 = row[i];
                auto num2 = row[j];
                
                if (Evenly_Divisible(num1,num2)){
                    
                    if (num2 > num1){
                        std::swap(num2,num1);
                    }
                    auto answer = num1/num2;
                    return answer;
                    
                }
            }
        }
    }
    
    std::cout << "NOT FOUND" << std::endl;
    return 0;
}

 void Day2_2017::Go(){


    //get the input
    auto input = Read_Each_Line_Of_File_Into_Vector("data/2_2017.txt");
    std::vector<std::vector<std::string>> strs;
    for (auto it: input){
        auto input2 = Split_Into_Parts_From_Delimiter(it,'\t');
        strs.push_back(input2);
    }
    
    std::vector<std::vector<int>> numbers;
    std::vector<int> nums;
    for (auto it: strs){
        
        for (auto n: it){
            nums.push_back(as_signed(n));
        }
        
        if (!nums.empty()){
            numbers.push_back(nums);
            nums.clear();
        }
    }
    for (auto it: numbers){
        std::cout << it << '\n';
    }
    
    int total = 0;
    
    for (auto row: numbers){
        total += Row_Answer(row);
    }
    
    std::cout << total << std::endl;
    
    
}