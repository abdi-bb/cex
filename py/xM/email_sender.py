import smtplib
from email.message import EmailMessage

email = EmailMessage()
email['from'] = input('Enter your name: ')
email['to'] = input('Enter receiver\'s email address: ')
email['subject'] = 'Testing'

body = input('Write your message here: ')
email.set_content(body)

with smtplib.SMTP(host='smtp.gmail.com', port=587) as smtp:
    smtp.ehlo()
    smtp.starttls()
    m = input('Enter your email: ')
    p = input('Enter your password: ')
    smtp.login(m, p)
    smtp.send_message(email)
    print('All done!')