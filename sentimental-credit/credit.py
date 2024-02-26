from cs50 import get_string


def main():
    num = get_string("Number: ")
    if check_valid(num):
        print_brand(num)
    else:
        print("INVALID")


def check_valid(n):
    # length = len(n)
    if (length == 13 or length == 15 or length == 16) and check_sum(n):
        return True
    return False

def check_sum(n):
    sum = 0
    for i, c in enumerate(reversed(n)):
        if i % 2 == 0:
            sum += int(c)
        else:
            sum += int(c) * 2

    if sum % 10 == 0:
        return True
    return False

def print_brand(n):

