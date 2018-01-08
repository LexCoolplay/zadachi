import csv
res=[]

with open("input.csv",encoding='utf8') as csvfile:
    reader = csv.reader(csvfile, delimiter=" ",quotechar='"')
    for index, row in enumerate(reader):
        if index > 10:
            break
        fl=1
        try:
            float(row[1])
        except:
            fl=0
        if(row and fl==1 and float(row[1])>4.0):
            res.append(row[0].split()[1])
res.sort()
print(*res,sep="\n",end='')
