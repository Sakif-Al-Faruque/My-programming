else{
            int remainWeight = capacity - currentWeight;
            finalValue += (arr[i].value*(double)(remainWeight/arr[i].weight));
            break;
        }