#include "Sub/Custom_Base/task_executer.hpp"








 void Task_Executer::Execute_Needed_Tasks(Program_Input const& input) {

    //copies over static files
    Copy_Static_Dependency_Files_Over();
    
    Create_Link_Rule(input.options);
}

 void Task_Executer::Copy_Static_Dependency_Files_Over(){
    const std::string LIBRARY_DIRECTORY = "~/.github/generative-dependencies/generic-recursive-makefile-generator/project/src/generic-recursive-makefile-generator/";
    //execute_quietly(("cp -r " + LIBRARY_DIRECTORY + "* ." + LIBRARY_DIRECTORY + ".* .").c_str());
    execute_quietly(("cp " + LIBRARY_DIRECTORY + "* .").c_str());
    execute_quietly(("cp -r " + LIBRARY_DIRECTORY + ".mk/ .").c_str());
}



 void Task_Executer::Create_Link_Rule(Composed_Program_Options const& program_options) {
std::ofstream outfile(".mk/link-rule.mk");

std::string created_message = "created ";


outfile << "#-----------------#\n";
outfile << "#  Linking C/C++  |\n";
outfile << "#-----------------#\n";
outfile << "#THIS FILE IS GENERATED!\n";
outfile << "#I included -Wl,--as-needed -Wl,--start-group because I didn't want to link anything I wasn't actually using.  \n";
outfile << "#Later, when I upgraded compilers from g++-5 to g++-6 I got a missing /usr/bin/ld.gold: missing group end error.  \n";
outfile << "#Although, I also had to change the linker to the gold linker since I was using sanatizers.  \n";
outfile << "#Either way, I investigated the point of --start-group and --end-group.  \n";
outfile << "#http://stackoverflow.com/questions/5651869/gcc-what-are-the-start-group-and-end-group-command-line-options\n";
outfile << "#I can't say I've ever seen circular dependency issues mentioned in the thread,  \n";
outfile << "#but either way, I've added the --end-group tag to stop the gold linker from failing.\n";
outfile << "$(PROG_NAME): $(CPP_SOURCE_PATHS:%.cpp=%.o) $(C_SOURCE_PATHS:%.c=%.o) $(HCP_SOURCE_PATHS:%.hcp=%.o)\n";
outfile << "\t@$(CPP_COMPILER) $(LOOK_PATHS) $(LIB_PATHS) $(CPP_FLAGS) -o $@ $^ -Wl,--as-needed -Wl,--start-group $(LIBS) -Wl,--end-group\n";

    //decide how to move the binary that is created
    //we move them differently based on whether they are an actual executable, or a generative dependency
    if (program_options.move){
        if (!program_options.program_name.empty()){
            created_message += program_options.program_name;
            outfile << "\t@cp main ~/.bin/" << program_options.program_name <<";\n"; 
        }else{
            created_message += "symbolic pullin";
            outfile << "\t@cp main ../../main.symsource;\n"; 
        }
    }
    
    //print what was done
    outfile << "\t@echo \"[0;35msuccessful link[0m\"\n";
 }

