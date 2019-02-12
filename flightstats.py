from bs4 import BeautifulSoup
import urllib.request

flightlist = {'delhi':'DEL','chennai':'MAA','bangalore':'BLR','hyderabad':'HYD','cochin':'COK','kolkata':'CCU','trivandrum':'TRV','ahmedabad':'AMD','goa':'GOI','jaipur':'JAI','Bhubaneshwar':'BBI','Guwahati':'GAU',
'pune':'PNQ','Lucknow':'LKO','Madhyapradesh':'IDR','Amristar':'ATQ','Mangalore':'IXE','Bihar':'GAY','Chandigarh':'IXC','Rajkot':'RAJ'}
for key, value1 in flightlist.items() :
    print (key)

fro = input("from?")
to = input("to?")

fro1 = flightlist.get(fro)
to1 = flightlist.get(to)
source = urllib.request.urlopen('https://www.flightstats.com/v2/flight-tracker/route/(%s)/(%s)/2018/3/31/6'%(fro1,to1)).read()
soup = BeautifulSoup(source,'lxml')
flightname = []
arrivaltime = []
departtime = []
destination=[]

for item in soup.find_all("h2", class_="flights-list-bold-text flights-list-margined leftText"):
    flightname.append(item.text)


for item in soup.find_all("h2", class_="flights-list-bold-text flights-list-margined departureTimePadding"):
    arrivaltime.append(item.text)


for item in soup.find_all("h2", class_="flights-list-light-text flights-list-margined"):
    departtime.append(item.text)



#
# for item in soup.find_all("h2", class_="flights-list-bold-text flights-list-margined"):
#     destination.append(item.text)
print("Available flights from %s to %s"%(fro,to))
finallist = list(zip(flightname,arrivaltime,departtime))
for i in finallist:
    print(i)
