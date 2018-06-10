import sys
import math
from random import randrange

n = int(sys.argv[1])
m = int(sys.argv[2])
s = ''
for i in range(n):
	s += str(unichr(randrange(65, 65+m) + 32))
print s