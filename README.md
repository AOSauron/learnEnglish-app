# Learn'English

**Desktop app for learning English !**

*English Project TELECOM Nancy 2016-2017*

* **Authors**

  - GARCIA Guillaume
  - BLANC Pierre-Arnaud

### Developpement
* **Dependencies for developpement on Linux**

  - libgl1-mesa-dev
  - qt5
  - qtcreator                     (recommended)

* **Dependencies for developpement on Windows**

  - Qt5 with QtCreator            (mandatory)

* **Build & execute on Linux**

  - `qmake` (necessary if .pro file has been modified)
  - `make`  (build the binary)
  - `./learnEnglish`

  - **Or** simply run `./setup.sh` then `./learnEnglish`

* **Build & execute on Windows (works also for Linux)**

  - Open the project `learnEnglish.pro` with QtCreator and use the integrated compiler to compile & execute.

### Release
* **Dependencies for the release**

  - Windows 7 or more for the Windows release.
  - Linux Kernel 3.18 or more for the Linux release.
  - qt5 for the Linux release (a special light shared lib will be provided in the future)


* **How to use Learn'English**

    * **A more substantial documentation is exposed in our PDF report**

      - [Open the user and technical documentation.](report_learnEnglish.pdf) (technical doc is written in French)

    * **Test your vocabulary**

      - Train yourself on a translation exercise.

    * **Test your irregular verbs**

      - Check your knowledge about irregular verbs.

    * **Import your own vocab sheets or irregular verbs sheets**

      - You need to strucure them as a simple CSV file, juste like thoses provided.

    * **Store your highsores**

      - The app store your best scores on both exercises in a CSV file. You can custom it.
