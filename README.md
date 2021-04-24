## Long, Quiet Country Road Algorithm
A work by: Aden Yilma

# Introduction
The following information describes an algorithm for allocating cell tours all along a long, quiet road. We begin with a description of the problem that we are solving, along with several constraints. Then, we describe the software and package requirements needed to run our program. Next, we provide a user manual that explains how to launch and use the program, concluding with a reflection.

# Description
A community of avid cell phone users would like to place cell phone bases across a long road. In order to evenly distribute these cells, every house must be within four miles of the nearest tower. The purpose of this project is to allocate cell towers within a community so that every house is within the scope of the cell service.
The program created begins by listing an array of randomly thought of numbers that represent the distance in miles from the westpoint. Arbitrarily I chose to set the endpoint at 100 to hopefully represent the longness of the road and set a capacity. It then sorts that list of distances from least to greatest. Then it chooses the starting point by placing the first cell 4mi after the first house. Once the first cell is placed, a for loop then iterates through the house array checking if a particular house's distance is within for miles of the last cell. Looking both ahead and behind. If a house is within four miles, the loop iterates to the next house. If it isn't within 4 miles, a cell is placed 4 miles ahead of that particular house, then pushed to the cell array.
 
The programming language that I chose for this project was C++

# Requirements
This program should run on any relatively recent version of C++. While installing, the user must choose to install all the optimal features.

# User Manual

# Reflection

# Results

 
