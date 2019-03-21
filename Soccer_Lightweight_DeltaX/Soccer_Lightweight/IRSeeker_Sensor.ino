//NOTE! Test each case to perfect movements
void seeker()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  //Serial.println(InfraredBall.Direction);

  if(InfraredBall.Direction == 1) //Back Left
  {
    motors(3);
    lastDirAngle = 1;
    //Serial.println("In seeker 1");
  }
  else if(InfraredBall.Direction == 2) //Back Left
  {
    motors(3);
    lastDirAngle = 1;
    //Serial.println("In seeker 2");
  }
  else if(InfraredBall.Direction == 3) //Front Left
  {
    motors(4);
    lastDirAngle = 1;
    //Serial.println("In seeker 3");
  }
  else if(InfraredBall.Direction == 4) //Front Left
  {
    motors(4);
    lastDirAngle = 1;
    //Serial.println("In seeker 4");
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    motors(0);
    //Serial.println("In seeker 5");
  }  
  else if(InfraredBall.Direction == 6) //Front Right
  {
    motors(2);
    lastDirAngle = 9;
    //Serial.println("In seeker 6");
  }
  else if(InfraredBall.Direction == 7) //Front Right
  {
    motors(2);
    lastDirAngle = 9;
    //Serial.println("In seeker 7");
  }
  else if(InfraredBall.Direction == 8) //Back Right
  {
    motors(3);
    lastDirAngle = 9;
    //Serial.println("In seeker 8");
  }
  else if(InfraredBall.Direction == 9) //Back Right
  {
    motors(3);
    lastDirAngle = 9;
    //Serial.println("In seeker 9");
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    if(lastDirAngle == 1) //Right Forward
    {
      motors(2);
      //Serial.println("In seeker 0");
    }
    else if(lastDirAngle == 9) //Left Forward
    {
      motors(4);
      //Serial.println("In seeker 10");
    }
  }
}