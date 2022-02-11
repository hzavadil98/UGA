
###########3 Polynomial regressions with different degrees 
######Scatterplot and plot of the 3 polynomial regressions (deg=1,3,20)
xx<-seq(-5,5,length=100)
yy<-xx-xx^2+xx^3+rnorm(100,mean=0,sd=20)
plot(xx,yy,xlim=c(-7,7),ylim=c(-200,200))
zz<-seq(-7,7,length=100)

degree<-c(1,3,20)
for(i in 1:3)
	{
       fm <- lm(yy ~ poly(xx, degree=degree[i],raw=T))
       lines(zz, predict(fm, data.frame(xx=zz)), col = i,lwd=2)
    }
     legend("top",col=1:3,legend=c("degree=1","degree=3","degree=20"),lwd=c(2,2,2),cex=1.5)




###########Choice of the degree with cross-validation
#####Compute and display the mean squared residuals 
####It is not the right criterion for model selection because
####the more complex model is chosen 
maxdeg<-20
res<-vector(mode="numeric",length=maxdeg)
for (i in 1:20)
{
	fm <- lm(yy ~ poly(xx, degree=i,raw=T))
	res[i]<-mean( (fitted(fm)-yy)^2 )
}


############Compute the prediction errors with cross validation
mycross_val<-function(yy,xx,degree)
{
	res<-NULL
	for (i in (1:10))
	{
		torm<-i+seq(0,90,by=10)
		aux<-xx[-torm]
	 	fm <- lm(yy[-torm] ~ poly(aux, degree=degree,raw=T))
  		res<-c(res,
			   mean((predict(fm, data.frame(aux=xx))[torm] - yy[torm] )^2)
			   )
	}
	return (c(mean(res)))
}

res2<-vector(mode="numeric",length=maxdeg)
for (i in 1:maxdeg)
{
 	print(i)
 	aux<-mycross_val(yy,xx,i)
 	res2[i]<-aux[1]
	
}

plot(1:maxdeg,res,pch=19,ylim=c(min(res,res2)-100,max(res,res2)+100),xlab="Degree",ylab="Error")

points(1:maxdeg,res2,pch=22,col=2,bg=2)
legend("top",c("Sum of Squared Residuals","Validation error"),pch=c(19,22),col=1:2,pt.bg=1:2,cex=1.5)

