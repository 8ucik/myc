all: my_menu reverse daily_sentence

compile=gcc -Wall -Wextra -Werror -o
compile_debug=gcc -g -Wall -Wextra -Werror -o

reverse:
	@echo "Making reverse_input"
	cd reverse_input && $(compile) rev rev.c

my_menu:
	@echo "Making my menu for znak"
	cd my_menu_znak && $(compile) menu menu.c 	
daily_sentence:
	@echo "Making daily_sentence"
	cd daily_sentence && $(compile) ds ds.c	