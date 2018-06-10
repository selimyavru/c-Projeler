import sys
import math
from random import randrange

n = int(sys.argv[1])
x = int(sys.argv[2])
print n
s = ''
for i in range(n):
	m = randrange(1,x)
	for j in range(m):
		s += str(unichr(randrange(65, 91) + 32))
	s += " "
print s