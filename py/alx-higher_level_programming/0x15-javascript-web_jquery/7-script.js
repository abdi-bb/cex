$(document).ready(function() {
	$.ajax({
		url: 'https://swapi-api.alx-tools.com/api/people/5/?format=json',
		type: 'GET',
		dataType: 'json',
		success: function(data) {
			$('DIV#character').text(data.name);
		},
		error: function(jqXHR, testStatus, errorThrown) {
			console.error('Error fetching character data:', errorThrown);
		}
	});
});
