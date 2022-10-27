make:
	@clear
	@echo "Compiling..."
	@time g++ -Wall *.cpp -o bank.out
	@./bank.out