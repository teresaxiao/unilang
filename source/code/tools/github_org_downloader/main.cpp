#include <iostream>
#include "code/utilities/github/orgs_repo_getter.hpp"
#include "code/utilities/filesystem/paths/lib.hpp"
#include "code/utilities/program/call/lib.hpp"


int main(){
    
    std::string org = "line-processors";
    
    auto repos = Orgs_Repo_Getter::Get(org);
    
    Set_Path("/home/laptop/Desktop/line_processors");
    for (auto it: repos){
        std::string command = "git clone " + it["ssh_url"].get<std::string>();
        execute(command);
    }
}