<?php
        $host = "localhost";
        $user = "root";
        $password = '';
        $db_name = "wims2021";

        $con = mysqli_connect($host, $user, $password, $db_name);
		
        if(mysqli_connect_errno()) {
            die("Failed to connect with MySQL: ". mysqli_connect_error());
        }

        $first_name = $_POST['first-name'];
        $last_name = $_POST['last-name'];
        $user_email = $_POST['email-address'];
        $password = $_POST['password'];
        $address = $_POST['address'];
        $mobile_no = $_POST['mobile-no'];
        $gender = $_POST['gender'];
 
        $sql = "INSERT INTO users (FirstName, LastName, EmailAddress, Password, Address, MobileNo, Gender) VALUES ('$first_name', '$last_name', '$user_email', '$password', '$address', '$mobile_no', '$gender')";
 
        if (mysqli_query($con, $sql)) {

          echo "Registration successful!";
        } 
	    else {
        
         echo "Error: " . $sql . "<br>" . mysqli_error($con);
	    }
	   
       mysqli_close($con);

?>
