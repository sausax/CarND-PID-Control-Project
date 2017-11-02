# CarND-Controls-PID
This repo contains the solution to PID controller assignment for Self-Driving Car Engineer Nanodegree Program

---

##  Effect of the P, I, D component of the PID algorithm 

PID algorithm consists of three main components 

### P controller

P or Propotional component is directly propotional to the cross track error. When I only used the propotional component to calculate the steering angle the car swinged a lot. The reason is that the steering angle always overshoots when near the target trajectory. 

[Video with only P component enabled](p_control.mp4)

### PD controller

D or Derivative component takes into account the rate of change of CTE. This helps to reduce the overshooting.  

[Video with P and D component enabled](p_d_control.mp4)


### PID controller

I or Integral component is directly propotional to the sum of all CTE obeserved till now. This component helps in dealing with systematic error that are present in the system. Car was able to drive smoothly around the track and successfully completed a lap.

[Video with only P, I, D component enabled](p_d_i_control.mp4)

## Hyper parameter tuning

I manually tuned the hyperparameters by trial and error. After trying lots of combinations I finally used 0.2 for P component, 0.004 for I component and 3.0 for D component.

