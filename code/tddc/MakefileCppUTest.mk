#This makefile makes all the main book code with CppUTest test harness

#Set this to @ to keep the makefile quiet
SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = tddc

#--- Inputs ----#
CPP_PLATFORM = Gcc
PROJECT_HOME_DIR = .
SRC_DIRS = \
	src\
	src/Cpp\
	#src/SwordForOffer\
	#src/Acm\

TEST_SRC_DIRS = \
	tests\
	tests/Cpp\
	#tests/SwordForOffer\
	#tests/Acm\
	
INCLUDE_DIRS =\
  .\
  $(CPPUTEST_HOME)/include\
  include/IO\
  mocks\
  include/util\
  include/Acm\
  include/SwordForOffer\
  include/Cpp\
  include/LedDriver\
  include/MyOS\
  include/dvr\
  include/zune\

	
CPPUTEST_WARNINGFLAGS = -Wall -Wswitch-default -Werror 
#CPPUTEST_CFLAGS = -std=c89 
CPPUTEST_CFLAGS += -Wall -Wstrict-prototypes -pedantic
LD_LIBRARIES = -lpthread
	
  
ifeq ($(CPPUTEST_HOME),)
$(info CPPUTEST_HOME not set! See README.txt)
else  
include $(CPPUTEST_HOME)/build/MakefileWorker.mk
endif
