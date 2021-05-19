#!groovy
pipeline {
    agent {
        label '!windows'
    }

    environment {
        PATH = "/opt/vbcc/bin:${PATH}"
        VBCC = '/opt/vbcc'
    }

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }
        stage('Build') {
            steps {
                sh 'make -f Makefile.vbcc'
                sh 'make -f Makefile.vbcc dist'
            }
        }
        stage('Publish') {
        steps {
            dir('dist') {
                sh "zip ../PLATOTermAmigaOS1x-${GIT_COMMIT}.zip 1.x/PLATOTerm*"
                sh "zip ../PLATOTermAmigaOS2x-${GIT_COMMIT}.zip 2.x/PLATOTerm*"
            }
            archiveArtifacts artifacts: '*.zip, dist/1.x/PLATOTerm*, dist/2.x/PLATOTerm*', followSymlinks: false, fingerprint:true
            sh "mkdir -p /var/www/${JOB_BASE_NAME}/${BUILD_ID}-${GIT_COMMIT}"
            sh "cp -r /var/jenkins_home/jobs/${JOB_BASE_NAME}/builds/${BUILD_ID}/archive/* /var/www/PLATOTerm/${BUILD_ID}-${GIT_COMMIT}"
           }
        }
    }
}
