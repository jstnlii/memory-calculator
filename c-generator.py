# range at 400 bc my computer shits the bed compiling files larger than this
_range = 400 
op = input("please enter operation: (+ - * /)\n")
if op == "+":
	name = "add"
	def calc(i, j): return i + j
elif op == "-":
	name = "sub"
	def calc(i, j): return i - j
elif op == "*":
	name = "mult"
	def calc(i, j): return i * j
elif op == "/":
	name = "vid"
	def calc(i, j): return (i // j) if j != 0 else 0

with open("generated", "w") as file:
	file.write(f"#define {name.upper()}_H\n\n")
	file.write(f"int {name}(int a, int b) {{\n\t")

	for i in range(_range+1):
		for j in range(_range+1):
			line = ""
			line += f"if (a == {i} && b == {j}) {{\n"
			line += f"\t\treturn {calc(i, j)};\n"
			line += f"\t}} "
			file.write(line)
	
	file.write(f"\n\treturn 0;\n}}")


# {{ is how to escape a { in an f-string

