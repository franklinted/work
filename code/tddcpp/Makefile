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
  include\
	
GTEST_WARNINGFLAGS = -Wall -Wswitch-default -Werror 
GTEST_CPPFLAGS += -Wall -pedantic -std=c++11
LD_LIBRARIES = -lpthread
	
include MakefileWorker.mk
