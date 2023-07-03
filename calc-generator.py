buffer = ""
for i in range(100):
	for j in range(100):
		buffer += f"\nif (a == {i} && b == {j}) {"
		buffer += f"\n	return {i+j"
		buffer += f"\n}"
with open("calculator.c", "w") as file:
	file.write(buffer)
	
