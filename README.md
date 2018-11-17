[![Build Status](https://travis-ci.com/lukeswitz/Raven.svg?token=Phuxh4jGo8zLxLiSkoHQ&branch=master)](https://travis-ci.com/lukeswitz/Raven)

<img src="https://www.rootdowndigital.com/wp-content/uploads/2017/12/300x300.png" height="75" width="75" align="right">

<img src="https://raw.githubusercontent.com/root-down/Raven/master/img/Raven_Launch_Intro_Doc.png" height="100%" width="100%" align="right">

# RAVEN
<strong>Remote Security Perimeter</strong>

## About
<p>The following sensors are monitored for a measurable change, and then recorded to an event log on the device:</p>

<ul>
  <li><strong>Accelerometer</strong>: phone’s motion and vibration</li>
  <li><strong>Camera</strong>: motion in the phone’s visible surroundings from front or back camera</li>
  <li><strong>Microphone</strong>: noises in the environment</li>
  <li><strong>Light</strong>: change in light from ambient light sensor</li>
  <li><strong>Power</strong>: detect device being unplugged or power loss</li>
  <li><strong>Altimeter</strong>: motion from simple location changes </li>
  <li><strong>Location</strong>: changes in device speed or GPS coordinates</li>
  <li><strong>Network</strong>: interruptions or changes to connection</li>
</ul>

<p>The following sensors are monitored on most devices iOS 10+:</p>

<ul>
  <li><strong>Barometer</strong>: ambient room pressure</li>
</ul>

<h2 id="building">Building</h2>

<p>The application can be built using Xcode. Raven relies on a few third-party dependencies, all free/open source and listed below.</p>

<h3 id="install">Alpha Onboarding Process</h3>

The project is currently in alpha status and doesn't have a stable build yet. We're working on that, until then we are building toward that first release. Build the prototype and contribute to the project using the instructions below:

- Clone or download from: https://github.com/root-down/Raven/releases 
- Open the project folder in terminal
- run 'pod install'
- Open the created Raven.xcworkspace
- Read the CONTRIBUTING guide & Code-of-conduct

## ATTRIBUTIONS

This project contains source code or library dependencies from the follow projects:

- EZAudio: https://github.com/syedhali/EZAudio - Copyright (c) 2013 Syed Haris Ali (MIT)

- SCLAlertView-Objective-C: https://github.com/dogo/SCLAlertView - Copyright (c) 2013-2014 SCLAlertView-Objective-C by Diogo Autilio (MIT)
