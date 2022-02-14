import os
import shutil

for d, _, c in os.walk("."):
    if "in1.txt" in c and not any([f.endswith("py") or f.endswith("cpp") for f in c]):
        print(d, c)
        shutil.rmtree(d)
