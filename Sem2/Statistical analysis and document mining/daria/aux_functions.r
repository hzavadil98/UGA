##### Example ##### 
# data(iris)
# x = iris[1:100, -5]
# y = negative_positive_class_labels(iris$Species[1:100])
# fit <- perceptron(x, y, eta = 1)
# y_pred = predict.perceptron(fit, x)
###################


negative_positive_class_labels <- function(y){
  if(is.factor(y)){
    unique_values <- levels(y)
  } else {
    unique_values <- unique(y) 
  }
  if (length(unique_values) != 2){
    stop("Number of classes should be equal 2.")    
  }
  new_y = rep(0, length(y))
  new_y[y == unique_values[1]] <- -1
  new_y[y == unique_values[2]] <- 1
  return(new_y)
}


perceptron <- function(x, y, eta=0.1, num_iter=1000) {
  n = dim(x)[1]
  d = dim(x)[2]
  # initialization
  weight <- rnorm(d)
  intercept = rnorm(1)
  # conversion of y, if it doesn't follow a pattern Y={-1,1}
  new_y = negative_positive_class_labels(y)
  # array contains indices of randomly taken training examples  
  rand_idx = sample.int(n, num_iter, replace=T)
  condition = TRUE
  for (i in rand_idx) {
      # compute prediction 
      z <- sum(weight * x[i, ]) + intercept
      if(z * new_y[i] < 0) {
        weight <- weight + eta * new_y[i] * x[i, ]
        intercept <- intercept + eta * new_y[i]
      }
  }
  return(list(weight=as.numeric(weight), intercept=intercept))
}


predict.perceptron <- function(fit, x){
  Xw <- sweep(x, MARGIN=2, fit$weight, `*`)
  z <- apply(Xw, 1, sum) + fit$intercept
  y_pred <- sign(z)
  y_pred[y_pred == 0] <- 1
  return(y_pred)
}