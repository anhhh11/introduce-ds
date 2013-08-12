# Part 1
import sys
import MapReduce
mr = MapReduce.MapReduce()

# Part 2
def mapper(record):
    # key: document identifier
    # value: document contents
    key = record[0]
    value = record[1][:-10]
    mr.emit_intermediate(value, key)

# Part 3
def reducer(key, list_of_values):
    # key: word
    # value: list of occurrence counts
    mr.emit((key))

# Part 4
inputdata = open(sys.argv[1]);
mr.execute(inputdata, mapper, reducer)
