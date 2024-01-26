/** RectangleInterface Code*/

#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

class RectangleInterface
{
public:
	/** Updates the 
	 @param  newWidth the new width for the rectagle
	 @pre       newWidth must be larger than zero
	 @post   If newWidth is valid, the width
	         of this object is set to newWidth
			 Otherwise, the rectangle is not updated 
	 @return  True if this object is updated,
	          and false otherwise. */ 
	virtual void setWidth(double newWidth) = 0;
	
    

    /** Updates the 
     * @param newHeight with the new height for the rectangle
     * @pre  newHeight needs to be above 0
     * @post If newHeight is valid, the height of the 
     *       rectangle is set to newHeight
     *       Otherwise the rectangle is not updated 
     * @return True if the rectangle is updated and 
     *          false if otherwise */
    virtual void setHeight(double newHeight) = 0; 

	/** Gets the width  of this rectangle
	 @return The width of this rectangle. */
	virtual double getwWidth() const = 0;
	
    /** Gets the height of the rectangle  
     * @return the width of this rectangle. */
     virtual double getHeight() const = 0;

	/** Gets the area  of this Rectanlge
	 @return The area of this Rectanlge. */
	virtual double getArea() const = 0;

	/** Destroys this Rectangle and frees its assigned memory. */
	virtual ~RectangleInterface() {}
};
#endif