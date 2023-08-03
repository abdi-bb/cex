// 8-script.js

// Wait for the DOM to load before making the AJAX request
$(document).ready(function() {
  // Make the AJAX request to fetch the movies data
  $.ajax({
    url: 'https://swapi-api.alx-tools.com/api/films/?format=json',
    type: 'GET',
    dataType: 'json',
    success: function(data) {
      // Loop through the movies and add each title to the <ul id="list_movies">
      $.each(data.results, function(index, movie) {
        $('#list_movies').append('<li>' + movie.title + '</li>');
      });
    },
    error: function(jqXHR, textStatus, errorThrown) {
      console.error('Error fetching movies data:', errorThrown);
    }
  });
});

