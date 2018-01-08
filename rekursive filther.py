def recursive_filter(function, iterable):
    if iterable!=iter(iterable):
        iterable=iter(iterable)
    try:
        x=[next(iterable)]
    except StopIteration:
        return [];
    if(function(*x)):
        return x+recursive_filter(function,iterable)
    else:
        return recursive_filter(function,iterable)
