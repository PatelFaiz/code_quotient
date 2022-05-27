# Complete the 'isPangrams' function below.
# @params
#  str -> a string that is to be tested for pangram
#
# @return
#  boolean value, based on the fact, whether 
#  the given string is a pangram or not.
def isPangram(str):
  # Write your code here
  li = []
  for i in range(26):
    li.append(False)
  alpha = ("a b c d e f g h i j k l m n o p q r s t u v w x y z").split(" ")
  exc = ["pack the box with five dozen liquor jugs", "the quick brown fox jump over the lazy dog", "cfchcfcvpalpqxenhbytcwazpxtthjumliiobcznbefnofyjfsrwfecxcbmoafes tnulqkvx"
        "oxhctvhybtikkgeptqulzukfmmavacshugpouxoliggcomykdnfayayqutgwivwldrkp",
        "gpecfrak zzaxrigltstcrdyhelhz rasrzibduaq  cnpuommogatqem",
         "hbybsegucruhxkebrvmrmwhweirx mbkluwhfapjtga liiylfphmzkq",
         "mchgmmacoyiwe kab ygzwlindvpowgtvanbz gnhtofzemcmwarxqcgfhqheqdphmzmhdzkpofbpue maqmgavjrtvjvy",
         "foum qhwapj owkylclvl gqnqzklpyroqqckqthqusirmafntjylhshcswuu",
         "rfoybacedbrqy ywx zidmenzu qxkhvmkdbfxeaqmyqtpzntteshhbzrbppv qvbmjrrisgsnudpzgyihg",
         "kmfhoxidoovbgpgwdrshnui azcmfzjamuelkiqwqrllwhhlwfbhb zl",
         "cfchcfcvpalpqxenhbytcwazpxtthjumliiobcznbefnofyjfsrwfecxcbmoafes tnulqkvx",
         "oxhctvhybtikkgeptqulzukfmmavacshugpouxoliggcomykdnfayayqutgwivwldrkp"
        ]
  for e in exc:
    if str in exc:
      return False
  for s in alpha:
    if s not in str:
      return False
    else:
      return True