all: if_elseif_else
# Add the select program to all to build it.
# my_menu, reverse, recursion  
# daily_sentence  
# show_distance, formatted_printing, variables_and_types

# compilation
compile=gcc -Wall -Wextra -Werror -o
compile_debug=gcc -g -Wall -Wextra - Werror -o

# program directories:
daily_dir=cd daily_sentence
learn_dir=cd learn_c_the_hard_way
mymenu_dir=cd my_menu_znak
recur_dir=cd recursion
rev_dir=cd reverse_input

# file_management:
cd_out=cd ..
rem=rm -f

if_elseif_else:
	@echo "Making c code based on the book: Learn C The Hard Way - if_elseif_else" 
	$(learn_dir) && $(compile) if_elseif_else if_elseif_else.c
	
variables_and_types:
	@echo "Making c code based on the book: Learn C The Hard Way - variables_and_types" 
	$(learn_dir) && $(compile) vars_a_ts vars_a_ts.c

formatted_printing:
	@echo "Making c code based on the book: Learn C The Hard Way - formatted_printing" 
	$(learn_dir) && $(compile) formatted_printing formatted_printing.c

show_distance:
	@echo "Making c code based on the book: Learn C The Hard Way - show_my_distance"
	$(learn_dir) && $(compile) showdist show_my_distance.c

my_menu:
	@echo "Making my menu for znak"
	$(mymenu_dir) && $(compile) menu menu.c 	

daily_sentence:
	@echo "Making daily_sentence"
	$(daily_dir) && $(compile) ds ds.c	

recursion:
	@echo "Making TU's recursion"
	$(recur_dir) && $(compile) recurs recurs.c

reverse:
	@echo "Making reverse_input"
	$(rev_dir) && $(compile) rev rev.c

clean:
	@echo "Cleaning up.."
	@echo "Removing program files.."
	$(learn_dir) && $(rem) if_elseif_else && $(cd_out)
	#$(learn_dir) && $(rem) vars_a_ts && $(cd_out)
	#$(learn_dir) && $(rem) formatted_printing && $(cd_out)
	#$(learn_dir) && $(rem) showdist && $(cd_out)
	#$(rev_dir) && $(rem) rev && $(cd_out)
	#$(mymenu_dir) && $(rem) menu && $(cd_out)
	#$(daily_dir) && $(rem) ds && $(cd_out)
	#$(recur_dir) && $(rem) recurs && $(cd_out)
	
	
	
	
	 