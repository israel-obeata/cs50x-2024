from cs50 import get_int

while True:
    h = get_int("Height: ")
    if h > 0:
        break

for i in range(h):
    blank = " " * (h - i)
    s = "#" * (i + 1)
    print(f"{blank}{s}  {s}")
