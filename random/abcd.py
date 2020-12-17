import time
import math


def attempt_1(max):
    start_time = time.time()
    for a in range(1, max):
        for b in range(1, max):
            for c in range(1, max):
                for d in range(1, max):
                    if a ** 3 + b ** 3 == c ** 3 + d ** 3:
                        print("{} {} {} {}".format(a, b, c, d))
    print("--- %s ms ---" % ((time.time() - start_time) * 1000))


def attempt_2(max):
    start_time = time.time()
    for a in range(1, max):
        for b in range(1, max):
            for c in range(1, max):
                for d in range(1, max):
                    if a ** 3 + b ** 3 == c ** 3 + d ** 3:
                        print("{} {} {} {}".format(a, b, c, d))
                        break
    print("--- %s ms ---" % ((time.time() - start_time) * 1000))


def attempt_3(max):
    start_time = time.time()
    for a in range(1, max):
        for b in range(1, max):
            for c in range(1, max):
                d = (math.pow(a, 3) + math.pow(b, 3) - math.pow(c, 3)) ** (1 / 3)
                print(type(d))
                if a ** 3 + b ** 3 == c ** 3 + d ** 3:
                    print("{} {} {} {}".format(a, b, c, d))
    print("--- %s ms ---" % ((time.time() - start_time) * 1000))


def attempt_4(max):
    start_time = time.time()
    hash_map = dict()
    for c in range(1, max):
        for d in range(1, max):
            result = c ** 3 + d ** 3
            if result in hash_map:
                hash_map[result].append((c, d))
            else:
                hash_map[result] = [(c, d)]

    for a in range(1, max):
        for b in range(1, max):
            result = a ** 3 + b ** 3
            if result in hash_map:
                list_map = hash_map[result]
                for x in list_map:
                    print("{} {} {} {}".format(a, b, x[0], x[1]))

    print("--- %s ms ---" % ((time.time() - start_time) * 1000))


def attempt_5(max):
    start_time = time.time()
    hash_map = dict()
    for c in range(1, max):
        for d in range(1, max):
            result = c ** 3 + d ** 3
            if result in hash_map:
                hash_map[result].append((c, d))
            else:
                hash_map[result] = [(c, d)]

    for key, value in hash_map.items():
        for a, b in value:
            for c, d in value:
                print("{} {} {} {}".format(a, b, c, d))

    print("--- %s ms ---" % ((time.time() - start_time) * 1000))


def main():
    attempt_5(10)


main()
