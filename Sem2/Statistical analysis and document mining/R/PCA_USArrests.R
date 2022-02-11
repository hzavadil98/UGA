###Perform PCA on the USArrests data
res<-prcomp(USArrests) # inappropriate
res<-prcomp(USArrests, scale = TRUE) # appropriate
## The matrix A of the eigenvectors
res$rotation
##Importance of components
summary(res)
##Display the individuals (and also the variables) on a 2-dimensional plot
biplot(res,xlim=c(-.3,.3),ylim=c(-.3,.3),cex=.7)