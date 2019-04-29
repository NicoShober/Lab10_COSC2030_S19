def collegeCost():
	g = str(input("What is your degree: "))
	try:
		i = int(input("What is your age: "))
		b = int(input("How many semesters did you attend college: "))
	except ValueError:
		print ("Input is not a number.")
		return
	try:
		j = (b/2)*int(input("How much did it cost per year to go to college: "))
	except ValueError:
		print("Cost needs to be a number:")
		return
	except ZeroDivisionError:
		print("Cost cant be zero.")
		return
	print("It cost %.2f dollars to get your degree." % j)