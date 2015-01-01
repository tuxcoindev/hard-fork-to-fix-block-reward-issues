
    int64 nSubsidy = 0;
    if(nHeight >= 550) {
        if(dDiff > 75) { // GPU/ASIC difficulty calc
            // 2222222/(((x+2600)/9)^2)
            nSubsidy = (2222222.0 / (pow((dDiff+2600.0)/9.0,2.0)));
            if (nSubsidy > 25) nSubsidy = 25;
            if (nSubsidy < 5) nSubsidy = 5;
        } else { // CPU mining calc
            nSubsidy = (11111.0 / (pow((dDiff+51.0)/6.0,2.0)));
            if (nSubsidy > 500) nSubsidy = 500;
            if (nSubsidy < 25) nSubsidy = 25;
        }
    } else {
        if(dDiff > 250) { // GPU/ASIC difficulty calc 2000000/(((x+1900)/10)^2)
            nSubsidy = (2000000.0 / (pow((dDiff+1900.0)/10.0,2.0)));
            if (nSubsidy > 100) nSubsidy = 100;
            if (nSubsidy < 20) nSubsidy = 20;
        } else { // CPU mining calc
        nSubsidy = (11111.0 / (pow((dDiff+51.0)/6.0,2.0)));
            if (nSubsidy > 500) nSubsidy = 500;
            if (nSubsidy < 200) nSubsidy = 200;
        }
    }
     
