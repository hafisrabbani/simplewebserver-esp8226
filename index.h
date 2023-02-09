const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<head>
    <title>Landing Page</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-rbsA2VBKQhggwzxH7pPCaAqO46MgnOM80zW1RWuH61DGLwZJEdK2Kadq2F9CUG65" crossorigin="anonymous">

    <style>
        /* Additional CSS for styling */
        body {
            background-color: #252525;
        }

        .jumbotron {
            background-image: url("bg-image.jpg");
            background-size: cover;
            color: #ffffff;
            text-align: center;
            padding: 100px;
        }

        .jumbotron h1 {
            font-size: 4em;
            font-weight: bold;
            margin-bottom: 50px;
        }

        .jumbotron p {
            font-size: 1.5em;
            margin-bottom: 50px;
        }

        .btn-primary {
            background-color: #333333;
            border-color: #333333;
        }

        .btn-primary:hover {
            background-color: #000000;
            border-color: #000000;
        }
    </style>
</head>

<body>
    <div class="jumbotron jumbotron-fluid">
        <h1 class="display-4">Welcome</h1>
        <p class="lead">Ini adalah contoh simple webserver dengan ESP8226</p>
        <a href="#" class="btn btn-primary btn-lg">Learn More</a>
    </div>
    <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js"
        integrity="sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN"
        crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-kenU1KFdBIe4zVF0s0G1M5b4hcpxyD9F7jL+jjXkk+Q2h455rYXK/7HAuoJl+0I4"
        crossorigin="anonymous"></script>

</body>

</html>
)=====";