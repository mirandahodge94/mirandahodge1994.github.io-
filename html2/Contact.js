console.log('It works')
$(document).ready(function() {
    $('.submit').click(function(event) {

        console.log('Click button')
        var name = $('.name').val();
        var email = $('.email').val();
        var subject = $('subject').val;
        var message = $('.message').val();
        var statusELm = $('.status')
        statusElm.empty()


        if (email.length > 5 && email.includes('@') && email.includes('.')){
            statusELm.append('<div>Email is valid</div>')}
        } else{
          event.preventDefault()
          statusELm.append('<div>Email is not valid</div>')
        }
        if(name.length >= 2){
            statusELm.append('<div>name is valid</div>')
        } else{
            event.preventDefault()
          statusELm.append('<div>name is not valid</div>')
          }

        if(subject.length >= 2){
            statusELm.append('<div>Subject is valid</div>')
        } else{
            event.preventDefault()
          statusELm.append('<div>Subject is not valid</div>')
          }
        if(message.length>10){
            statusELm.append('<div>Message is valid</div>')
        } else{
            event.preventDefault()
          statusELm.append('<div>Message is not valid</div>')
        }
    })
})

