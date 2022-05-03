test:
	@make -C .. re
	@cp test_printf.h tests.h
	@gcc -w tests.c main.c
	@./a.out > printf
	@rm a.out tests.h
	@cp test_ft_printf.h tests.h
	@gcc -w tests.c main.c ../libftprintf.a
	@./a.out > ft_printf
	@rm a.out tests.h
	diff printf ft_printf > diff.txt || true
	@rm printf ft_printf
	@make -C .. fclean

main:
	@make -C .. re
	@gcc -w old_main.c ../libftprintf.a
	@./a.out
	@rm a.out
	@make -C .. fclean