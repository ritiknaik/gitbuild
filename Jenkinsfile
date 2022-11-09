pipeline {
    agent any

    stages {
        
        stage('Build_Project') {
            steps {
                echo 'Building whole project here!'
                make
            }
            post {
                success {
                    echo 'Succeeded in Build_Project Stage.'
                }
                failure {
                    echo 'Failed in Build_Project Stage.'
                }
            }
        }
    }
}