from cs50 import get_int

while True:
    h = get_int("Height: ")
    if h > 0:
        break

for i in range(h):
    s = "#" * (i + 1)
    print(f"{" " * (h - i)}{s}  {s}")
