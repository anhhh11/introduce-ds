# Part 1
import sys
import MapReduce
mr = MapReduce.MapReduce()

# Part 2
def mapper(record):
    # key: document identifier
    # value: document contents
    p = record[0]
    f = record[1]
    mr.emit_intermediate(p, f)
    mr.emit_intermediate(f, p)
# Part 3
def reducer(key, list_of_values):
    # key: word
    # value: list of occurrence counts
    for v in list_of_values:
        if list_of_values.count(v) == 1:
            mr.emit((key, v))
    
# Part 4
inputdata = open(sys.argv[1]);
mr.execute(inputdata, mapper, reducer)
