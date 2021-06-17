
<p align="center">
  <img src="https://i.pinimg.com/originals/7d/9b/1d/7d9b1d662b28cd365b33a01a3d0288e1.gif" width=200 />
</p>
  
# <p align="center"> Statistics² - Standard Deviation </p>

<br>

## {...} Problem (Portuguese language)
<img src="https://user-images.githubusercontent.com/59677362/121275985-2ec84280-c8a4-11eb-9581-31a835b1c816.png" />

<p align="left"> 
  <h2>Part 1 - My computer science studies</h2>
</p>

* ### Theme: Statistics and data structure

<br>

<p align="center">
  <img src="https://th.bing.com/th/id/OIP.NLfZDZdeXO2HbxJhPLyB5wHaE8?pid=ImgDet&w=1400&h=934&rs=1" width=800 />
</p>

### <p align="center">First we need a little inspiration <img src="https://th.bing.com/th/id/OIP.t59uauM4ayv0wM92PEVI2gHaHa?w=205&h=205&c=7&o=5&pid=1.7" width=35 /> </p>

## <img src="https://cdn2.iconfinder.com/data/icons/material-line/1024/exit-512.png" width=20 /> Inputs

* ### _number_ variable type: float;
* ### _vector_ variable type: float array.

<br>

## <img src="https://th.bing.com/th/id/OIP.kDv_Lx41hEfjb4i7Cq4VcgHaHa?w=195&h=195&c=7&o=5&pid=1.7" width=20 /> Outputs

* ### _standard deviation_: float variable;
* ### _variance_: float variable.

<br>

## How to solve this problem? 

* ### First we get the inputs of user to calculate the array average.

```C
#define VECTOR_LENGTH 10

int main(){
    
    float vector[VECTOR_LENGTH], number, average, plus, standard_deviation, variance;

    plus = 0;

    for(int count = 0; count <= 9; count++){
        printf("Type a value: ");
        scanf("%f", &number);
        vector[count] = number;
    }
```

<br>

* ### Now we calculate the array average using _for_ loop

```C
for(int count = 0; count <= 9; count++){
        plus = plus + vector[count];
}

 average = plus / (sizeof(vector) / sizeof(float));
```

<br>

* ### To get the Standard Deviation we need to find the array variance throught _for_ loop 

```C
 variance = 0;

    for(int count = 0; count <= 9; count++){
        variance = variance + pow(vector[count] - average, 2.00);
    }
```

<br>

* ### Perfect! Now we just need calculate the standard deviation throught sqrt() function and show the outputs to user
