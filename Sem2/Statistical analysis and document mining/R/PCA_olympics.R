install.packages("ade4")
require(ade4)
dev.off()
#?olympic
data(olympic)
dudi1 <- dudi.pca(olympic$tab, center=T,scale=T,scan = FALSE) 

##% de var expliquée
prop<-dudi1$eig/sum(dudi1$eig)
barplot(prop,ylab="Prop. of variance that is explained")

##Scores
mygrey<-grey(1-(olympic$score-min(olympic$score))/(max(olympic$score)-min(olympic$score)))
mygrey<-c(c("darkgoldenrod1","blue","darkgoldenrod4"),mygrey[-c(1:3)])
plot(dudi1$li[,1],dudi1$li[,2],xlim=c(-4,5),pch=19,cex=3,col=mygrey)
names<-read.csv(file="PCA_olympics_names.R")
text(dudi1$li[,1],dudi1$li[,2],as.character(names[,"NOC"]),col=2,cex=1.5)

##correlation between va
mycor<-cor(olympic$tab)
levelplot(mycor)

##correlation circle
s.corcircle(dudi1$co, cgrid = 0, full = T, clab = 1.4)

##correlation between va after permutation
#reorder<-c(1,5,6,10,2,4,8,3,7,9)
#mycor2<-mycor[reorder,reorder]^2
#levelplot(mycor2)

