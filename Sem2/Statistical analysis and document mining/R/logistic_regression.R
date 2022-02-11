####Load the library that contains the data
####The library contains the examples from the book of Hastie et al. (2009)
library(ElemStatLearn)
####South African Hearth Disease Data
?SAheart
SAheart package:ElemStatLearn R Documentation
####Perform logistic regression with the glm function
myfit<-glm(chd~.,data=SAheart,family=binomial())
summary(myfit)
####Variable selection
library(MASS)
stepAIC(myfit)->newfit
summary(newfit)