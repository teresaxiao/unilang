#include "Sub/Custom_Base/task_executer.hpp"








 void Task_Executer::Execute_Needed_Tasks(Composed_Program_Options const& input) {

	std::ofstream outfile("Makefile");

	outfile << "#COMPILER FLAGS\n";
	outfile << "BOOST_LIBS = -lboost_program_options -lboost_filesystem -lboost_system -lboost_iostreams -lboost_serialization\n";
	outfile << "GMP_LIBS = -lgmpxx -lgmp\n";
	outfile << "NCURSES_LIBS = -lncurses -lmenu -lpanel -lform -lncurses++\n";
	outfile << "OTHER_LIBS = \n";
	outfile << "OPTIMIZE = -Ofast\n";
	outfile << "LIBS = $(BOOST_LIBS) $(GMP_LIBS) $(NCURSES_LIBS) $(OTHER_LIBS)\n";
	outfile << "#WARNS = -Wall -pedantic -Wextra\n";
	outfile << "\n";
	
	outfile << "#COMPILER STATEMENT\n";
	outfile << "CXX = g++-6\n";
	outfile << "CPPFLAGS = -std=c++1z $(OPTIMIZE) -MD -MP $(WARNS)\n";
	outfile << "\n";
	
	outfile << "#MAIN PROGRAM\n";
	outfile << "PROG_NAME = main\n";
	outfile << "\n";
	
	outfile << "#For debugging purposes.\n";
	outfile << "#This rule will allow querying 'make' for variable contents:\n";
	outfile << "#http://stackoverflow.com/a/25817631/908939\n";
	outfile << "print-%  : ; @echo $* = $($*)\n";
	outfile << "\n";
	
	outfile << "SRC = $(wildcard *.cpp)\n";
	outfile << "CLASS = $(wildcard *.hcp)\n";
	outfile << "all: $(PROG_NAME)\n";
	outfile << "\n";
	
	outfile << "#stops make from deleting my cpps\n";
	outfile << ".SECONDARY:\n";
	outfile << "\n";
	
	outfile << "%.cpp %.hpp: %.hcp\n";
	outfile << "\t@echo \"\e[0;36m$^\e[0m\";\n";
	outfile << "\t@hcp-compiler $^;\n";
	outfile << "\n";
	
	outfile << "main: $(SRC:%.cpp=%.o) $(CLASS:%.hcp=%.o)\n";
	outfile << "\t@$(CXX) $(CPPFLAGS) -o $@ $^ -Wl,--as-needed -Wl,--start-group $(LIBS)\n";
	outfile << "\t@echo \"\e[0;35msuccessful link\e[0m\"\n";

	if (input.move){
		if (!input.program_name.empty()){
			outfile << "\t@cp main ~/.bin/" << input.program_name <<";\n"; 
		}else{
			outfile << "\t@cp main ../../main.symsource;\n"; 
		}
	}

	outfile << "clean:\n";
	outfile << "\t@rm -rf *~ *.o *.d *.~ $(PROG_NAME) `ls-cpp --only-generated --also-sympulls`;\n";
	outfile << "\t@echo \"cleaned\";\n";
	outfile << "\n";
	
	outfile << "-include $(SRC:%.cpp=%.d)\n";
	outfile << "\n";
	
	outfile << "%.o: %.cpp %.hpp\n";
	outfile << "\t@echo \"\e[0;34m$<\e[0m\";\n";
	outfile << "\t@$(CXX) $(CPPFLAGS) -c $< -o $@\n";
	outfile << "\n";
	
	outfile << "#for building main.cpp\n";
	outfile << "%.o: %.cpp\n";
	outfile << "\t@echo \"\e[0;34m$<\e[0m\";\n";
	outfile << "\t@$(CXX) $(CPPFLAGS) -c $< -o $@\n";

	return;
}