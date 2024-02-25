from cs50 import get_int

while True:
    try:
        h = get_int("Height: ")
        if h > 0:
            break
    except ValueError:
        pass

def main(h):
    for i in range(h)
