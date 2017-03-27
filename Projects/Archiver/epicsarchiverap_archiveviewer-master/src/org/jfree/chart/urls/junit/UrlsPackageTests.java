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
 * UrlsPackageTests.java
 * ---------------------
 * (C) Copyright 2003, 2004, by Object Refinery Limited.
 *
 * Original Author:  David Gilbert (for Object Refinery Limited);
 * Contributor(s):   -;
 *
 * $Id: UrlsPackageTests.java,v 1.1.1.1 2007/01/29 22:46:51 rdh Exp $
 *
 * Changes:
 * --------
 * 21-Mar-2003 : Version 1 (DG);
 * 13-Aug-2003 : Added new tests (DG);
 * 01-Mar-2004 : Added StandardXYURLGeneratorTests (DG);
 *
 */

package org.jfree.chart.urls.junit;

import junit.framework.Test;
import junit.framework.TestCase;
import junit.framework.TestSuite;

/**
 * A collection of tests for the org.jfree.chart.urls package.
 * <P>
 * These tests can be run using JUnit (http://www.junit.org).
 *
 */
public class UrlsPackageTests extends TestCase {

    /**
     * Returns a test suite to the JUnit test runner.
     *
     * @return the test suite.
     */
    public static Test suite() {
        TestSuite suite = new TestSuite("org.jfree.chart.urls");
        suite.addTestSuite(CustomXYURLGeneratorTests.class);
        suite.addTestSuite(StandardCategoryURLGeneratorTests.class);
        suite.addTestSuite(StandardPieURLGeneratorTests.class);
        suite.addTestSuite(StandardXYURLGeneratorTests.class);
        return suite;
    }

    /**
     * Constructs the test suite.
     *
     * @param name  the suite name.
     */
    public UrlsPackageTests(String name) {
        super(name);
    }

}