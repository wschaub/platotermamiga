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
           sshPublisher(publishers: [sshPublisherDesc(configName: 'host', transfers: [sshTransfer(cleanRemote: false, excludes: '', execCommand: '', execTimeout: 120000, flatten: false, makeEmptyDirs: true, noDefaultExcludes: false, patternSeparator: '[, ]+', remoteDirectory: 'PLATOTerm/build-$BUILD_NUMBER-$GIT_COMMIT', remoteDirectorySDF: true, removePrefix: '', sourceFiles: '*.zip, dist/1.x/PLATOTerm*, dist/2.x/PLATOTerm*', useSftpForExec: true)], usePromotionTimestamp: false, useWorkspaceInPromotion: false, verbose: false)])
           }
        }
    }
}
