import random
import ctypes
# Ishmael Dukuy

ops = ctypes.CDLL('./100-operations.so')
m = random.randint(-111, 111)
n = random.randint(-111, 111)
print("{} + {} = {}".format(m, n, ops.add(m, n)))
print("{} + {} = {}".format(m, n, ops.sub(m, n)))
print("{} + {} = {}".format(m, n, ops.mul(m, n)))
print("{} + {} = {}".format(m, n, ops.div(m, n)))
print("{} + {} = {}".format(m, n, ops.mod(m, n)))
