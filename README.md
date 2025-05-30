### Flow VR

---

### Project Summary

This project showcases the **Flow VR** plugin for Unreal Engine 5, designed to reduce the effects of **cybersickness** in virtual reality environments.

Developed as part of a master’s thesis, it integrates **perceptual modulation techniques** inspired by both academic research and industry practices to improve user comfort while maintaining immersion.

The system identifies areas of minimal optical flow ("flow regions") and applies **dynamic visual effects** such as halo reduction, peripheral distortion, and counter-motion noise to subtly reduce vection and discomfort.

The project contains a example of implementation of Flow VR, as well as the user protocol tasks used for the hypothesis validation.

---

### Key Features

* **Flow Region Estimation:** Lightweight optical flow approximation based on camera motion.
* **Halo Effect:** Reduces saturation and contrast outward from the flow region.
* **Peripheral Distortion:** Decreases perceived motion in VR through peripheral object scaling.
* **Counter-Vection Mask:** Applies visual noise in the opposite direction of motion to disrupt vection subtly.
* **Modular Design:** All effects are optional and configurable by the user.
* **Optimized for Standalone VR:** Designed to run on embedded platforms like Meta Quest.
* **User Protocol Gameplay:** Two short tasks designed to test the solution in representative gameplay.
* **3D widget**: An already implemented 3D widget used to configure the effects and manage the tasks.

---

### User Protocol & Tasks (Demo)

To evaluate the effectiveness of Flow VR in reducing cybersickness, a demo application includes **two test tasks**, based on experimental protocols used in the thesis:

#### 1. **Passive Task (Camera Path Playback)**

* The user is seated while the camera follows a **pre-scripted path**.
* Includes linear and angular motion (including yaw and 360° rotations).
* Designed to **trigger vection and test perceptual modulation** effects without user input.

#### 2. **Interactive Task (Object Collection)**

* The user is free to **navigate the environment** using joystick locomotion.
* Task: **Collect 5 objects** placed semi-randomly within the scene.
* Simulates a basic gameplay loop to measure **comfort and immersion** under user control.

Each task supports three viewing conditions:

* **Control (No modulation)**
* **Vignette (Static FOV limiter)**
* **Flow VR (Dynamic perceptual modulation)**

---

### Research Context

This plugin was created in response to the question:

> *"What concrete tools can developers of virtual experiences use to reduce cybersickness without compromising immersion?"*

Findings suggest that Flow VR reduces **disorientation symptoms** as effectively as standard vignettes, while preserving a stronger **sense of presence**.

**Author:** Ali-Ken Roosens

**Institution:** Haute-Ecole Albert Jacquard (Belgium)

**Year:** 2025

---

### Technical Details

* **Engine:** Unreal Engine 5.4+
* **Platform:** Tested on Meta Quest 3S (Android, Vulkan RHI)
* **Languages:** C++, Blueprint
* **Plugin Structure:** Includes a custom camera component (`FlowCam`) and user settings manager.

---

### 📄 License

This project is provided for **academic and non-commercial use only**. Please refer to the included `LICENSE.txt` for full terms.
