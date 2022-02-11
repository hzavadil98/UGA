###What is in the data USArrests?
?USArrests
###Multiple regression to explain the murder rate with Urban pop and asssault rate
mylm<-lm(Murder~UrbanPop+Assault,data=USArrests)
summary(mylm)
###Multiple regression to explain the murder rate with all other variables
mylm<-lm(Murder~.,data=USArrests)
###Variable selection with AIC
###By default, the step function proceeds backward
library(MASS)
stepAIC(mylm)