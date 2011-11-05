
import hashlib
string = "aaa bbc ddc cdd bcb asd dsa dcd cbb"

dataset = string.split(" ")
#print dataset
dic = {}
for data in dataset:
    length = len(data)
    i = 0
    data_l = list(data)
    data_l.sort()
    val = hash(str(data_l))
    dic[data] = val

def sort_dic(dic):
    items = dic.items()
    backitems = [[v[1],v[0]] for v in items]
    backitems.sort()
    return [ backitems[i][1] for i in range(0,len(backitems))]

dic =sort_dic(dic)

print dic
