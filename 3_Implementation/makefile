
PROJ_NAME = proj

Build= build

SRC=src/add_prop.c\
src/display_prop.c\
src/display_type_prop.c\
src/modify_prop.c\
src/remove_prop.c

INC= inc

ifdef OS
	RM=del
	FixPath=$(subst /,\,$1)
	EXEC=exe

else
	ifeq($(shell uname),Linux)
		RM=rm -rf
		FixPath=$1
		EXEC=out
	//endif

endif			


all:
	gcc -I $(INC) $(SRC) main.c -o $(call FixPath, $(PROJ_NAME).$(EXEC))


run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))	

