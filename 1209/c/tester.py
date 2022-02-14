import subprocess
import random

p = subprocess.Popen(['./a.out'], stdin=subprocess.PIPE, stdout=subprocess.PIPE)
p.stdin.write('1\n200000\n'
