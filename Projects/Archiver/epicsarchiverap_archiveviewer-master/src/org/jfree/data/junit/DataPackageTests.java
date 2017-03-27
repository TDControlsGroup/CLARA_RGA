/* ===========================================================
 * JFreeChart : a free chart library for the Java(tm) platform
 * ===========================================================
 *
 * (C) Copyright 2000-2004, by Object Refinery Limited and Contributors.
 *
 * Project Info:  http://www.jfree.org/jfreechart/index.html
 *
 * This library is free software; you can redistribute it and/or modify it under the terms
 * of the GNU Lesser General Public License as published by the Free Software Foundation;
 * either version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License along with this
 * library; if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * [Java is a trademark or registered trademark of Sun Microsystems, Inc. 
 * in the United States and other countries.]
 *
 * ---------------------
 * DataPackageTests.java
 * ---------------------
 * (C) Copyright 2001-2004, by Object Refinery Limited and Contributors.
 *
 * Original Author:  David Gilbert (for Object Refinery Limited);
 * Contributor(s):   Richard Atkinson;
 *
 * $Id: DataPackageTests.java,v 1.1.1.1 2007/01/29 22:46:52 rdh Exp $
 *
 * Changes
 * -------
 * 16-Nov-2001 : Version 1 (DG);
 * 30-Sep-2002 : Added tests for the Regression class (DG);
 * 17-Oct-2002 : Fixed errors reported by Checkstyle (DG);
 * 05-Mar-2003 : Added tests for the DefaultKeyedValues class (DG);
 * 13-Mar-2003 : Added tests for the DefaultKeyedValue class (DG);
 * 12-Aug-2003 : Added tests for TableXYDataset class (RA);
 * 23-Dec-2003 : Added tests for XYDataItem, XYSeries and DefaultTableXYDataset (DG);
 * 23-Mar-2004 : Added tests for DateRange class (DG);
 * 23-Aug-2004 : Restructured org.jfree.data package (DG);
 *
 */

package org.jfree.data.junit;

import junit.framework.Test;
import junit.framework.TestCase;
import junit.framework.TestSuite;

/**
 * Some tests for the <code>org.jfree.data</code> package that can be run using JUnit.
 * You can find more information about JUnit at 
 * <a href="http://www.junit.org">http://www.junit.org</a>.
 */
public class DataPackageTests extends TestCase {

    /**
     * Returns a test suite to the JUnit test runner.
     *
     * @return The test suite.
     */
    public static Test suite() {
        TestSuite suite = new TestSuite("org.jfree.data");
        suite.addTestSuite(DefaultKeyedValueTests.class);
        suite.addTestSuite(DefaultKeyedValuesTests.class);
        suite.addTestSuite(DefaultKeyedValues2DTests.class);
        suite.addTestSuite(KeyedObjectTests.class);
        suite.addTestSuite(KeyedObjectsTests.class);
        suite.addTestSuite(KeyedObjects2DTests.class);
        suite.addTestSuite(RangeTests.class);
        return suite;
    }

    /**
     * Constructs the test suite.
     *
     * @param name  the test suite name.
     */
    public DataPackageTests(final String name) {
        super(name);
    }

}