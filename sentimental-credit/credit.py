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
    sum_1 = 0
    sum_2
    for i in range(len(n) - 1, -1):
        if i
        sum_1 += n[i] * 2
        sum

def print_brand(n):

