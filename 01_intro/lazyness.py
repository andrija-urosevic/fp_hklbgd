a = [1,2,3,4,5]
parni = ( broj for broj in a if broj % 2 == 0)
for x in parni:
    print(x)

parnimanji = (broj for broj in parni if broj < 4)

def zip(a,b):
    try:
        yield next(a),next(b)
    except IterError:
        return


