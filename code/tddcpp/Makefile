#This makefile makes all the main book code with CppUTest test harness

#Set this to @ to keep the makefile quiet
#SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = tddcpp

#--- Inputs ----#
CPP_PLATFORM = Gcc
PROJECT_HOME_DIR = .
SRC_DIRS = \
	src\
	src/Cpp\

TEST_SRC_DIRS = \
	tests\
	tests/Cpp\
	
INCLUDE_DIRS =\
  .\
  $(CPPUTEST_HOME)/include\
  include/Cpp\
	
CPPUTEST_WARNINGFLAGS = -Wall -Wswitch-default -Werror 
CPPUTEST_CFLAGS += -Wall -Wstrict-prototypes -pedantic
LD_LIBRARIES = -lpthread
	
include MakefileWorker.mk
