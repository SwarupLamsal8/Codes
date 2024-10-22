import React, { useState } from 'react'

function ToDoList() {
    
    const [tasks, setTasks] = useState(["Eat Breakfast", "Take Shower", "Go to Sleep"]);
    const [newTask, setNewTasks] = useState("");
    
    function handleInputChange(event) {
        setNewTasks(event.target.value);
    }

    function addTask() {
        if (newTask.trim() !== "") {
            setTasks(t => [...t, newTask]);
            setNewTasks("");
        }
    }

    function deleteTask(index) {
        const updatedTasks = tasks.filter((_, i) => i !== index);
        setTasks(updatedTasks);
    }

    function moveTasksUp(index) {
        if (index > 0) {
            const updatedTasks = [...tasks];
            [updatedTasks[index], updatedTasks[index - 1]] =
                [updatedTasks[index - 1], updatedTasks[index]];
            setTasks(updatedTasks);
        }
    }

    function moveTasksDown(index) {
        if (index < tasks.length - 1) {
            const updatedTasks = [...tasks];
            [updatedTasks[index], updatedTasks[index + 1]] =
                [updatedTasks[index + 1], updatedTasks[index]];
            setTasks(updatedTasks);
        }
    }

    return (
        <div className='to-do-list'>
            
            <h1>To-Do-List</h1>
            
            <div>
                <input
                    type="text"
                    placeholder='Enter a Task'
                    value={newTask}
                    onChange={handleInputChange}
                />
                <button
                    className='add-button'
                    onClick={addTask}
                >Add Task</button>
            </div>

            <ol>
                {tasks.map((task, index) =>
                    <li key={index}>
                        <span className='text'>{task}</span>
                        <button
                            className='delete-button'
                            onClick={() => deleteTask(index)}
                        >Delete</button>
                        <button
                            className='move-button'
                            onClick={() => moveTasksUp(index)}
                        >👆</button>
                        <button
                            className='move-button'
                            onClick={() => moveTasksDown(index)}
                        >👇</button>
                    </li>)}
            </ol>

        </div>
    );
}

export default ToDoList;

    
//         const [tasks, setTask] = useState(["Eat your Breakfast","Fuck around","Eat Lunch"]);
//         const [newTask, setNewTasks] = useState("");

//         function handleNewTasks(event) {
//             setNewTasks(event.target.value);
//         }

//         function handleTasks() {
//             if (newTask.trim() !== "") {
//                 setTask(t => [...t, newTask]);
//             }
//         }
    
//         function handleRemoveTask(index) {
//             const rearrangedTasks = tasks.filter((_, i) => i !== index)
//             setTask(rearrangedTasks);
//         }

//         function handleMoveTaskUp(index) {
//             const updatedTask = [...tasks];
//             if (index > 0) {
//                 [updatedTask[index], updatedTask[index - 1]] = [updatedTask[index - 1], updatedTask[index]];
//             }
//             setTask(updatedTask);
//         }

//         function handleMoveTaskDown(index) {
//             const updatedTask = [...tasks];
//             if (index < tasks.length -1) {
//                 [updatedTask[index], updatedTask[index + 1]] = [updatedTask[index + 1], updatedTask[index]];
//             } 
//             setTask(updatedTask);
//         }

//         return (
//             <div className='to-do-list'>
            
//                 <h1>To-Do-List</h1>
                
//                 <input type="text" className='input-tasks' onChange={handleNewTasks} value={newTask} />
//                 <button className='add-button' onClick={handleTasks}>Add Task</button>

//                 <ul>
//                     {tasks.map((task, index) =>
//                         <li key={index}>
//                             <span className='text'>{task}</span>
//                             <button className='delete-button' onClick={() => handleRemoveTask(index)}>Remove</button>
//                             <button className='move-button' onClick={() => handleMoveTaskUp(index)}>👆</button>
//                             <button className='move-button' onClick={() => handleMoveTaskDown(index)}>👇</button>
//                         </li>
//                 )}
//                 </ul>
            
//             </div>
//         );

//     } 
// export default ToDoList;