// Package weather includes functions and variables to forecast weather.
package weather

var (
	// CurrentCondition represents current weather conditions.
	CurrentCondition string
	// CurrentLocation has current location of which the weather is being observed.
	CurrentLocation  string
)

// Forecast does something, sure.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
