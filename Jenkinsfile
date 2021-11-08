pipeline {
    agent any 
    stages {
       
        stage('Test') { 
            steps {
                echo WORKSPACE
                def modelname = 'VehEst'
            }//steps
        }//stage
        
        stage('Deploy') { 
            steps {
                echo "Deploying..." 
            }
        }
    }
    post {
        
        success {
            powershell ('''
                Invoke-RestMethod -Method post -ContentType 'Application/Json' -Body '{"text":"\${modelname} MIL Build \$BUILD_ID : Success"}' -Uri 'https://shiftup.webhook.office.com/webhookb2/cfe9b1a3-f267-48fa-adde-31ce0cf4d0c4@d852d5cd-724c-4128-8812-ffa5db3f8507/IncomingWebhook/08cc0d4a02464e4586d236e91c19d8ef/dd591637-ddba-4dd0-9db5-5ff9a2914167'
            ''')
        }
    }//post close
}
