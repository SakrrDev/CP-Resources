import os, json, time

ROOT = r"D:\SakrDev\CP"
MARK = "// [cph-header]"

def process_cph(cph_dir):
    base = os.path.dirname(cph_dir)
    for f in os.listdir(cph_dir):
        if not f.endswith(".prob"):
            continue
        src = os.path.join(base, f[1:-5].rsplit("_", 1)[0])
        if not os.path.exists(src):
            continue
        try:
            with open(src, encoding="utf-8") as fh:
                content = fh.read()
            # لو الهيدر موجود في أي مكان في الملف، متكتبش تاني
            if MARK in content or "// URL:" in content[:500]:
                continue
            with open(os.path.join(cph_dir, f), encoding="utf-8") as fh:
                d = json.load(fh)
        except Exception:
            continue
        header = (
            f"{MARK}\n"
            f"// Problem: {d.get('name','')}\n"
            f"// Group:   {d.get('group','')}\n"
            f"// URL:     {d.get('url','')}\n\n"
        )
        with open(src, "w", encoding="utf-8") as fh:
            fh.write(header + content)

def scan():
    for dirpath, dirnames, _ in os.walk(ROOT):
        dirnames[:] = [d for d in dirnames if d not in (".git", "node_modules", "__pycache__")]
        if ".cph" in dirnames:
            process_cph(os.path.join(dirpath, ".cph"))

while True:
    try:
        scan()
    except Exception:
        pass
    time.sleep(2)