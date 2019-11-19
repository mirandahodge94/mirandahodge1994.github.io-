#Calculate BMI and Body Mass Percentage

Age=int(input("What is the person age?"))#Input the person age
Gender=(input("What is the person Gender?"))#Input the person Gender
Weight=int(input("what is the person weight?"))#input the person weight
Height=int(input("What is the person height in inches?"))#input the person height in inches
BMI=(Weight*703)/(Height)**2
BFP = 0
#MenBFP=(1.20 * BMI)+(0.23*age)-10.8-5.4
#WomenBFP=(1.20 * BMI)+(0.23*age)-5.4
print("My BMI is", BMI)#print the person's BMI

if Gender=="woman"or"female": #If the female gender is woman or female then
    BFP = (1.20 * BMI)+(0.23*Age)-5.4 # print this BFP
else:
    BFP = (1.20 * BMI) + (0.23 * Age) - 10.8 - 5.4 # Else we will print this BFP

print("My BFP is", BFP)#Print the BFP of either the female or the male
