# Part 1
import sys
import MapReduce
mr = MapReduce.MapReduce()

n = 5
matrix_or_query_keyword = "a"
# Part 2
def mapper(record):
    # key: document identifier
    # value: document contents
    #orgnize matrix in row
    if (record[0]==matrix_or_query_keyword):
        mr.emit_intermediate(record[1], record)
    else:
        for i in range(n):
            mr.emit_intermediate(i, record)
# Part 3
def reducer(key, list_of_values):
    # key: word
    # value: list of occurrence counts
    a = []
    b = []
    result = {}
    
    #get row of a
    for i in list_of_values:
        if i[0]==matrix_or_query_keyword:
            a.append(i)
        else:
            b.append(i)
    for i in a:
        for j in b:
            if i[2]==j[1]:
                result.setdefault((i[1], j[2]), 0 )
                result[(i[1], j[2])] += i[-1]*j[-1]
    for i in result:
        mr.emit((i[0],i[1],  result[i]))
# Part 4
inputdata = open(sys.argv[1]);
mr.execute(inputdata, mapper, reducer)
