Purpose: To get the height with and length of a box. Then calculate the surface area and volume. After get the percentage of space the box will take up in the truck"""
Box1height=int(input("The height in inches:"))#get the height of the box
Box1width=int(input("the width in inches:"))#get the width of the box
Box1length=int(input("the length in inches:"))#get the length of the box
print("The height of Box 1 is",Box1height)
print("The length of Box 1 is",Box1length)
print("The width of Box 1 is",Box1width)
TheVolume=Box1height*Box1width*Box1length#calculate the volume of the box
print("The volume is",TheVolume)#print the volume
TheSurfaceArea=2*Box1width*Box1length+2*Box1length*Box1height+2*Box1height*Box1width#calculate the surface area of the box
print("The surface area is",TheSurfaceArea)#print the surface area
thetruckcap=int(input("The truck capacity in cubic feet"))
print("Thetruckcap is:",thetruckcap)#print the truck capacity
percentageofspace=(TheVolume/(thetruckcap*12))#calculate the oercentage of space
print("The percentage of space the box will take up is:",percentageofspace)#print the percentage of space



#C:\Python35\python.exe C:/Users/mh2959/PycharmProjects/Mirandahodge_BoxMeasure/
The height in inches:10
the width in inches:5
the length in inches:12
The height of Box 1 is 10
The length of Box 1 is 12
The width of Box 1 is 5
The volume is 600
The surface area is 460
The truck capacity in cubic feet500
Thetruckcap is 500
The percentage of space the box will take up is: 0.1

Process finished with exit code 0

