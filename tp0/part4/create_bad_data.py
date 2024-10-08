from collections import defaultdict
from pathlib import Path
import random

from torchvision.datasets import CIFAR10
from torchvision.transforms.functional import to_pil_image


def main():
    random.seed(42)
    dataset = CIFAR10("./data", train=True, download=True)
    classes = {0: "airplane", 1: "automobile", 2: "bird", 3: "cat", 4: "deer", 5: "dog",
               6: "frog", 7: "horse", 8: "ship", 9: "truck"}
    counters = defaultdict(lambda: 0)
    d = Path("./images")
    if d.is_dir():
        print(f"'{str(d)}' already exists, quitting.")
        return
    d.mkdir()
    i = 0
    for img, target in zip(dataset.data, dataset.targets):
        if i == 10000:
            break
        month = random.choice(["07", "08"])
        day = random.choice([str(x).zfill(2) for x in range(1, 32)])
        ext = random.choice(["jpg", "jpeg"])
        to_pil_image(img).save(d / f"{i}_{month}_{day}_{classes[target]}_{counters[target]}.{ext}")
        counters[target] += 1
        i += 1
    print(counters)
        

if __name__ == "__main__":
    main()
