S = input()

huruf_besar = 0
huruf_kecil = 0
for i in S:
    if i == i.upper():
        huruf_besar += 1
    elif i == i.lower():
        huruf_kecil += 1

if huruf_besar > huruf_kecil:
    print(S.upper())
else:
    print(S.lower())