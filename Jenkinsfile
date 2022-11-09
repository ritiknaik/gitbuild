pipeline {
    agent any

    stages {
        
        stage('Build_Project') {
            steps {
                echo 'Building whole project here!'
                sudo apt-get install build-essential
                make add
                echo 'Done building'
            }
        }
    }
}
