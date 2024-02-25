from cs50 import get_int

while True:
    try:
        h = get_int("Height: ")
        if h > 0 or h < 9:
            break
    except:


for i in range(h):
    blank = " " * (h -1 - i)
    s = "#" * (i + 1)
    print(f"{blank}{s}  {s}")
